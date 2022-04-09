#include "person.hpp"

void alfa(vector<person_pf>& listapf, vector<person_pj>& listapj, vector<string>& aux ){
  aux.clear();
  for (size_t i=0; i<listapf.size(); i++){
    aux.push_back(listapf.at(i).nome);
  }
  for (size_t i = 0; i < listapj.size(); i++) {
    aux.push_back(listapj.at(i).nomepj);
  }
  sort(aux.begin(), aux.end());

  cout << "_____________________________________" << endl;
  cout << "ordem alfabetica" << endl;
  for(size_t i=0; i<aux.size(); i++) {
    cout << aux.at(i)<< "posi: " << i << endl;
  }
}
