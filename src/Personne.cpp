#include "Personne.h"
#include <iostream>
#include <string>
Personne::Personne(string nom,string prenom,int age,char sexe)
{
    this -> nom = nom;

    this -> prenom = prenom;

    this -> age = age;

    this -> sexe = sexe;
}
string Personne::getNom()const
{
    return nom;
}
string Personne::getPrenom()const
{
    return prenom;
}
int Personne::getAge()const
{
    return age;
}
char Personne::getSexe()const
{
    return sexe;
}
void Personne::setNom(string nom)
{
    this -> nom = nom;
}
void Personne::setPrenom(string prenom)
{
    this -> prenom = prenom;
}
void Personne::setAge(int age)
{
    this -> age = age;
}
void Personne::setSexe(char sexe)
{
    this -> sexe = sexe;

}
Personne::~Personne()
{
    //dtor
}
