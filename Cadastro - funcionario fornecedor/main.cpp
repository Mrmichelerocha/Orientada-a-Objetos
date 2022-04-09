#include "pessoa.hpp"
#include "adm.hpp"
#include "operario.hpp"
#include "vendedor.hpp"
#include "fornecedor.hpp"
#include "funcionario.hpp"

int main(int argc, char const *argv[]) {

  while (true) {
    if(vrs) cout << "1 Fornecedor" << endl;
    if(vrs) cout << "2 administrador" << endl;
    if(vrs) cout << "3 operador" << endl;
    if(vrs) cout << "4 vendedor" << endl;
    if(vrs) cout << "0 sair" << endl;
    char ch;
    cin >> ch;
    cin.ignore();
      if (ch == '1') {
        Fornecedor d;
        d.GetInfo();
      }
      if (ch == '2') {
        Adm c;
        c.GetInfo();
      }
      if (ch == '3') {
        Operador b;
        b.GetInfo();
      }
      if (ch == '4') {
        Vendedor a;
        a.GetInfo();
      }
      if (ch == '0') {
        if(vrs)cout << "Leaving..." << endl;
        // system("cls");
        break;
      }
  };
  return 0;
}
