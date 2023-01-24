#include "EmplyeCommission.h"
#include "Employe.h"
#include <iostream>
#include <string>
#include "Personne.h"
#include <typeinfo>
using namespace std;
EmployeCommission::EmployeCommission(string nom,string prenom,int age,char sexe,string service,double fixe):Employe(nom,prenom,age,sexe,service)
{
    this -> fixe = fixe;
}
void EmployeCommission::afficher()
{   cout<<"\tle type de personne : "<<typeid(EmployeCommission).name()<<endl;
    Employe::afficher();
    cout<<"\tle fixe est : "<<fixe<<endl;
}
double EmployeCommission::salaire()
{
    return salaire();
}
EmployeCommission::~EmployeCommission()
{
    //dtor
}
