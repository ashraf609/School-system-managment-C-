#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
#include <iostream>
using namespace std;

class Personne
{

    public:
        Personne();
        Personne(string,string,int,char);
        string getNom()const;
        string getPrenom()const;
        int getAge()const;
        char getSexe()const;
        void setNom(string);
        void setPrenom(string);
        void setAge(int);
        void setSexe(char);
        virtual void afficher() = 0;
        virtual ~Personne();
    protected:

    private:
        string nom;
        string prenom;
        int age;
        char sexe;
};

#endif // PERSONNE_H
