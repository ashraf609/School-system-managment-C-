#include <iostream>
#include "Personne.h"
#include "Employe.h"
#include "Etudiant.h"
#include "EmplyeCommission.h"
#include "EmplyeeCommission.h"
using namespace std;
 Personne * ptr[100];
void addEtudiant(int cmp){
    string nom,prenom;
    char sexe;
    int age , note;
    cout << "Entrer le prenom :";
    cin >> prenom;
    cout << "Entrer le nom :";
    cin >> nom;
    cout << "Entrer l'age :";
    cin >> age;
    cout << "Entrer le sexe :";
    cin >> sexe;
    cout << "Entrer la note :";
    cin >> note;
    ptr[cmp] = new Etudiant(prenom,nom,age,sexe,note);
}
void addEmployeCommission(int cmp){
    string nom,prenom , service;
    char sexe;
    int age;
    double fixe;
    cout << "Entrer le prenom :";
    cin >> prenom;
    cout << "Entrer le nom :";
    cin >> nom;
    cout << "Entrer l'age :";
    cin >> age;
    cout << "Entrer le sexe :";
    cin >> sexe;
    cout << "Entrer le service :";
    cin >> service;
    cout << "Entrer le fixe :";
    cin >> fixe;
    ptr[cmp] = new EmployeCommission(prenom,nom,age,sexe,service,fixe);
}
void addEmployeeCommission(int cmp){
    string nom,prenom , service;
    char sexe;
    int age;
    double ca , taux;
    cout << "Entrer le prenom :";
    cin >> prenom;
    cout << "Entrer le nom :";
    cin >> nom;
    cout << "Entrer l'age :";
    cin >> age;
    cout << "Entrer le sexe :";
    cin >> sexe;
    cout << "Entrer le service :";
    cin >> service;
    cout << "Entrer le ca :";
    cin >> ca;
    cout << "Entrer le taux :";
    cin >> taux;
    ptr[cmp] = new EmplyeeCommission(prenom,nom,age,sexe,service,ca,taux);
}
void printPersons(int cmp){
    for(int i = 0;i < cmp; i++){
        cout<<"---------------------------------------"<<endl;
        ptr[i] ->afficher();
        cout<<"---------------------------------------"<<endl;
        cout << endl;
    }
}

void deletePersons(int cmp){
    for(int i = 0; i< cmp; i++){
        delete ptr[i];
    }
}
int main(){

     int condi;
    int cmp = 0;
     do{
    cout<<"\t\t\t\t|                            Bienenue Au systeme                             |"<<endl;
    cout<<"\t\t\t\t|____________________________________________________________________________|\n";
        cout<<"\t\t\t\t\n"<<endl;
    cout<<"\t\t\t\t ____________________________________________________________________________\n";
    cout<<"\t\t\t\t|  1)                 Entrez Un Etudiant                                     |"<<endl;
    cout<<"\t\t\t\t|____________________________________________________________________________|\n"<<endl;
    cout<<"\t\t\t\t ____________________________________________________________________________\n";
    cout<<"\t\t\t\t|  2)                 Entrez Un EmployeeCommission                           |"<<endl;
    cout<<"\t\t\t\t|____________________________________________________________________________|\n"<<endl;
    cout<<"\t\t\t\t ____________________________________________________________________________\n";
    cout<<"\t\t\t\t|  3)                 Entrez Un EmployeeCommissionAvecFixe                   |"<<endl;
    cout<<"\t\t\t\t|____________________________________________________________________________|\n"<<endl;
     cout<<"\t\t\t\t ____________________________________________________________________________\n";
    cout<<"\t\t\t\t|  4)                 Afficher les Personnes                                 |"<<endl;
    cout<<"\t\t\t\t|____________________________________________________________________________|\n"<<endl;
    cout<<"\t\t\t\t ____________________________________________________________________________\n";
    cout<<"\t\t\t\t|  5)                 Quitter le programme                                   |"<<endl;
    cout<<"\t\t\t\t|____________________________________________________________________________|\n"<<endl;
    cout<<"\t\t\t\t ____________________________________________________________________________\n";
    cout<<"\t\t\t\t|                     Entrez La personne Que Vous Voullez :                  |"<<endl;
    cout<<"\t\t\t\t|____________________________________________________________________________|";
    cin >>condi;
    switch(condi)
    {
    case 1:
        system("Color DE");
        addEtudiant(cmp);
        cmp+=1;
        break;
    case 2:
        system("Color DA");
            addEmployeCommission(cmp);
            cmp+=1;
            break;
    case 3:
        system("Color BD");
        addEmployeeCommission(cmp);
            cmp+=1;
            break;

    case 4:
        system("Color E4");
        printPersons(cmp);
            break;
    case 5:
        deletePersons(cmp);
        break;
    }
     }while(condi!=5);
     cout<<"\n"<<endl;
    cout<<"\t\t\t\t|                            Merci de nos visister                           |"<<endl;
    cout<<"\t\t\t\t|____________________________________________________________________________|\n";

    return 0;
}
