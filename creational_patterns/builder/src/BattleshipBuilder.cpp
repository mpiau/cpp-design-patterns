/*
** BattleshipBuilder class
** Created by Khalyn
*/

#include "BattleshipBuilder.hpp"

void BattleshipBuilder::buildHp() noexcept {
	this->mShip->setHp(30000);
}

void BattleshipBuilder::buildFirepower() noexcept {
	this->mShip->setFirepower(5000);
}

void BattleshipBuilder::buildArmoring() noexcept {
	this->mShip->setArmoring(45000);
}

void BattleshipBuilder::buildName() noexcept {
	this->mShip->setName("The Battleship");
}
