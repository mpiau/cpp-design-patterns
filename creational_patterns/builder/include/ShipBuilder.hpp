/*
** ShipBuilder class
** Created by Khalyn
*/

#ifndef BUILDER_SHIPBUILDER_HPP
#define BUILDER_SHIPBUILDER_HPP

#include <memory>
#include "Ship.hpp"

class ShipBuilder {
public:
	virtual ~ShipBuilder() = default;

	std::unique_ptr<Ship> getShip() noexcept;
	void	createNewShip() noexcept;

	virtual void buildHp() noexcept = 0;
	virtual void buildFirepower() noexcept = 0;
	virtual void buildArmoring() noexcept = 0;
	virtual void buildName() noexcept = 0;

protected:
	std::unique_ptr<Ship>	mShip;
};

#endif //BUILDER_SHIPBUILDER_HPP
