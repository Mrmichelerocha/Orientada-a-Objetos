#include "dictionary.hpp"

vector<string> LoadDictionary(const char* path)
{
  cout << "tentando carregar: " << path << endl;
  ifstream file;
  string tmp;
  file.open(path);
  vector<string> list;
  if(file.is_open() == true){
    while(getline(file, tmp)){
      //cout << "string is : " << tmp << endl;
// o push_back ele adiciona um novo elemento no final do vetor
      list.push_back(tmp);
    }
// o erase apaga elementos e o begin aponta para o inicio
    list.erase(list.begin()+0);
  }
  return list;
}

// não entendo os parametros
bool searchWord(const vector<string>& list, string query, size_t& index){
  for(size_t i=0; i<list.size(); i++){
    if(list.at(i) == query){
        index = i;
        return true;
    }
  }
  return false;
}

vector< pair<size_t, string > > searchSubstring(const vector<string>& list, string query)
{
    vector< pair<size_t, string > > substringList;
    //implement here !!!!
    for(size_t i=0; i<list.size(); i++)
    {
        string strlist = list.at(i);
        size_t found = strlist.find(query);
        if (found!=string::npos)
        {
            pair<size_t, string> p(i, list.at(i));
            substringList.push_back(p);
        }
    }
    return substringList;
}
