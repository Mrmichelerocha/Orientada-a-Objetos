#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "pessoa.hpp"
#include "funcionario.hpp"

using namespace std;

class Adm : public Empregado {
private:
    float m_ajuda;

public:
    Adm () { this->SetProd(); this->Set_Calc_Salary(); };
    ~Adm () {};

    void SetProd() { float v; if(vrs) cout << "Ajuda?" << endl; cin >> v; m_ajuda = v; }
    void Set_Calc_Salary() { m_salario += m_ajuda - m_imposto; }
    void GetInfo() {  cout << " - Administrador: " << m_nome << endl
                  << " - Endereco: " << m_endereco  << endl
                  << " - Telefone: " << m_telefone  << endl
                  << " - Ajuda: " << m_ajuda  << endl
                  << " - Impostos: " << m_imposto   << endl
                  << " - Salario: "  << m_salario   << endl; }
};

#endif
