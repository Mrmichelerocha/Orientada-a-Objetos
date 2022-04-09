#ifndef FORNECEDOR_H
#define FORNECEDOR_H

#include "pessoa.hpp"

class Fornecedor : public Pessoa  {
private:
  float m_credito;
  float m_divida;

public:
  Fornecedor (): m_credito(500), m_divida(0) { this->SetCredito(); };
  ~Fornecedor () {};

  void  SetCredito(){
    float v;
    if(vrs) cout << "Credito?" << endl;
    cin >> v;
    if (m_credito - v > 0 ) {
      m_divida += v;
      m_credito -= v;
    } else {
      if(vrs) cout << "Credito Insuficiente" << endl;
    }
  }
  void GetInfo() {  cout << " - Fornecedor: " << m_nome << endl
                << " - Endereco: " << m_endereco  << endl
                << " - Telefone: " << m_telefone  << endl
                << " - Divida: "   << m_divida  << endl
                << " - Credito: " << m_credito   << endl; }

};
#endif
