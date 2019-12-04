/*
** ShipBuilder class
** Created by Khalyn
*/

#include "ShipBuilder.hpp"

std::unique_ptr<Ship> ShipBuilder::getShip() noexcept {
	return std::move(this->mShip);
}

void ShipBuilder::createNewShip() noexcept {
	this->mShip = std::make_unique<Ship>();
}
