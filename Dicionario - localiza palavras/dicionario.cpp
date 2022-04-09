#include "dicionario.hpp"

vector<string> e_dicionario(const char* nome){
  cout << "vamos carregar o arquivo de texto:" << nome << endl;
  ifstream arquivo;
  arquivo.open(nome);
  string armazena_linha_temporario;
  vector<string> lista;
  if (arquivo.is_open()== true) {
// o gitline le um arquivo is e passa ele para str na variavel
// tipo string e quando chega no pula linha ele apaga
    while (getline(arquivo, armazena_linha_temporario)) {
      // cout << "Linha:" << armazena_linha << endl;
//o push_back aponta para o final da lista e insere a variavel armazena_linha
// o push_back adiciona um novo elemento no final do vetor
      lista.push_back(armazena_linha_temporario);
    }
  } return lista;
}

vector<pair<size_t, string>> searchSubstring(const vector<string>& lista, string procure){
    vector<pair<size_t, string>> substringList;
  for(size_t i=0; i<lista.size(); i++){
    string strlist = lista.at(i);
    size_t found = strlista.find(query);
    if (found!=string::npos)
    {
        pair<size_t, string> p(i, list.at(i));
        substringList.push_back(p);
    }
  }
  return substringList;
}
