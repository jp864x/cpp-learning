//
// Created by joaos on 21/11/2026.
//

#ifndef EX2FEITOPORMIM_ANIMAL_H
#define EX2FEITOPORMIM_ANIMAL_H


#include <iostream>
using namespace std;
#include <string>





class Animal {
private:
    string nome;
    float peso;
    string data;
    static int codigo;
    string tipo;

    string codigoT;  //armazena (1xxx-CAO/GATO)
    bool naClinica = false;
    int noite;


public:
    Animal(string n,int p,string d);
    Animal(string n,int p,string d,string t);

    //getters
    string getNome()const {return nome;};
    float getPeso()const {return peso;};
    string getData()const {return  data;};
    string getCodigo() const {return codigoT;};
    string getTipo() const {return tipo;};

    //setter
    void setPeso(float p) {peso=p;};
    int& setNoite();            //noite=casa || dia = clinica

    //show

    std::string showAll() const;
    //consulta se e de dia ou noite
    void ShowTimeDia() const;

    //funcao partilhada por polimorfismo com cao e gato
    virtual string comer() ;  // =0 funcao virtual pura funcao que dedclaro na classe e nao implemento nela
                            // !! ELA TEMM QUE TER IMPLEMENMTACAO DE OUTRAS NAO PODE  SER DECLARADA

    virtual string exercita();

};


#endif //EX2FEITOPORMIM_ANIMAL_H
