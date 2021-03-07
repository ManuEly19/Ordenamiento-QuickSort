#include <iostream>
#include "ordenamiento.h"
#include "operaciones.h"
using namespace std;
using namespace ordenamiento;
using namespace imprimir;

int main() {
  int A[10]= {88, -6, 69, -33, 98, 7, 23, -5, 0, 100};
  cout<<"Arreglo desordenado"<<endl;
  imprimirArreglo(A,10);
  cout<<endl;
  ordenar(A,0,9);
  cout<<"Arreglo ordenado"<<endl;
  imprimirArreglo(A,10);
  cout<<endl;
  return 0;
}