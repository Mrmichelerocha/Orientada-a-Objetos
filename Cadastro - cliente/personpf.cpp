#include "person.hpp"

person_pf inserePessoaPF(){
    person_pf newp;

    if(fdebug) cout << "Insira o nome: " << endl;
    getline(cin, newp.nome);
    if(fdebug) cout << "Insira o CPF: " << endl;
    getline(cin, newp.cpf);
    if(fdebug) cout << "Insira endereço: " << endl;
    getline(cin, newp.endereco);
    if(fdebug) cout << "Insira data de nascimento: " << endl;
    getline(cin, newp.datanas);
    if(fdebug) cout << "Insira estado civil (S)olteiro, (C)asado, (D)ivorciado: " << endl;
    getline(cin, newp.estadocv);

    return newp;
}
