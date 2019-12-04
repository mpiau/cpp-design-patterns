/*
** AirCraftCarrierBuilder class
** Created by Khalyn
*/

#include "AircraftCarrierBuilder.hpp"

void AircraftCarrierBuilder::buildHp() noexcept {
	this->mShip->setHp(75000);
}

void AircraftCarrierBuilder::buildFirepower() noexcept {
	this->mShip->setFirepower(1500);
}

void AircraftCarrierBuilder::buildArmoring() noexcept {
	this->mShip->setArmoring(10000);
}

void AircraftCarrierBuilder::buildName() noexcept {
	this->mShip->setName("The Aircraft Carrier");
}
