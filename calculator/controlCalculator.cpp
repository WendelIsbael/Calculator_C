#include "controlCalculator.h"
#include <iostream>
#include <string>
using namespace std;

// Inicio da função mostrarMenu
int controlCalculator::mostarMenu() {
    int opcao = -1; //Criando e instanciando a variavel 

    cout << "\n----------------------------------";
    cout << "\n            calculadora           ";
    cout << "\n----------------------------------";
    cout << "\n";
    cout << "0 - Sair\n";
    cout << "1 - Adicao\n";
    cout << "2 - Subtracao\n";
    cout << "3 - multiplicacao\n";
    cout << "4 - divicao\n";
    cout << "5 - potencia\n\n";
    cin >> opcao;// Input do valor da variavel
    cout << "\n";
    return opcao;
}
// Fim da função 


//Inicio da função controlOperacoes
void controlCalculator::controlOperacoes() {

    int opcao = 0; // criando e instanciando a variavel local

    do {
        coletaNumbers();
        system("cls");
        opcao = mostarMenu();   // passando o valor da função para a variavel 

        switch (opcao) {

        case 0:
            cout << "Obrigado...!!!\n\n";
            break;

        case 1:
            cout << modelCalculator.getNumber1() << " + " << modelCalculator.getNumber2() << " = " << modelCalculator.soma() << "\n\n";
            break;

        case 2:
            cout << modelCalculator.getNumber1() << " - " << modelCalculator.getNumber2() << " = " << modelCalculator.subtracao() << ("\n\n");
            break;

        case 3:
            cout << modelCalculator.getNumber1() << " * " << modelCalculator.getNumber2() << " = " << modelCalculator.multiplicacao() << "\n\n";
            break;

        case 4:

            if (modelCalculator.divicao() == -1)
            {
                cout << "Impossivel fazer a operacao\n\n";
            }
            else
            {
                cout << modelCalculator.getNumber1() << " / " << modelCalculator.getNumber2() << " = " << modelCalculator.subtracao() << "\n\n";
            }
            break;
        case 5:
            cout << modelCalculator.getNumber1() << " ^ " << modelCalculator.getNumber2() << " = " << modelCalculator.potencia() << "\n\n";

        default:
            cout << "Opçao Invalida\n\n";
            break;
        }

    } while (opcao != 0);
}
// Fim da função 


//inicio da função coletaNumbers
void controlCalculator::coletaNumbers() {

    float localNum1 = 0;        // Criando e instanciando as variaveis locais
    float localNum2 = 0;

    cout << "Insira 1 numero: ";
    cin >> localNum1;
    modelCalculator.setNumber1(localNum1);      //função set recebe como parametro o valor da variavel local

    cout << "Insira 2 numero: ";
    cin >> localNum2;
    modelCalculator.setNumber2(localNum2);

}
// fim da função