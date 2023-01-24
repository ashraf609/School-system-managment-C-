#ifndef EMPLYEECOMMISSION_H
#define EMPLYEECOMMISSION_H
#include <string>
#include "Employe.h"
#include <iostream>
#include "Personne.h"
class EmplyeeCommission:public Employe
{
    public:
        EmplyeeCommission();
        EmplyeeCommission(string,string,int,char,string,double,double);
        void afficher();
        double salaire();
        virtual ~EmplyeeCommission();

    protected:

    private:
        double ca;
        double taux;
};

#endif // EMPLOYEECOMMISSION_H
