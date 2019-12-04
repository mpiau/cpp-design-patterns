/*
** main file
** Created by Khalyn
*/

#include "Shipyard.hpp"
#include "AircraftCarrierBuilder.hpp"
#include "BattleshipBuilder.hpp"

int	main() {
	Shipyard shipyard;

	std::unique_ptr<AircraftCarrierBuilder> aircraftCarrierBuilder = std::make_unique<AircraftCarrierBuilder>();
	shipyard.setBuilder(std::move(aircraftCarrierBuilder));
	std::unique_ptr<Ship> ship = shipyard.createShip();
	ship->displayState();

	std::unique_ptr<BattleshipBuilder> battleshipBuilder = std::make_unique<BattleshipBuilder>();
	shipyard.setBuilder(std::move(battleshipBuilder));
	ship = shipyard.createShip();
	ship->displayState();
	return 0;
}