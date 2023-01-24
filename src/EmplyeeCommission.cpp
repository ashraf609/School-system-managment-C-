#include "EmplyeeCommission.h"
#include "Employe.h"
#include <iostream>
#include <string>
#include "Personne.h"
#include <typeinfo>
using namespace std;
EmplyeeCommission::EmplyeeCommission(string nom,string prenom,int age,char sexe,string service,double ca , double taux):Employe(nom,prenom,age,sexe,service)
{
    this -> ca = ca;
    this -> taux = taux;
}
void EmplyeeCommission::afficher()
{   cout<<"\tle type de personne : "<<typeid(EmplyeeCommission).name()<<endl;
    Employe::afficher();
    cout<<"\tle ca est : "<<ca<<endl;
    cout<<"\tLe taux est : "<<taux<<endl;
}
double EmplyeeCommission::salaire()
{
    return salaire();
}
EmplyeeCommission::~EmplyeeCommission()
{
    //dtor
}
