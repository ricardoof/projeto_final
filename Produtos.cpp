#include <iostream>
#include "Produtos.h"

Produtos::Produtos(std::string nome, std::string studio, std::string classificacaoEtaria, float preco, std::string disponibilidade, std::string avaliacoes) : 
    _nome(nome), _studio(studio), _classificacaoEtaria(classificacaoEtaria), _preco(preco), _disponibilidade(disponibilidade), _avaliacoes(avaliacoes) 
{

}

Produtos::~Produtos() {

}

void Produtos::informacoesDoProduto() {
	std::cout << "Nome do produto: " << _nome << std::endl;
	std::cout << "Nome do studio: " << _studio << std::endl;
	std::cout << "Classificacao etaria: " << _classificacaoEtaria << std::endl;
	std::cout << "Preco do produto: R$ " << _preco << std::endl;
	std::cout << "Disponibilidade do produto: " << _disponibilidade << std::endl;
	std::cout << "Avaliacao do produto: " << _avaliacoes << std::endl;
}

std::string Produtos::get_nome() {
    return _nome;
}

std::string Produtos::get_studio() {
    return _studio;
}

std::string Produtos::get_classificacaoEtaria() {
    return _classificacaoEtaria;
}

float Produtos::get_preco() {
    return _preco;
}

std::string Produtos::get_disponibilidade() {
    return _disponibilidade;
}

std::string Produtos::get_avaliacoes() {
    return _avaliacoes;
}