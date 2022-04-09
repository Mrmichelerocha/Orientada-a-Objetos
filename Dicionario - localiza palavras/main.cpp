#include "dicionario.hpp"

int main(int argc, char const *argv[]) {
  vector<string> status;
  lista = e_dicionario(argv[1]);
  if (lista.size() == 0){
    cout << "Arquivo não encontrado" << endl;
    return 1;
  }
  for (size_t i=0; i<lista.size(); i++){
    //cout << "Word #" << i+1 << " -> " << list.at(i) << endl;
  }
//pesquisa a palavra no Arquivo
  string procure = argv[2]
  size_t indice=0;
  bool localiza = busca_palavra(lista, procure, indice)
  if(located){
    cout << "palavra :" << procure << " foi localizado no indice: " << indece << endl;
  }
  else{
    cout << "não exite:" << procure << " in our dictionary" << endl;
  }

  //SEARCH SUBSTRINGS IN OUR DICTIONARY
  vector< pair<size_t, string > > substringList = searchSubstring(lista, procure);
  for (size_t i=0; i<substringList.size(); i++){
      cout << "Pair #" << i+1 << " -> " << substringList.at(i).first << " - " << substringList.at(i).second << endl;
  }
 return 0;
}
