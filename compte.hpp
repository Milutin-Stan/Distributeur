#ifndef COMPTE_H
#define COMPTE_H
#include <string>


using namespace std;

class Compte {
private:

    long num;
    int code;
    float solde;
    string iban;

public:
  //Constructeurs
    Compte();
    Compte(long inum, int icode, float isolde);

    //Accesseurs et Muttateurs
    int getCode();
    void setCode(int);
    float getSolde();
    void setSolde(float);

    //Methodes
    void debiter();
    void crediter();
    void consulterRIB();
    void commandeCHEQUE();


};
#endif
