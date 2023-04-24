/*Calcular la tabla de multiplicar
de un numero*/
#include<iostream>

using namespace std;

void obtenerTabla(int num);

int main(int argc, char const *argv[])
{
    /* code */
    int numero;
    cout << "Dime un #: ";
    cin >> numero;
    obtenerTabla(numero);
    return 0;
}

void obtenerTabla(int num){
    for(int i=1; i<= 12; i++){
        cout << num << " * " << i  << " = " << num * i << endl;
    }
}