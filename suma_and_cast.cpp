#include <iostream>

using namespace std;

int suma;

int main(){

    double numero1 = 0;
    double numero2 = 0;
    int numero1_int = 0;
    int numero2_int = 0;

    cout<< "ingrese numero 1: ";
    cin >> numero1;

    while(numero1 - (int)numero1 != 0){
        numero1 = 0;
        cout<< "ingrese numero 1: ";
        cin >> numero1;
    }

    cout<< "ingrese numero 2: ";
    cin >> numero2 ;

    while(numero2 - (int)numero2 != 0){
        numero2 = 0;
        cout<< "ingrese numero 2: ";
        cin >> numero2;
    }

    numero1_int = numero1;
    numero2_int = numero2;


    suma = numero1_int + numero2_int;

    cout<< "la suma es "<< suma;
    return 0;
}
