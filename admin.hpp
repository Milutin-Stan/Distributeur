#ifndef ADMIN_H
#define ADMIN_H
#include <string>
#include "client.hpp"

using namespace std;

class Admin : public Client{

private:

  string nom;
  string prenom;
  string mdp;

public:

//Constructeurs
  Admin();
  Admin(string inom, string iprenom, string imdp);

//Methodes
  Client  MakeClient();

};
#endif
