#include <iostream>
#include <string>
#include "compte.hpp"

using namespace std;

#include "client.hpp"
//Constructeurs
Client::Client(){

    prenom = "test";
    nom = "test";
    numTEL = 0600000000;
    Cin = 111111111111;

}
Client::Client(Compte *icpt,string iprenom, string inom, int inulTEL, long icin){


    cpt = icpt;
    prenom = iprenom;
    nom = inom;
    numTEL = inulTEL;
    Cin = icin;
}


//Methodes

int Client::authentification(){

  int i=0;
  int q;
  int code = cpt->getCode();
  int verif=0;
  cout << "Ecrivez le code : ";

  while(i < 4){
  cin >> q;
  if (q == code) {
    verif = 1;
    return(0);
  }
  else {
    cout << "Erreur réessayez le code : " << endl;
    i++;
    }
  }
//Si on rate 3 fois on termine le programme
  if (verif == 0){
    exit(1);
  }
return 0;
}

void Client::deposer(){

    float in;
    float solde;
    cout << "Combien voulez vous deposer : " << endl;
    cin >> in;
    solde = cpt->getSolde();
    solde = solde + in;
    cpt->setSolde(solde);

}

void Client::retirer(){

    float out;
    float solde;
    cout << "Combien voulez vous retirer : " << endl;
    cin >> out;
    solde = cpt->getSolde();
    solde = solde - out;
    cpt->setSolde(solde);
}

float Client::consulterSOLDE(){

  return cpt->getSolde();
}

void Client::virement(Client tapt){

    float a;
    float solde;
    float b;
    cout <<"Mettez le montant de votre virement :" << endl;
    cin >> a;
    solde = this -> cpt->getSolde();
    solde = solde - a;
    this -> cpt->setSolde(solde);
    b = tapt.cpt -> getSolde();
    b = b+a;
    tapt.cpt -> setSolde(b);

}
void Client::ChangerMDP(Client lolz){

    int tapt;
    cout << "Mettez le nouveau code :" ;
    cin >> tapt;
    lolz.cpt->setCode(tapt);

}
