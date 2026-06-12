/*O sistema possui:

Matemática
Física
Química
Menu interativo
Classes abstratas
Herança
Polimorfismo */

#ifndef FORMULA_H
#define FORMULA_H

class Formula {
public:
    virtual void calcular() = 0;
    virtual ~Formula() {}
};

#endif