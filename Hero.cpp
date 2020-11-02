#include <iostream>
#include <string>

#include "Hero.h"

Hero::Hero(const std::string name,
	unsigned int hp) :
	name(name), hp(hp), max_hp(hp)
{
	std::cout << "Hõs inicializálás..." << name << " kuldetesre kesz!\n\n";
}

Hero::~Hero()
{
	std::cout << name << " elhagyja a helyszint..." << std::endl;
}

std::string Hero::getName() { return name; }

unsigned int Hero::getHp() { return hp; }

void Hero::addHp(unsigned int hp)
{
	if (this->hp > 0) {
		this->hp += hp;
		if (this->hp > max_hp)
		{
			hp = max_hp;
		}
	}
	else {
		std::cout << "Meghaltam, nem tudsz gyogyitani" << std::endl;
	}
}

void Hero::removeHp(unsigned int diff_hp)
{
	if (this->hp <= diff_hp) {
		this->hp = 0;
	}
	else {
		this->hp -= diff_hp;
	}
}

void Hero::attack(Hero& other)
{
	std::cout << "MEGSEBZEM: " << other.getName() << std::endl;
	if (this->weapon != nullptr) {
		other.removeHp(weapon->getDamage());
	}
}

void Hero::heal(Hero& other) {
	std::cout << "MEGGYOGYITOM: " << other.getName() << std::endl;
	other.addHp(HEAL_DIFF);
}

void Hero::addWeapon(Weapon* weapon)
{
	this->weapon = weapon;
}

void Hero::print() {
	std::cout << "Hos nev: " << name << std::endl;
	std::cout << "Eletereje: " << hp << " HP" << std::endl;
	if (weapon != nullptr) {
		std::cout << "Fegyvere: " << weapon->getName() << " (" <<
			weapon->getDamage() << " DMG/turn)" << std::endl;
	}
	std::cout << "|=======================|" << std::endl;
}