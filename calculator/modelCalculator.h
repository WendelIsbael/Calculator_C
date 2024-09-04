#pragma once
class modelCalculator
{
private:
    float num1;
    float num2;

public:
    // Prototipos do Get e Set do num1
    float  getNumber1();
    void setNumber1(float _num1);

    // Prototipos do Get e Set do num2
    float  getNumber2();
    void setNumber2(float _num2);


    float soma(); // função para somar dois numeros
    float subtracao(); // função para subtrair dois numeros
    float multiplicacao();
    float divicao();
    float potencia();
};

