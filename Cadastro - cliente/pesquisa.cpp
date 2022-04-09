#include "person.hpp"

void pesquisar(vector<person_pf>& listapf, vector<person_pj>& listapj){
  string query;
  cout << "quem?" << endl;
  getline(cin, query);
  for(size_t i=0; i<listapf.size(); i++){
    size_t Loc = listapf.at(i).nome.find(query);
    if (Loc != string::npos) {
      cout << listapf.at(i).nome << "-> PJ Pos: " << i << endl;
    }
  }
  for (size_t i = 0; i < listapj.size(); i++) {
    size_t Loc = listapj.at(i).nomepj.find(query);
    if (Loc != string::npos) {
      cout << listapj.at(i).nomepj << "-> PJ Pos: " << i << endl;
    }
  }
}
