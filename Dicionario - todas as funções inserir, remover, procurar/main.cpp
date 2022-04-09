#include "dict.hpp"

#define fdebug 0

int main()
{
    vector<Dictionary> listdict;

    while(true)
    {
        if(fdebug) cout << "Insert an option: " << endl;
        if(fdebug) cout << "1.Insert Dictionary" << endl;
        if(fdebug) cout << "2.Show dictionaries (all)" << endl;
        if(fdebug) cout << "3.Search (substring from everywhere)" << endl;
        if(fdebug) cout << "4.Insert word (in the last dictionary)" << endl;
        if(fdebug) cout << "5.Remove word (substring all from everywhere)" << endl;
        if(fdebug) cout << "6.Remove duplicates (all from everywhere)" << endl;
        if(fdebug) cout << "0.Quit" << endl;

        char ch;
        cin >> ch;

        //fflush()
        cin.ignore();

        if(ch == '1')
        {
            if(fdebug) cout << "Enter a dictionary path: ";
            string path;
            cin >> path;

            Dictionary a(path);
            if(a.GetSize() > 0) listdict.push_back(a);

            //Dictionary a;
            //if(a.LoadDictionary(path))  listdict.push_back(a);
            //continue;
        }
        if(ch == '2')
        {
            for(size_t i=0; i<listdict.size(); i++)
            {
              cout << "Dictionary path : " << listdict.at(i).GetPath() << endl;
              for(size_t j=0; j<listdict.at(i).GetSize(); j++)
              {
                cout << " -> " << listdict.at(i).GetWord(j) << endl;
              }
            }
        }
        if(ch == '3')
        {
          cout << "oq procurar?" << endl;
          string query;
          cin >> query;
          for(size_t i=0; i<listdict.size(); i++)  {
              for(size_t j=0; j<listdict.at(i).GetSize(); j++)  {
                listdict.at(i).Getpesq(query, j);
                // if(loca) cout << i+1 << endl;
              }
          }
        }
        if(ch == '4')
        {
            if(fdebug) cout << "Enter with a new word : ";
            string newword;
            cin >> newword;

            listdict.at(listdict.size()-1).Insert(newword);
        }
        if(ch == '5')
        {
          if(fdebug) cout << "Enter word to remove : ";
          string remword;
          cin >> remword;
          for(size_t i=0; i<listdict.size(); i++)
          {
            for(size_t j=0; j<listdict.at(i).GetSize(); j++)
            {
              listdict.at(i).Getremove(remword, j);
            }
          }
        }
        if(ch == '6')
        {
          if (fdebug) cout << "removing repeted" << endl;
          vector<string> together;
          vector<size_t> w;
          vector<size_t> v;
          for (size_t i = 0; i < listdict.size(); i++) {
            for (size_t j = 0; j < listdict.at(i).GetSize(); j++) {
              pair<size_t, string> p(j, listdict.at(i).GetWord(j));
              together.push_back(listdict.at(i).GetWord(j));
              w.push_back(j);
              v.push_back(i);
            }
            // listdict.at(i).Getduplicates(together, i);
          }
          stable_sort(together.begin(), together.end());
          cout << "_______" << endl;
          for (size_t i = 0; i < together.size(); i++) {
            cout << "dictionary #" << v.at(i) << " "
            << listdict.at(v.at(i)).GetPath() << "-> word pos: "
            << w.at(i) << "-> words: " << together.at(i) << endl;
          }
          size_t i=0;
          size_t acum[listdict.size()];
          for (size_t i = 0; i < listdict.size(); i++) {
            acum[i]=0;
          }
          while(i < together.size()-1)  {
            if(together.at(i) == together.at(i+1))
            {
                acum[v.at(i+1)]++;
                together.erase(together.begin() + i+1);
            }
            else
                i++;
          }
          for (size_t i = 0; i < together.size(); i++) {
            cout << "dict pos:" << v.at(i) << "-> word pos: "
            << w.at(i) << "-> words: " << together.at(i) << endl;
          }
          for (size_t i = 0; i < listdict.size(); i++) {
            cout << "dictionary #" << i << " " << listdict.at(i).GetPath() << "-> lost "
            << acum[i] << " words: " << "-> now has " << listdict.at(i).GetSize()-acum[i]
            << endl;
          }

        }

        if(ch == '0') break;

        if(fdebug) cout << "________________________________" << endl;
        if(fdebug) cout << "Loaded dictionaries: " << listdict.size() << endl;
        if(fdebug) cout << "________________________________" << endl;
    }
    return 0;
}
