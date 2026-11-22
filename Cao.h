//
// Created by joaos on 21/11/2026.
//

#ifndef EX2FEITOPORMIM_CAO_H
#define EX2FEITOPORMIM_CAO_H
#include "Animal.h"



class Cao : public Animal{
public:
    Cao(string n,int d,string p):Animal(n,d,p,"cao") {};
    string  comer() override;
    string exercita() override;

};


#endif //EX2FEITOPORMIM_CAO_H
