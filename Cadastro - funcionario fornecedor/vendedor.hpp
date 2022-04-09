#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "pessoa.hpp"
#include "funcionario.hpp"

using namespace std;

class Vendedor : public Empregado {
private:
  float m_vendas;
  float m_comissao;

public:
  Vendedor () { this->SetVendas(); this->SetCom(); this->Set_Calc_Salary();};
  ~Vendedor () {};

  void SetVendas() {float v; if(vrs) cout << "vendas?" << endl; cin >> v; m_vendas = v; }
  void SetCom() { m_comissao = m_vendas * 0.15;}
  void Set_Calc_Salary() { m_salario += m_comissao - m_imposto; }
  void GetInfo() {  cout << " - Vendedor: " << m_nome << endl
                << " - Endereco: " << m_endereco  << endl
                << " - Telefone: " << m_telefone  << endl
                << " - Comissao: " << m_comissao  << endl
                << " - Impostos: " << m_imposto   << endl
                << " - Salario: "  << m_salario   << endl; }

};

#endif
