#ifndef CLIENTE_H
#define CLIENTE_H

#define vrs 1

#include <iostream>
// #include "currentaccount.hpp"
// #include "accountspecial.hpp"

using namespace std;

class Cliente {
private:

protected:
  string  m_name;

public:
  Cliente () : m_name("") { if(vrs) cout << "constructor@" <<  endl; };
  Cliente (string name) : m_name(name) { if(vrs) cout << "constructor 1" <<  endl;};
 ~Cliente () {};

 string GetName() { return m_name; }
};

#endif
