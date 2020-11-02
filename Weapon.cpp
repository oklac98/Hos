#include <iostream>
#include <string>

#include "Weapon.h"

Weapon::Weapon(const std::string name,
	unsigned int damage,
	unsigned int ammo) :
	name(name), damage(damage), ammo(ammo)
{}

void Weapon::use()
{
	ammo--;
}

std::string Weapon::getName()const {
	return name;
}

unsigned int Weapon::getDamage() { return damage; }