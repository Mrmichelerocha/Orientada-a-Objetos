#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "pessoa.hpp"

using namespace std;

class Empregado : public Pessoa {
private:
protected:
  float m_salario;
  float m_imposto;
  int   m_codigo;

public:
    Empregado (): m_salario(1000) { this->SetImposto(); }
   ~Empregado () {};

   void SetImposto() { m_imposto = m_salario*0.075; }
   void Set_Calc_Salary() { m_salario -= m_imposto; };
   // void GetInfo() {  cout << " - Vendedor: " << m_nome << endl
   //               << " - Endereco: " << m_endereco  << endl
   //               << " - Telefone: " << m_telefone  << endl
   //               << " - Comissao: " << m_comissao  << endl
   //               << " - Impostos: " << m_imposto   << endl
   //               << " - Salario: "  << m_salario   << endl; }


 };
 #endif
