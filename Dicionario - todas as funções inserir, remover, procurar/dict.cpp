#include "dict.hpp"

// Dictionary::Dictionary()
// {
//
// }
// Dictionary::~Dictionary()
// {
//
// }

Dictionary::Dictionary(string path) {
    LoadDictionary(path);
}
bool Dictionary::LoadDictionary(string path) {
    m_path = path;

    ifstream file;
    file.open(path);

    if(file.is_open() == true)
    {
        string tmp;
        while(getline(file, tmp))
        {
            m_list.push_back(tmp);
        }

        m_list.erase(m_list.begin()+0);
    }
    else
        return false;

    return true;
}
void Dictionary::Getpesq(string query, size_t i) {
    vector<pair<size_t, string>>  substringList;
    size_t found = m_list.at(i).find(query);
      if (found!=string::npos)  {
        pair<size_t, string> p(i, m_list.at(i));
          substringList.push_back(p);
      }
      for (size_t i=0; i<substringList.size(); i++)  {
        cout << "Dictionary ID:" << " -> dictionary path: " << m_path
        << " -> word pos: " << substringList.at(i).first
        << " -> word: "  << substringList.at(i).second << endl;
    }
}
void Dictionary::Getremove(string query, size_t j) {
  size_t found = m_list.at(j).find(query);
    if (found < m_list.at(j).length())  {
       m_list.erase(m_list.begin()+j);
    }
}
