#include <iostream>
#include <string>

#include "Hero.h"


int main(){
	int gomb=999;
	Hero Batman("Batman", 150);
	Hero Asta("Asta", 120);
	Weapon bat("Batarang", 80);
	Weapon bs("Black sword", 20);
	std::cout << "Mit szeretnel tenni?" << std::endl;
	std::cout << "(1)Karakterek kiirasa " << std::endl;
	std::cout << "(2)Fegyver felrakas " << std::endl;
	std::cout << "(0)Kilepes" << std::endl;
	while (gomb != 0) {
		std::cout << "Add meg a menupont gombjat: " << std::endl;
		std::cin >> gomb;
		switch (gomb) {
		case 1: Batman.print(), Asta.print(); break;
		case 2: std::cout << "Kit akarsz felfegyverezni? "; {
			std::string nev;
			std::cin >> nev;
			if (nev == "Asta") {
				Asta.addWeapon(&bs);
				std::cout << nev << " megkapta ezt: " << bs.getName() << std::endl;
				}
			else if (nev == "Batman") {
				Batman.addWeapon(&bat);
				std::cout << nev << " megkapta ezt: " << bat.getName() << std::endl;
			}
			}break;
		}
	}
	Batman.attack(Asta);
	Batman.attack(Asta);
	Batman.heal(Asta);
	Asta.print();
}