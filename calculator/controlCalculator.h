#pragma once
#include "modelCalculator.h"
class controlCalculator
{
private:

public:
	modelCalculator modelCalculator;
	int mostarMenu(); // fun��o para mostrar o menu e as op��es disponiveis
	void controlOperacoes(); // Fun��o para controlar a calculadora
	void coletaNumbers(); // Fun��o para coletar os numeros digitados

};

