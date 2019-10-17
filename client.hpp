#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "compte.hpp"

using namespace std;

class Client{
protected:

    string prenom;
    string nom;
    int numTEL;

private:

    Compte *cpt;
    long Cin;

  public:

    //Constructeur
    Client();
    Client(Compte *proprio, string iprenom, string inom, int inulTEL, long icin);
    

    //Methodes
    int authentification();
    void deposer();
    void retirer();
    float consulterSOLDE();
    void virement(Client);
    void  ChangerMDP(Client);



};
#endif
