#include "person.hpp"

void remove (vector<person_pf>& listapf, vector<person_pj>& listapj){
  int posi;
  string pos;
  cout << "removendo" << endl;
  cout << "Quem gostaria de remover? F/J" << endl;
  getline(cin, pos);
  if (pos == "F") {
    cout << "posição para remover?" << endl;
    cin >> posi;
    listapf.erase(listapf.begin()+posi);
  }
  if(pos == "J"){
    cout << "posição para remover?" << endl;
    cin >> posi;
    listapj.erase(listapj.begin()+posi);
  }
}
