#ifndef MAXIMOP_H_
#define MAXIMOP_H_

#include "Problema.h"
#include "MaximoS.h"

class MaximoP: public Problema {
public:
  MaximoP(int);
  MaximoP(int n, int* v, int ini, int fin, int max);
  virtual ~MaximoP();
  
  bool isCasoMinimo();
  pair<Problema*,Problema*> descomponer();
  void solver(Solucion* s);
  
  void iniciarVector();
  
private:
  int _n;
  int* _v;
  int _ini;
  int _fin;
  int _max;
};

#endif /* MAXIMOP_H_ */