#include "person.hpp"

int menu(vector<person_pf>& listapf, vector<person_pj>& listapj){
  if(fdebug) cout << "_____________________________________" << endl;
  if(fdebug) cout << listapf.size() << "F" << ' '
                  << listapj.size() << "J" << endl;
     if(fdebug) cout << "Digite uma opcao: " << endl;
     if(fdebug) cout << "1. Insere Pessoa Física, ok" << endl;
     if(fdebug) cout << "2. Insere Pessoa Jurídica, ok" << endl;
     if(fdebug) cout << "3. Remover Pessoa, ok" << endl;
     if(fdebug) cout << "4. Pesquisar Nome" << endl;
     if(fdebug) cout << "5. Visualizar Alfabetico" << endl;
     if(fdebug) cout << "6. Visualizar por Grupo" << endl;
     if(fdebug) cout << "7. Sair" << endl;
  char cha;
  cin >> cha;
  return cha;
}
