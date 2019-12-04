/*
** Shipyard class
** Created by Khalyn
*/

#ifndef BUILDER_SHIPYARD_HPP
#define BUILDER_SHIPYARD_HPP

#include <memory>

#include "ShipBuilder.hpp"

class Shipyard {
public:
	~Shipyard() = default;

	void	setBuilder(std::unique_ptr<ShipBuilder> shipBuilder) noexcept;
	std::unique_ptr<Ship>	createShip() const;

private:
	std::unique_ptr<ShipBuilder>	mShipBuilder;
};

#endif //BUILDER_SHIPYARD_HPP
