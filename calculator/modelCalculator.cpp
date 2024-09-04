#include "modelCalculator.h"
#include <iostream>
#include <string>

using namespace std;

// Get e Set do Num1
float modelCalculator::getNumber1() {
    return num1;
}
void modelCalculator::setNumber1(float _num1) {
    this->num1 = _num1;
}

// Get e Set do num2
float modelCalculator::getNumber2() {
    return num2;
}
void modelCalculator::setNumber2(float _num2) {
    this->num2 = _num2;
}

/*-----------------------Funções de Operações-----------------------*/

// Inicio da função soma
float modelCalculator::soma() {

    return getNumber1() + getNumber2();

}

float modelCalculator::subtracao() {

    return getNumber1() - getNumber2();

}
// fim da função 

float modelCalculator::multiplicacao() {

    return getNumber1() * getNumber2();

}

float modelCalculator::divicao() {


    if (getNumber2() <= 0)
    {
        return -1;
    }
    else
    {
        return getNumber1() / getNumber2();
    }

}

float modelCalculator::potencia() {

    float result = 1;

    for (int i = 0; i < getNumber2(); i++) {
        result *= getNumber1();
    }
    return result;
}