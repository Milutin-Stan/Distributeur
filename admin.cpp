#include <iostream>
#include <string>
#include "admin.hpp"

using namespace std;

//Constructeurs
Admin::Admin(){

    nom = "test";
    prenom = "test";
    mdp = "test";
}
Admin::Admin(string inom, string iprenom, string imdp){

    nom = inom;
    prenom = iprenom;
    mdp = imdp;
}

//Methodes

Client Admin::MakeClient(){

    Client tapt(new Compte(1111111111111111,4321,2000), "Milutin", "Stanojevic", 0600000066, 111111111111);
    return tapt;
}
