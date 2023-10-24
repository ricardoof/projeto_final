#include <iostream>
#include <string>
#include "Products.h"
#include "Games.h"

void gameInformation(Games game1) {
	std::cout << game1.get_name() << std::endl;
	std::cout << game1.get_studio() << std::endl;
	std::cout << game1.get_ageRating() << std::endl;
	std::cout << game1.get_price() << std::endl;
	std::cout << game1.get_availability() << std::endl;
	std::cout << game1.get_assessments() << std::endl;
	std::cout << game1.get_gender() << std::endl;
	std::cout << game1.get_platform() << std::endl;
	std::cout << game1.get_languages() << std::endl;
	std::cout << game1.get_releaseDate() << std::endl;
	
}

int main() {
	Games game1("The Last of Us", "Naughty Dog", "18+", 199.99, "Disponivel", "10/10", "Acao", "PS4", "Portugues", "14/06/2013");
	
    gameInformation(game1);

	std::cout << std::endl;

	game1.set_name("Hollow Knight");
	game1.set_studio("Team Cherry");
	game1.set_ageRating("Livre");
	game1.set_price(37.99);
	game1.set_availability("Indisponivel");
	game1.set_assessments("9/10");
	game1.set_gender("Acao");
	game1.set_platform("PC");
	game1.set_languages("Portugues");
	game1.set_releaseDate("24/02/2017");

	gameInformation(game1);
	
	return 0;
}