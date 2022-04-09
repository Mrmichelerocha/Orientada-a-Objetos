#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

vector<string> e_dicionario(const char* nome);

bool searchWord(const vector<string>& lista, string procure, size_t& indice);

vector< pair<size_t, string > > searchSubstring(const vector<string>& lista, string procure);
