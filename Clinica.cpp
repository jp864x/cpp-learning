//
// Created by joaos on 21/11/2026.
//

#include "Clinica.h"

#include <cstring>


static int MAX=200;

Clinica::Clinica() {

    cout<<"\n Clinica Criada\n";

}
Clinica::~Clinica() {
    cout<<"\n Clinica Destruida\n";
}


//Registar um novo animal, o qual já existe (não nascem animais na clínica).

void Clinica::RegistaAnimal(Animal* b) {

    for (int i=0;i<contagem;i++) {
        if (a[i]==b) {

            cout<<"Animal : " << b->getNome() << " ja existe na clinica";
            return;
        }
    }
    if (contagem>=MAX) {
        cout<<"Nao há mais espaco para animais na clinica";
        return;
    }
    if (a[contagem]==nullptr ) {
        a[contagem]=b;
        cout<<"\nAnimal Adicionado com sucesso";
        contagem++;
        //animal esta na clinica logo e de dia, nao de noite
        b->setNoite() = 0;

        cout<<"\n---------------------------------------\n";
        cout<<"Animais atualmente na clinica: "<< contagem << "\n";

    } else {
        cout << "Já esta ocupado";
    }
}

//Obter uma lista completa com a descrição de todos os animais.

void Clinica::MostraClinica() {
    if (contagem==0) {
        cout<<"-------------------";
        cout<<"\nClinica Vazia\n";
        cout<<"-------------------";
        return;
    }


    cout <<"\n Animais na Clinica: ";

    for (int i=0;i<contagem;i++) {
      cout<< a[i]->showAll();
    }

}

// Remover um animal dado o seu código.

void Clinica::EliminaAnimal(string s) {
    for (int i=0;i<contagem;i++) {
        //se tiver so 1 animal mete ponteiro a zero

        // se tiver mais
        if (a[i]->getCodigo()==s) {
            cout<<"Animal Identificado";
            // apenas 1 animal
            if (i==0) {
                cout << "\nAnimal :" << a[i]->getNome() << " eliminado com sucesso!\n";
                a[i]=nullptr;
                contagem--;
                break;
            } else {
                cout << "\nAnimal :" << a[i]->getNome() << " eliminado com sucesso!\n";
                a[i]=a[i+1];
                contagem--;
                break;
            }

        }

    }

}

//Obter a descrição de um animal dado o código (a descrição deve permitir saber que tipo de animal e

void Clinica::MostraAnimal(string s) {

    if (contagem==0) {
        cout << "\nNao ha nenhum animal na Clinica, logo nao da para mostrar: "<< s << "\n";
        return ;
    }

    for (int i=0;i<contagem;i++) {
        if (a[i]->getCodigo()==s) {
            cout << a[i]->showAll();
            return;
        }

    }
    cout<<"\nNao conseguiu identificar o animal ou ja nao existe\n";

}

void Clinica::AlimentaTodos() {
    for (int i=0;i<contagem;i++) {
        a[i]->comer();
    }

}

void Clinica::ExercitaTodos(){
    for (int i=0;i<contagem;i++) {
        a[i]->exercita();
    }

}