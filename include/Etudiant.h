#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Personne.h"
#include <string>
class Etudiant:public Personne
{
    public:
        Etudiant();
        Etudiant(string,string,int,char,int);
        void afficher();
        virtual ~Etudiant();

    protected:

    private:
        int note;
};

#endif // ETUDIANT_H
