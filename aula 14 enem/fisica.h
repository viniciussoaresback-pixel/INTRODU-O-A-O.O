#ifndef FISICA_H
#define FISICA_H

#include "Formula.h"

class Fisica : public Formula {
public:
    void calcular() override;
};

#endif