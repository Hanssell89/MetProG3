#include<iostream>

using namespace std;

int edad = 62;

void saludo1(){
    cout << "Hola mundo" << endl;
}

void saludo2(){
    cout << "#somosUCA" << endl;
}

void saludo3(){
    cout << "Estamos en nuestro aniversario # " << edad << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    saludo1();
    saludo2();
    saludo3();
    return 0;
}
