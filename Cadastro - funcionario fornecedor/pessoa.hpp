#ifndef PESSOA_H
#define PESSOA_H

#define vrs 1

#include <iostream>

using namespace std;

class Pessoa {
private:
protected:
    string m_nome;
    string m_telefone;
    string m_endereco;
public:
    Pessoa () { this->SetCadastro(); };
    ~Pessoa () {};

    void SetCadastro(){
      string nome, tell, end;
      if(vrs) cout << "nome?" << endl;
        getline(cin, nome);
      m_nome = nome;
      if(vrs) cout << "telefone?" << endl;
        getline(cin, tell);
      m_telefone = tell;
      if(vrs) cout << "endereco?" << endl;
        getline(cin, end);
      m_endereco = end;
    }
    string GetNome(){ return m_nome;}
    string GetTell(){ return m_telefone; }
    string GetEnd(){ return m_endereco; }


};
#endif
