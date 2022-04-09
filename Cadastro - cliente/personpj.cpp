#include "person.hpp"

person_pj inserePessoaPJ(){
    person_pj newp;

    if(fdebug) cout << "Insira o nome: " << endl;
    getline(cin, newp.nomepj);
    if(fdebug) cout << "Insira a razão social: " << endl;
    getline(cin, newp.razpj);
    if(fdebug) cout << "Insira o CPF: " << endl;
    getline(cin, newp.cnpj);
    if(fdebug) cout << "Insira endereço: " << endl;
    getline(cin, newp.enderecopj);
    if(fdebug) cout << "Insira data de nascimento: " << endl;
    getline(cin, newp.datanaspj);
    if(fdebug) cout << "Insira capital" << endl;
    getline(cin, newp.cap);
    return newp;
}
