#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "Personne.h"
#include <string>
using namespace std;
class Employe:public Personne
{
    public:
        Employe();
        Employe(string,string,int,char,string);
        void afficher();
        virtual double salaire() = 0;
        virtual ~Employe();

    protected:

    private:
        string service;
};

#endif // EMPLOYE_H
