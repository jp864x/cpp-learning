//
// Created by joaos on 22/11/2026.
//

#ifndef EX2FEITOPORMIM_GATO_H
#define EX2FEITOPORMIM_GATO_H
#include "Animal.h"


class Gato : public Animal {
private:


public:
    Gato(string n,int p,string data) : Animal(n,p,data,"gato"){};
    string  comer() override { return "o quê, este patê reles novamente?";}
    string exercita() override;
};


#endif //EX2FEITOPORMIM_GATO_H
