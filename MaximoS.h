#ifndef MAXIMOS_H_
#define MAXIMOS_H_

#include "Solucion.h"

class MaximoS: public Solucion {
public:
  MaximoS();
  virtual ~MaximoS();

  void resolver();
  void mezcla(pair<Solucion*,Solucion*>);
  Solucion* getInstance();

  void setValor(int);

private:
  int _n;  
  int* _v;
  int _max;
  
};

#endif /* MAXIMOP_H_ */