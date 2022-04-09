#ifndef OPERADOR_H
#define OPERADOR_H

#include "pessoa.hpp"
#include "funcionario.hpp"

using namespace std;

class Operador : public Empregado {
private:
    float m_producao;
    float m_comissao;

public:
    Operador () { this->SetProd(); this->SetCom(); this->Set_Calc_Salary();};
    ~Operador () {};

    void SetProd() {float v; if(vrs) cout << "Produziu?" << endl; cin >> v; m_producao = v; }
    void SetCom() { m_comissao = m_producao * 0.10; }
    void Set_Calc_Salary() { m_salario += m_comissao - m_imposto; }
    void GetInfo() {  cout << " - Operador: " << m_nome << endl
                  << " - Endereco: " << m_endereco  << endl
                  << " - Telefone: " << m_telefone  << endl
                  << " - Comissao: " << m_comissao  << endl
                  << " - Impostos: " << m_imposto   << endl
                  << " - Salario: "  << m_salario   << endl; }

};

#endif
