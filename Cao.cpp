//
// Created by joaos on 21/11/2026.
//

#include "Cao.h"
#include <cstdlib>
#include <ctime>


string Cao::comer()  {
    //maximo de 20kg
    if (getPeso()>=20) {
       return "Nao podes comer mais ja estas gordo";
    }

    setPeso(getPeso()*1.5);
    return "biscoitos bons. obrigado";

}

string Cao::exercita() {



    int n=(rand()%5)+1;

    return "Corri "+ to_string(n) + " quilometros";

}