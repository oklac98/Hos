#pragma once
#include "Weapon.h"

constexpr unsigned int HEAL_DIFF = 20;

class Hero {
private:
	const std::string name;
	unsigned int hp;
	const unsigned int max_hp;
	mutable Weapon* weapon;
public:
	Hero(const std::string name,
		unsigned int hp);
	~Hero();
	std::string getName();
	unsigned int getHp();
	//támadás
	void attack(Hero& other);
	void removeHp(unsigned int diff_hp);
	//heal
	void heal(Hero& other);
	void addHp(unsigned int hp);
	//fegyver felrakás
	void addWeapon(Weapon* weapon);
	void print();
	
};