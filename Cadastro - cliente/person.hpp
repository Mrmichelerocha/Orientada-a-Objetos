#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
#define fdebug 1


struct person_pf{
  string nome;
  string cpf;
  string endereco;
  string datanas;
  string estadocv;
};
struct person_pj{
  string nomepj;
  string razpj;
  string cnpj;
  string enderecopj;
  string datanaspj;
  string cap;
};
person_pf inserePessoaPF();
person_pj inserePessoaPJ();
void remove(vector<person_pf>& listapf, vector<person_pj>& listapj);
void impre(vector<person_pf>& listapf, vector<person_pj>& listapj);
void pesquisar(vector<person_pf>& listapf, vector<person_pj>& listapj);
void alfa(vector<person_pf>& listapf, vector<person_pj>& listapj, vector<string>& aux);
int menu(vector<person_pf>& listapf, vector<person_pj>& listapj);
