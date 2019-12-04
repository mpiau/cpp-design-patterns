/*
** Shipyard class
** Created by Khalyn
*/

#include "Shipyard.hpp"

void Shipyard::setBuilder(std::unique_ptr<ShipBuilder> shipBuilder) noexcept {
	this->mShipBuilder = std::move(shipBuilder);
}

std::unique_ptr<Ship> Shipyard::createShip() const {
	if (this->mShipBuilder == nullptr)
		throw std::logic_error("[Shipyard]: Builder not configured.");
	this->mShipBuilder->createNewShip();
	this->mShipBuilder->buildHp();
	this->mShipBuilder->buildArmoring();
	this->mShipBuilder->buildFirepower();
	this->mShipBuilder->buildName();
	return this->mShipBuilder->getShip();
}

