#include "person.hpp"

void impre(vector<person_pf>& listapf, vector<person_pj>& listapj){
  cout << "_____________________________________" << endl;
  cout << "pessoa fisica" << endl;
  for(size_t i=0; i<listapf.size(); i++) {
    cout << listapf.at(i).nome << " _ pos:" << i << endl;
    cout << " -> "  << listapf.at(i).cpf << endl;
    cout << " -> "  << listapf.at(i).endereco << endl;
    cout << " -> "  << listapf.at(i).datanas << endl;
    cout << " -> "  << listapf.at(i).estadocv << endl;
  }
  cout << "_____________________________________" << endl;
  cout << "pessoa juridica: " << endl;
  for (size_t i = 0; i < listapj.size(); i++) {
    cout << listapj.at(i).nomepj << " _ pos:" << i << endl;
    cout << " -> "  << listapj.at(i).razpj << endl;
    cout << " -> "  << listapj.at(i).cnpj << endl;
    cout << " -> "  << listapj.at(i).enderecopj << endl;
    cout << " -> "  << listapj.at(i).datanaspj << endl;
    cout << " -> "  << listapj.at(i).cap << endl;
  }
}
