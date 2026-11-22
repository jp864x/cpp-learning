//
// Created by joaos on 21/11/2026.
//

#include "Animal.h"


int Animal::codigo=1000;






Animal::Animal(string n,int p,string d):nome(n),peso(p),data(d) {

    codigoT=n; // para conseguir remover pelo nome na clinica
    tipo=" ";
    if (p<0) {
        cout<<"Peso abaixo de 0";
    }

    cout<<"...Animal sem tipo definido... \n";

        codigo++;
    noite=1;   // de noite estao em casa com dono


}

string Animal::exercita() {
    return "\nAnimal a exercitar , nao se sabe o tipo\n";
}

string Animal::comer() {
    return "\nAnimal sem especie definida nao tem comportamento alimentar definido\n";
}

Animal::Animal(string n,int p,string d,string t):nome(n),peso(p),data(d) {

    if (p<0) {
        cout<<"Peso abaixo de 0";
        return ;
    }

    if (t=="cao") {
        string z=to_string(codigo);
        codigoT+=z;
        codigoT+='-';
        codigoT+=t;
    }else if (t=="gato") {
        string z=to_string(codigo);
        codigoT+=z;
        codigoT+='-';
        codigoT+=t;
    } else {
        cout << "\nTipo de Animal nao identificado";
    }

codigo++;
     noite=1;  //animal esta em casa com dono ha noite

}

string Animal::showAll() const{



    string resultado= "";



    resultado+="\n";

    if (tipo!=" ") {

     resultado+="Codigo: ";
    resultado+=getCodigo();
        resultado+="\n";

    }
        resultado +="\nNome: ";
        resultado +=getNome();
        resultado +="\n";

        resultado += "Peso: ";
        resultado += to_string(peso);
        resultado += "\n";

        resultado += "Data Aniversario: ";
        resultado += data;
        resultado +="\n---------------------------------------\n";



return resultado;
}

int& Animal::setNoite() {
    return noite;
}

void Animal::ShowTimeDia() const  {
    if (noite==1) {
        cout<<"\nStatus: E de Noite, animal " << getNome() << " esta em casa\n";
    } else {
        cout<<"\nStatus: E de Dia, animal "<< getNome() << " esta na clinica!\n";
    }


}


