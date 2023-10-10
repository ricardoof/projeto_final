#ifndef PRODUTOS_H
#define PRODUTOS_H
#include <string>

class Produtos{
    //Dados
    protected:
	std::string _nome;
	std::string _studio;
	std::string _classificacaoEtaria;
	float _preco;
	std::string _disponibilidade;
	std::string _avaliacoes;

	//Construtor
    public:
	Produtos(std::string nome, std::string studio, std::string classificacaoEtaria, float preco, std::string disponibilidade, std::string avaliacoes);

	//Destrutor
	~Produtos();

	//Metodos
	virtual void informacoesDoProduto();
	std::string get_nome();
	std::string get_studio();
	std::string get_classificacaoEtaria();
	float get_preco();
	std::string get_disponibilidade();
	std::string get_avaliacoes();
};

#endif
