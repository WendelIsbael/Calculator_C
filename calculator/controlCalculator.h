#pragma once
#include "modelCalculator.h"
class controlCalculator
{
private:

public:
	modelCalculator modelCalculator;
	int mostarMenu(); // função para mostrar o menu e as opções disponiveis
	void controlOperacoes(); // Função para controlar a calculadora
	void coletaNumbers(); // Função para coletar os numeros digitados

};

