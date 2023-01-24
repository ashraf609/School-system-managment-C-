#ifndef EMPLOYECOMMISSION_H
#define EMPLOYECOMMISSION_H
#include <string>
#include "Employe.h"
#include <iostream>
#include "Personne.h"
using namespace std;
class EmployeCommission:public Employe
{
    public:
        EmployeCommission();
        EmployeCommission(string,string,int,char,string,double);
        void afficher();
        double salaire();
        virtual ~EmployeCommission();

    protected:

    private:
        double fixe;
};

#endif // EMPLOYECOMMISSION_H
