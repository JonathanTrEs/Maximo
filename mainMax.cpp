
#ifndef MAINMAX_
#define MAINMAX_

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include"Framework.h"
#include"MaximoP.h"
#include"MaximoS.h"
using namespace std;


int main(int argc, char* argv[]){
  if (argc != 2) {
    cout << "\nNúmero de parametros incorrecto. Encontrado " << argc-1 << " requerido 1."<< endl;
    exit(-1);
  }

  Problema* problema = new MaximoP(atoi(argv[1]));
  Solucion* solucion = new MaximoS();
  Framework* framework = new Framework();

  framework->divideyVenceras(problema, solucion);
  cout << "\nResultado:" << endl;
  solucion->resolver();

};

#endif /* MAINMAX_ */