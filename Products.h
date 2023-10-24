#ifndef PRODUCTS_H
#define PRODUCTS_H
#include <string>

class Products{
    // Data
    protected:
	std::string _name;    //Nome do produto
	std::string _studio;    //Nome do studio que produziu o produto
	std::string _ageRating;    //Classificacao etaria do produto
	float _price;    //Preco do produto
	std::string _availability;    //Disponibilidade do produto
	std::string _assessments;    //Avaliacoes do produto

	// Constructor
    public:
	Products(std::string name, std::string studio, std::string ageRating, float price, std::string availability, std::string assessments);

	// Destructor
	~Products();

	// Methods
    // Getters
	std::string get_name();    //Retorna o nome do produto
	std::string get_studio();    //Retorna o nome do studio que produziu o produto
	std::string get_ageRating();    //Retorna a classificacao etaria do produto
	float get_price();    //Retorna o preco do produto
	std::string get_availability();    //Retorna a disponibilidade do produto
	std::string get_assessments();    //Retorna as avaliacoes do produto
	// Setters
	void set_name(std::string name);    //Altera o nome do produto
	void set_studio(std::string studio);    //Altera o nome do studio que produziu o produto
	void set_ageRating(std::string ageRating);    //Altera a classificacao etaria do produto
	void set_price(float price);    //Altera o preco do produto
	void set_availability(std::string availability);    //Altera a disponibilidade do produto
	void set_assessments(std::string assessments);    //Altera as avaliacoes do produto
};

#endif
