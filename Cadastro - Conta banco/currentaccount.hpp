#ifndef CURRENT_H
#define CURRENT_H

#include "client.hpp"
#include "currentaccount.hpp"
// #include "accountspecial.hpp"

using namespace std;

class Account
{
private:

protected:
    float m_saldo;
    Cliente m_nome;

public:
    Account () : m_saldo(0) { if(vrs) cout << "constructor *" <<  endl; };
    Account (string b) : m_nome(Cliente(b)), m_saldo(0) { if(vrs) cout << "constructor %" <<  endl; };
   ~Account () {};

    void SetDeposit(float deposit)  { m_saldo += deposit;}
    bool SetWithdraw(float withdraw)
    {
      if (m_saldo-withdraw < 0)
      {
        if(vrs) cout << "saldo insuficiente, seu saldo e -> " << m_saldo << endl;
        return false;
      }else{
        if(vrs) cout << ".....-> " << m_saldo << endl;
        m_saldo -= withdraw;
        return true;
      }
    }
    bool SetTransf(float valor, Account a)
    {
      if (m_saldo-valor > 0) {
        m_saldo -= valor;
        a.SetDeposit(valor);
        a.GetInfo();
        return true;
      } else  {
        return false;
      }
    }
    float GetSaldo()  { return m_saldo; }
    void GetInfo()
    {
       if(vrs) cout << "->" << m_nome.GetName() << endl;
       if(vrs) cout << "->" << m_saldo << endl;
    }

};

#endif
