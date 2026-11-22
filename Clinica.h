//
// Created by joaos on 21/11/2026.
//

#ifndef EX2FEITOPORMIM_CLINICA_H
#define EX2FEITOPORMIM_CLINICA_H
#include "Animal.h"


class Clinica {
private:
    Animal* a[200] = {};  //clinca suporta ate 200 animais
    int contagem=0;

public:
    Clinica();
    ~Clinica();

    void RegistaAnimal(Animal* b);
    void EliminaAnimal(string s);

    void MostraClinica();

    void MostraAnimal(string s);

    void AlimentaTodos();

    void ExercitaTodos();

};


#endif //EX2FEITOPORMIM_CLINICA_H
