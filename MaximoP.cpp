
#include "MaximoP.h"

MaximoP::MaximoP(int n) : Problema::Problema() {
  _n = n;
  _ini = 0;
  _fin = _n - 1;
  _v = new int[_n];
  iniciarVector();
  _max = _v[0];
}

MaximoP::MaximoP(int n, int* v, int ini, int fin, int max) {
  _n = n;
  _v = v;
  _ini = ini;
  _fin = fin;
  _max = max;
}

MaximoP::~MaximoP() {

}

void MaximoP::iniciarVector() {
  cout << "Introduzca " << _n << " elementos del vector" << endl;
  for (int i = 0; i < _n; i++)
    cin >> _v[i];
}

bool MaximoP::isCasoMinimo() {
  return (_fin <= _ini);
}

pair<Problema*,Problema*> MaximoP::descomponer() {
  int med = (_fin + _ini)/2;
  if (_max < _v[med])
    _max = _v[med];
  pair<Problema*,Problema*> subProblemas;
  subProblemas.first = new MaximoP(_n, _v, _ini, med, _max);
  subProblemas.second = new MaximoP(_n, _v, med + 1, _fin, _max);
  return subProblemas;
}

void MaximoP::solver(Solucion* s) {
  if (_ini == _fin) {
    _max = _v[_ini];
  }
  ((MaximoS*)s)->setValor(_max);  
}