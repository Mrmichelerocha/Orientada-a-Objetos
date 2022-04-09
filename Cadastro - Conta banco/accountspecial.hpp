#ifndef SPECIAL_H
#define SPECIAL_H

#include "currentaccount.hpp"

using namespace std;

class Special : public Account {
private:
  float m_limit;
  Cliente m_nome;

public:
    Special() : m_nome(Cliente("")), m_limit(200) {};
    Special(string b) : m_nome(Cliente(b)), m_limit(200) {};
   ~Special() {};

    bool SetWithdraw(float withdraw)
    {
      if (m_limit-withdraw < 0 && m_saldo - withdraw < 0 )
      {
          return false;
      } else if (m_saldo-withdraw < 0) {
          if(vrs) cout << "saldo insuficiente, seu saldo -> " << m_saldo << endl;
          if(vrs) cout << " Saque no Crediario " << endl;
          m_limit = (m_limit + m_saldo)-withdraw;
          m_saldo -= withdraw;
          if(vrs) cout << "Seu novo saldo -> " << m_saldo << endl;
          if(vrs) cout << "Seu novo limite -> " << m_limit<< endl;
          return true;
      } else {
          m_saldo -= withdraw;
          return true;
     }
    }
    void GetInfo()
    {
      if(vrs) cout << "->" << m_nome.GetName() << endl;
      if(vrs) cout << "->" << m_saldo << endl;
    }
};

#endif
