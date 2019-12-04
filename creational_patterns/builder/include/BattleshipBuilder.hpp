/*
** BattleshipBuilder class
** Created by Khalyn
*/

#ifndef BUILDER_BATTLESHIPBUILDER_HPP
#define BUILDER_BATTLESHIPBUILDER_HPP

#include "ShipBuilder.hpp"

class BattleshipBuilder : public ShipBuilder {
public:
	~BattleshipBuilder() final = default;

	void buildHp() noexcept override;
	void buildFirepower() noexcept override;
	void buildArmoring() noexcept override;
	void buildName() noexcept override;
};

#endif //BUILDER_BATTLESHIPBUILDER_HPP
