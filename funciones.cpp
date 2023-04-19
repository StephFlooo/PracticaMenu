#include <iostream>

using namespace std;
#define MAX 10

//Arreglo.
int edades[MAX];
int pos=0; //posicion del elemento

void agregarEdad(int edad);
bool hayEspacios();

void agregarEdad(int edad){
    edades[pos] = edad;
    pos++;
}

bool hayEspacios(){
    return pos < MAX;
}