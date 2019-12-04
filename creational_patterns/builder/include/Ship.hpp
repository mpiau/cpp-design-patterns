/*
** Ship class
** Created by Khalyn
*/

#ifndef BUILDER_SHIP_HPP
#define BUILDER_SHIP_HPP

#include <cstdint>
#include <string>

class Ship {
public:
	~Ship() = default;

	void	setHp(const int32_t hp) noexcept;
	void	setFirepower(const uint32_t firepower) noexcept;
	void	setArmoring(const uint32_t armoring) noexcept;
	void	setName(const std::string &name) noexcept;
	void	displayState() const noexcept;

private:
	int32_t mHp;
	uint32_t mFirepower;
	uint32_t mArmoring;
	std::string mName;
};

#endif //BUILDER_SHIP_HPP
