
#include "MaximoS.h"

MaximoS::MaximoS() : Solucion::Solucion() {
}

MaximoS::~MaximoS() {
}

void MaximoS::resolver() {
  cout << _max << endl;
}

void MaximoS::mezcla(pair<Solucion*,Solucion*> subSoluciones) {
  int max1 = (((MaximoS*)subSoluciones.first))->_max;
  int max2 = ((MaximoS*)subSoluciones.second)->_max;
  if (max1 > max2)
    _max = max1;
  else
    _max = max2;
}

Solucion* MaximoS::getInstance() {
  return new MaximoS();
}

void MaximoS::setValor(int max) {
  _max = max;
}