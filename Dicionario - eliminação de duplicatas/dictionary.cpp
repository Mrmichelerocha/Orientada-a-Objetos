#include "dictionary.hpp"

vector<string> LoadDictionary(const char* path)
{
    cout << "Trying to load: " << path << endl;
    ifstream file;
    file.open(path);
    string temporary_store;
    vector<string> list;
    if(file.is_open() == true)  {
      while(getline(file,  temporary_store))  {
        list.push_back( temporary_store);
      }
      list.erase(list.begin()+0);
    }
    return list;
}
