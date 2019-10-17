#include <iostream>
#include <string>

using namespace std;

#include "compte.hpp"
//Constructeurs
Compte::Compte(){

    num = 1111111111111111;
    code = 1234;
    solde = 1000;
    iban = "FR7630002032531234567890168";
}
Compte::Compte(long inum, int icode, float isolde){

    num = inum;
    code = icode;
    solde = isolde;
    iban = "FR7630002032531234567890168";
}

//Accesseurs et Muttateurs

int Compte::getCode(){
  return this -> code;
}
float Compte::getSolde(){
  return this -> solde;
}

void Compte::setCode(int ncode){
  this -> code = ncode;
}
void Compte::setSolde(float nsolde){
  this -> solde = nsolde;
}

//Methodes

void Compte::debiter(){

  float a;
  cout << "Combien voulez vous retirer : ";
  cin >> a;
  solde = solde - a;
  cout << "Votre solde actuel est de : "<< solde << endl;
}
void Compte::crediter(){

  float a;
  cout << "Combien voulez vous crediter : ";
  cin >> a;
  solde = solde + a;
  cout << "Votre solde actuel est de : "<< solde << endl;
}
/*float Compte::virement(Compte lol){

    float a;
    float b;
    cout << "Mettez le montant de votre virement :" << endl;
    cin >> a;
    solde =  solde - a;
    b = lol.getSolde();
    b = b + a;
    lol.setSolde(b);
    return b;
}*/
void Compte::consulterRIB(){

  cout << "Votre RIB : " << iban << endl;

}
void Compte::commandeCHEQUE(){

}
