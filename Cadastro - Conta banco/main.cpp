#include "client.hpp"
#include "currentaccount.hpp"
#include "accountspecial.hpp"

int main(int argc, char const *argv[]) {
    Account a();
    Account b("Rocha");
    b.SetDeposit(400);
    b.SetWithdraw(199);
    b.GetInfo();
    Account c("Pelegrine");
    c.SetDeposit(200);
    c.GetInfo();
    b.SetTransf(100, c );
    Special a("Martin");
    a.SetDeposit(400);
    a.SetWithdraw(399);
    a.GetInfo();
    a.SetWithdraw(10);
    a.GetInfo();
  return 0;
}
