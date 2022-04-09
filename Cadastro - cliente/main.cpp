#include <iostream>
#include "person.hpp"
int main(int argc, char const *argv[]) {
  vector<person_pf> listapf;
  vector<person_pj> listapj;
  vector<string> aux;

  for (;;) {
    char ch;
    ch = menu(listapf, listapj);
    cin.ignore(); //limpa buffer
    if (ch == '1') {
      cout << "inserindo pessoa fisica PF" << endl;
      person_pf newpf = inserePessoaPF();
      listapf.push_back(newpf);
    }
    if (ch == '2') {
      cout << "inserindo pessoa fisica PJ" << endl;
      person_pj newpj = inserePessoaPJ();
      listapj.push_back(newpj);
    }
    if (ch == '3') {
      remove(listapf, listapj);
    }
    if (ch == '4') {
      pesquisar(listapf, listapj);
    }
    if (ch == '5') {
      alfa(listapf, listapj, aux);
    }
    if (ch == '6') {
      impre(listapf, listapj);
    }
    if (ch == '7')  break;
    // system("cls");
  }
  return 0;
}
