#include "dictionary.hpp"
#include <algorithm>

int main(int argc, char* argv[])
{
    cout << "Dictionary 1:";
    string dict_file1;
    cin >> dict_file1;

    //LOADING DICTIONARY 1
    vector<string> list1 = LoadDictionary(dict_file1.c_str());
    if(list1.size() == 0){
      return 1;
    }

    cout << "Dictionary 2: ";
    string dict_file2;
    cin >> dict_file2;

    //LOADING DICTIONARY 2
    vector<string> list2 = LoadDictionary(dict_file2.c_str());
    if(list2.size() == 0){
      return 1;
    }

    //CONCATENATE
    for (size_t i=0; i<list2.size(); i++){
      list1.push_back(list2.at(i));
    }
    list2.clear();

    //eliminate duplicates
    //std::sort
    sort(list1.begin(), list1.end());

    size_t tamduplicata=0;
    size_t count=0;
    cout << "Tamanho minimo duplicata: ";
    cin >> tamduplicata;

    size_t i=0;
    while(i < list1.size()-1)
    {
        if((list1.at(i).length() >= tamduplicata) && (list1.at(i) == list1.at(i+1)))
        {
            list1.erase(list1.begin() + i);
        }
        else
            i++;
    }
    //DISPLAY DICTIONARY
    cout << "Duplicates:_" << count << endl;
    cout << "Filtered_Words:_" << list1.size() << endl;
    //PRINT LIST1
    cout << endl;
    for (size_t i=0; i<list1.size(); i++)
        cout << list1.at(i) << endl;


    return 0;
}
