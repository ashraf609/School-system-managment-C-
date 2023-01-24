#include "Etudiant.h"
#include <iostream>
#include <string>
#include "Personne.h"
#include <typeinfo>
using namespace std;
Etudiant::Etudiant(string nom,string prenom, int age,char sexe,int note):Personne(nom,prenom,age,sexe)
{
    this -> note = note;
}
void Etudiant::afficher()
{
    cout<<"\tle type de personne : "<<typeid(Etudiant).name()<<endl;
    cout<<"\tLe nom est:"<<getNom()<<endl;
    cout<<"\tLe prenom est:"<<getPrenom()<<endl;
    cout<<"\tL'age est:"<<getAge()<<endl;
    cout<<"\tLe sexe et note est:"<<getSexe()<<endl;
    cout<<"\tLa note est:"<<note<<endl;
}
Etudiant::~Etudiant()
{
    //dtor
}
