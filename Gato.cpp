//
// Created by joaos on 22/11/2026.
//

#include "Gato.h"

string Gato::exercita() {
    if (getPeso() * 0.9<=2.5) {
        return "\n Nao e possivel emagrecer mais\n";
    }

    else {
        setPeso(getPeso() * 0.9);


        int n=(rand()%4);
        int m=(rand()%3);

        return "\nDerrubei "+ to_string(n) + " jarras " + to_string(m) + " pessoas\n";
    }



}