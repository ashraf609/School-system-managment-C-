#include "Employe.h"
#include <iostream>
#include <string>
#include "Personne.h"
using namespace std;
Employe::Employe(string nom,string prenom, int age,char sexe,string service):Personne(nom,prenom,age,sexe)
{
    this -> service = service;
}
void Employe::afficher()
{
    cout<<"\tLe nom est:"<<getNom()<<endl;
    cout<<"\tLe prenom est:"<<getPrenom()<<endl;
    cout<<"\tL'age est:"<<getAge()<<endl;
    cout<<"\tLe sexe :"<<getSexe()<<endl;
    cout<<"\tLe service est :"<<service<<endl;
}
Employe::~Employe()
{

}
