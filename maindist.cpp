#include <iostream>
#include <string>
#include "client.hpp"
#include "compte.hpp"
#include "admin.hpp"
using namespace std;

int main(){

Admin g0;
Client a0;
Client a1;

a0=g0.MakeClient();
a1=g0.MakeClient();

g0.ChangerMDP(a0);
a0.authentification();

cout<< "Avant le virement a0 ="<<a0.consulterSOLDE()<<" a1 ="<<a1.consulterSOLDE() << endl;
a0.virement(a1);
cout<< "Apres le virement a0 ="<<a0.consulterSOLDE()<<" a1 ="<<a1.consulterSOLDE() << endl;

}
