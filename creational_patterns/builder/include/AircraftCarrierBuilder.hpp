/*
** AirCraftCarrierBuilder class
** Created by Khalyn
*/

#ifndef BUILDER_AIRCRAFTCARRIERBUILDER_HPP
#define BUILDER_AIRCRAFTCARRIERBUILDER_HPP

#include "ShipBuilder.hpp"

class AircraftCarrierBuilder : public ShipBuilder {
public:
	~AircraftCarrierBuilder() override = default;

	void buildHp() noexcept override;
	void buildFirepower() noexcept override;
	void buildArmoring() noexcept override;
	void buildName() noexcept override;
};

#endif //BUILDER_AIRCRAFTCARRIERBUILDER_HPP
