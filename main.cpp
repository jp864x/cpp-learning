
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Cao.h"
#include "Clinica.h"
#include "Gato.h"

using namespace std;

int main() {

    srand(time(NULL));

    // =================================
    // 1. Criar animais
    // =================================

    Clinica cX;

    Animal a{"Amy", 10, "15/04/26"};
    Cao c1{"MAX", 15, "10/03/20"};
    Gato g{"Pantufa", 3, "03/03/20"};

    // =================================
    // 2. Registar animais
    // =================================

    cout << "\n===== REGISTAR ANIMAIS =====\n";

    cX.RegistaAnimal(&a);
    cX.RegistaAnimal(&c1);
    cX.RegistaAnimal(&g);

    // Testar registo duplicado
    cX.RegistaAnimal(&a);


    // 3. Mostrar animais


    cout << "\n===== MOSTRAR CLINICA =====\n";

    cX.MostraClinica();

    cout << "\n===== MOSTRAR ANIMAL ESPECIFICO =====\n";

    cX.MostraAnimal("1001-cao");

    // =================================
    // 4. Testar comportamento dos animais
    // =================================

    cout << "\n===== COMPORTAMENTO =====\n";

    cout << "\nAnimal: " << a.comer();

    cout << "\nCao: " << c1.comer();
    cout << "\nCao: " << c1.exercita();

    cout << "\nGato: " << g.comer();
    cout << "\nGato: " << g.exercita();

    // =================================
    // 5. Testar alterações de peso
    // =================================

    cout << "\n===== PESOS =====\n";

    cout << "\nPeso Amy: " << a.getPeso();
    cout << "\nPeso MAX: " << c1.getPeso();
    cout << "\nPeso Pantufa: " << g.getPeso();

    // =================================
    // 6. Testar horários / estado
    // =================================

    cout << "\n===== ESTADO DOS ANIMAIS =====\n";

    a.ShowTimeDia();
    c1.ShowTimeDia();
    g.ShowTimeDia();

    // =================================
    // 7. Testar remoção
    // =================================

    cout << "\n===== ELIMINAR ANIMAL =====\n";

    cX.EliminaAnimal("1001-cao");

    cX.MostraClinica();

    return 0;
}
