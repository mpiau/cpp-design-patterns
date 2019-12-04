/*
** Ship class
** Created by Khalyn
*/

#include <iostream>

#include "Ship.hpp"

void	Ship::setHp(const int32_t hp) noexcept {
	this->mHp = hp;
}

void Ship::setFirepower(const uint32_t firepower) noexcept {
	this->mFirepower = firepower;
}

void Ship::setArmoring(const uint32_t armoring) noexcept {
	this->mArmoring = armoring;
}

void Ship::setName(const std::string &name) noexcept {
	this->mName = name;
}

void Ship::displayState() const noexcept {
	std::cout << "=== " << this->mName << " ===" << std::endl;
	std::cout << "HP       : " << this->mHp << std::endl;
	std::cout << "Armor    : " << this->mArmoring << std::endl;
	std::cout << "Firepower: " << this->mFirepower << std::endl;
}

