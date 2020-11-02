#pragma once
#include <string>


class Weapon {
private:
	const std::string name;
	unsigned int damage;
	unsigned int ammo;
public:
	Weapon(const std::string name,
		unsigned int damage = 10,
		unsigned int ammo = 5);
	void use();
	std::string getName() const;
	unsigned int getDamage();
};