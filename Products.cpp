#include <iostream>
#include "Products.h"

// Constructor
Products::Products(std::string name, std::string studio, std::string ageRating, float price, std::string availability, std::string assessments) : 
    _name(name), _studio(studio), _ageRating(ageRating), _price(price), _availability(availability), _assessments(assessments) 
{

}

// Destructor
Products::~Products() 
{

}

// Methods
// Getters
std::string Products::get_name() {    //Retorna o nome do produto
    return _name;
}

std::string Products::get_studio() {    //Retorna o nome do studio que produziu o produto
    return _studio;
}

std::string Products::get_ageRating() {    //Retorna a classificacao etaria do produto
    return _ageRating;
}

float Products::get_price() {    //Retorna o preco do produto
    return _price;
}

std::string Products::get_availability() {    //Retorna a disponibilidade do produto
    return _availability;
}

std::string Products::get_assessments() {    //Retorna as avaliacoes do produto
    return _assessments;
}
// Setters
void Products::set_name(std::string name) {    //Altera o nome do produto
    _name = name;
}

void Products::set_studio(std::string studio) {    //Altera o nome do studio que produziu o produto
    _studio = studio;
}

void Products::set_ageRating(std::string ageRating) {    //Altera a classificacao etaria do produto
    _ageRating = ageRating;
}

void Products::set_price(float price) {    //Altera o preco do produto
    _price = price;
}

void Products::set_availability(std::string availability) {    //Altera a disponibilidade do produto
    _availability = availability;
}

void Products::set_assessments(std::string assessments) {    //Altera as avaliacoes do produto
    _assessments = assessments;
}