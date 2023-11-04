
//exercice 1:
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

void nbr_De_fois(){

 static int i=1;

    cout<<"appel numéro "<<i++<<endl;

}

int main () {

   nbr_De_fois();
   nbr_De_fois();
   nbr_De_fois();

*/

//exercice 2 :
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

int multiple_de_2 (int nbr){

  return nbr%2==0;

}

int multiple_de_3 (int nbr){

return nbr%3==0;

}


int main (){
    int nbr;

      cout <<"entrer un nombre entier : "<<endl;
      cin>> nbr;
     if(multiple_de_2 (nbr))
      cout<<"il est pair "<<endl;
     if(multiple_de_3 (nbr))
       cout<<"il est multiple de 3"<<endl;
     if(multiple_de_2 (nbr) && multiple_de_3 (nbr))
        cout <<"il est divisible par 6"<<endl;


*/

//exercice 3 :

/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;
*/
//premiere programme a:
/*
int main (){
int T[10] ,i ,min=T[0] ,max=T[0];

for (i=0;i<10;i++){
    cout<<"entrer un nombre :";
    cin>>T[i];

}
   cout<<endl;

for (i=0;i<10;i++)
    if(T[i]>max )
      max = T[i];

cout <<"le plus grand nombre est "<<max<<endl;

for (i=0;i<10;i++)
    if(T[i]<min)
      min = T[i];

cout<<"le plus petite nombre est "<<min;
*/

//seconde programme b:
/*
int main (){
int T[10],*p ,i,*pmax=T,*pmin=T;
p=&T[0];

for (i=0;i<10;i++){
    cout<<"entrer un nombre :";
    cin>>*(p+i);

}
   cout<<endl;

for (i=0;i<10;i++)
    if(*(p+i)>*pmax )
      pmax = p+i;

cout <<"le plus grand nombre est "<<*pmax<<endl;

for (i=0;i<10;i++)
    if(*(p+i)<*pmin)
      pmin = p+i;

cout<<"le plus petite nombre est "<<*pmin;

*/

//Exercice 4 :
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

int main (){
int n, i;
cout<<"Entrer la taille du tableau : ";
cin>>n;
 int*T1 = new int[n];
 cout<<"Entrer les nombres entier de tableau : ";
 cout<<endl;
 for(i=0 ;i<n ; i++){
 cout<<"Entrer le nombre entier de tableau " <<i+1;
 cout<<" : ";
 cin>>T1[i];
 cout<<endl;
}

 for (i=0 ;i<n ; i++)
    cout<<T1[i]<<"\t";
int* T2 = new int[n];
cout<<endl;

 for(i=0 ;i<n ; i++){
    T2[i]=T1[i]*T1[i];
    cout <<"le carré du nombre "<<i+1<<" : "<<T2[i]<<endl;
 }
 delete[] T1;

 delete[] T2;
 */

 //Exercice 5 :
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

 int main(){
 int a;
 int &ref_a = a;
 int *p_a = &a;
 cout <<"affichage de variable a "<<endl;
 cout <<"affichage de variable ref_a"<<endl;
 cout <<"affichage de variable p_a "<<endl;
 cout <<"Adresse de variable a : "<<&a<<endl;
 cout <<"Adresse de variable ref_a : "<<&ref_a<<endl;
 cout <<"Adresse de variable p_a: "<<p_a<<endl;
 cout <<"La valeur de variable a : "<<a<<endl;
 cout <<"La valeur  de variable ref_a : "<<ref_a<<endl;
 cout <<"La valeur de variable p_a : "<<*p_a<<endl;
*/

//Exercice 6 :
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

int incrementer(int val){
val++;
return val;
}

//fonction 1 : transmission par adresse
void permuter1(int &a ,int &b){
int x;

x=a;
a=b;
b=x;
}

//fonction 2 : transmission par référence
void permuter2(int &ref_a ,int &ref_b){
int x;

x=ref_a;
ref_a= ref_b;
 ref_b=x;
}

int main (){

int valeur = 1;
int A=2 ,B=9, I ;
int &ref_A =A ;
int &ref_B=B;

cout<<" La valeur avant l'incrementation "<<valeur<<endl;
I =incrementer(valeur);
cout<<" La valeur après l'incrementation "<<I<<endl;

cout<<"transmission par adresse"<<endl;
cout<<" Les valeurs avant la permutation A = "<<A<<",  B = "<<B<<endl;
permuter1(A,B);
cout<<" Les valeurs après la permutation A = "<<A<<",  B =" <<B<<endl;

cout<<"transmission par référence"<<endl;
cout<<" Les valeurs avant la permutation A = "<<ref_A<<",  B = "<<ref_B<<endl;
permuter2(ref_A ,ref_B);
cout<<" Les valeurs après la permutation A = "<<ref_A<<",  B =" <<ref_B<<endl;
*/
//Exercice 7 :
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

int main(){
int T[10],i,temp ,k;

cout<<"remplir le tableau :"<<endl;
for (i=0;i<10;i++){
    cout<<"le nombre "<<i+1<<" : ";
    cin >>T[i];
    cout<<endl;
}
//affichage en inverse du tableau
/*for (i=10;i>0;i--)
    cout<<"le nombre "<<10-(i-1)<<" : "<<T[i-1]<<endl;
*/
//trie le tableau par ordre croissant(tri à bulle)
 /*do{
    k=0;
    for (i = 0; i < 9; i++) {
        if (T[i] > T[i + 1]) {
            temp = T[i];
            T[i] = T[i + 1];
            T[i + 1] = temp;
            k++;
        }
    }
 }while(k>0);


cout << "Tableau trié par ordre croissant : "<<endl;
for (i=0;i<10;i++){
    cout <<T[i];
    cout<<endl;
}
cout<<"le nombre d'échange est "<<k;
   return 0;
}

*/

//Exercice 8 ://PARTIE 2 : CLASSES /OBJETS /CONSTRUCTEURS
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

class NbrComplexe {
public:
    double R;
    double I;

};
int main(){
    NbrComplexe num1,num2,resultat;
    int choix;
    double val_R ,val_I ;
    cout<<"Entrer la partie réelle du premiere nombre complexe: "<<endl;
    cin>>val_R;
    num1.R= val_R;
    cout<<"Entrer la partie imaginaire du premiere nombre complexe : "<<endl;
    cin>>val_I;
    num1.I=val_I;
    cout<<"Entrer la partie réelle du deuxieme nombre complexe: "<<endl;
    cin>>val_R;
    num2.R=val_R;
    cout<<"Entrer la partie imaginaire du deuxieme nombre complexe : "<<endl;
    cin>>val_I;
    num2.I=val_I;
    cout << "Menu des opérations sur les nombres complexes : "<<endl;
    cout << "1) Égalité"<<endl<<"2) Adition"<<endl<<"3) Soustraction"<<endl<<"4) Multiplication"<<endl<<"5) Division"<<endl;
    cout << "Choisissez une opération de 1 à 5) : ";
    cin >>choix;
  switch(choix){
    case 1 :
        if((num1.R == num2.R )&& (num1.I==num2.I))
            cout << "Les nombres complexes sont égaux."<<endl;
        else
            cout << "Les nombres complexes ne sont pas égaux."<<endl;
         break;
    case 2 :
        resultat.R = num1.R + num2.R;
        resultat.I = num1.I + num2.I;
        cout << "Résultat de l'addition : " << resultat.R << " + i" << resultat.I <<endl;
        break;

    case 4 :
         resultat.R = num1.R * num2.R;
        resultat.I = num1.I * num2.I;

        cout << "Résultat de la multiplication : " << resultat.R << " * i" << resultat.I << endl;
        break;
    case 5 :
       double denominateur = num2.R * num2.R +num2.I*num2.I;

        resultat.R = (num1.R * num2.R + num1.I * num2.I)/denominateur;
        resultat.I = (num1.I* num2.R - num1.R* num2.I)/denominateur;
        cout << "Résultat de la division : " << resultat.R << " / i" << resultat.I<< endl;
        break;

    case 3 :
        resultat.R = num1.R - num2.R;
        resultat.I = num1.I - num2.I;
        cout << "Résultat de la soustraction : " << resultat.R << " - i" << resultat.I << endl;
        break;

    default:
        cout << "Choix invalide.\n";
    }


    return 0;
}
*/
//Exercice 9:
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

class Animal {
private :

   string nom ;
   int age;
public :
   void set_value(string& N ,int A){
      nom = N;
      age = A;
   }
};
class Zebra : public Animal {
public :
    void set_value(const string& N ,int A ,const string& l_origine){

    cout << "Le nom de Zebra : " << N << endl;
      cout << "Âge: " << A << " années" << endl;
      cout << "Lieu d'origine: " << l_origine << endl;
      cout<<endl;
   }

};
class Dolphin : public Animal {
public :
    void set_value(const string& N ,int A ,const string& l_origine){

      cout << "Le nom de Dolphin : " << N << endl;
      cout << "Âge: " << A << " années" << endl;
      cout << "Lieu d'origine: " << l_origine << endl;
   }
};

int main (){
Zebra zebra;
Dolphin dolphin;

zebra.set_value("zz" , 5 ,"africa");
dolphin.set_value("dd" , 1, "océan");
return 0;
}
*/
//Exercice 10 :
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

class Personne {
private :
    string nom ;
    string prenom;
    string date_naissance;
public :
    Personne(const string& N,const string& P , const string& D_N):nom(N),prenom(P),date_naissance(D_N){}//constructeur qui initialise les données
    void Afficher(){
        cout<<"le nom : "<<nom<<endl;
        cout<<"le prenom : "<<prenom<<endl;
        cout<<"la date de naissance : "<<date_naissance<<endl;
    }

};

class Employe : public Personne{
private:
    double salaire;
public:
    Employe (const string& N, const string& P , const string& D_N , double S): Personne (N,P ,D_N),salaire(S){}
     void Afficher() {
        Personne::Afficher();
        cout << "Salaire: " <<salaire<< endl;
    }
};


class Chef : public Employe{
private:
    string service;
public:
  Chef (const string& N, const string& P , const string& D_N , double S ,const string& C_S ): Empoye (N,P ,D_N ,S),service(C_S){}
     void Afficher() {
        Employe::Afficher();
        cout << "Service " << service << endl;
    }
};


class Directeur : public Chef{
private:
    string societe;
public:
   Directeur(const string& N, const string& P , const string& D_N , double S ,string& C_S , string& _societe): Chef (N,P ,D_N ,S ,C_S),societe(_societe){}
     void Afficher() {
        Chef::Afficher();
        cout << "societe " << societe<< endl;
    }
};

int main (){
Personne personne ("garoud" , "fatima ezzahraa", "23/08/2003");
Employe employe ("el mekki" , "salima" , "19/03/2004" , 5000);
Chef chef ("moumen" , "merieme" , "23/07/2003" , 5000 ,"developpement");
Directeur directeur ("esouri" , "iman" ,"12/06/2003" , 8000 , "management" , "entreprise") ;

 personne.Afficher();
 cout<<endl;
 employe.Afficher();
 cout<<endl;
 chef.Afficher();
 cout<<endl;
 directeur.Afficher();
 cout<<endl;

 return 0;
}
*/
//Exercice 11 :
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

class vecteur3d {
private:
    float X;
    float Y;
    float Z;
public:
    vecteur3d (float x=0.0 , float y=0.0 ,float z=0.0):X(x),Y(y),Z(z){}
    void Afficher (){
       cout <<"("<<X<<" , "<<Y<<" , "<<Z<<")"<<endl;
    }
    float somme (const vecteur3d& autre){
        return (X+autre.X , Y+autre.Y ,Z+autre.Z );
    }
    float produit_scalaire (const vecteur3d& autre){
        return (X*autre.X + Y*autre.Y + Z*autre.Z);
    }
    bool coincide (const vecteur3d& autre){
        return (X == autre.X && Y == autre.Y && Z == autre.Z);
    }
    float norme (){
       return sqrt(X*X+Y*Y+Z*Z);
    }
    void normax (vecteur3d& v1, vecteur3d& v2){
       if (v1.norme()>v2.norme())
            cout <<" la premiere vecteur qui à la plus grand norme est égale : " << v1.norme() <<endl ;
       else
            cout <<" le deuxieme vecteur qui à la plus grand norme est égale : " << v2.norme() <<endl ;
    }
};

int main (){
    float X,Y,Z;

   cout << "veuillez entrer les composants des vecteurs :" <<endl;
   cout <<"entrer le premiere composant de premiere vecteur :"<<endl ;
   cin>>X;
   cout <<"entrer le deuxieme composant de premiere vecteur :"<<endl ;
   cin>>Y;
   cout <<"entrer le troixieme composant de premiere vecteur :" <<endl;
   cin>>Z;
 vecteur3d v1(X,Y,Z);
   cout <<"entrer le premiere composant de deuxieme vecteur :" <<endl;
   cin>>X;
   cout <<"entrer le deuxieme composant de deuxieme vecteur :"<<endl ;
   cin>>Y;
   cout <<"entrer le troixieme composant de deuxieme vecteur :"<<endl ;
   cin>>Z;
 vecteur3d v2(X,Y,Z);
 cout<<" Affichage des 2 vecteurs : "<<endl;
   v1.Afficher();
   v2.Afficher();
cout<<"La somme des 2 vecteurs : "<<endl;
    vecteur3d v3 =v1.somme (v2);
    v3.Afficher();
cout <<"Le produit scalaire des 2 vecteurs : "<<endl;

   float p= v1.produit_scalaire (v2);
    cout<<p;

   cout<<v1.coincide (v2);

    cout<<v1.norme ();

    cout <<v2.norme ();
   return 0;
}
*/
//Exercice 12 :
/*
#include<iostream>
#include<math.h>
#include <string>
using namespace std;

class Test {
public:
    int cal (){
    static int i=0;
       return ++i;
    }
};
int main (){
Test O ;
int x=O.cal();
 x=O.cal();
 x=O.cal();
 x=O.cal();
 x=O.cal();
cout<<x;

}
*/
//Exercice 13 :
/*
#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point {
private:
    float x;
    float y;
    float z;
public:
   Point(float x ,float y);
   void deplace (float dx ,float dy);
   void affiche ();
};
#endif

#include"Point.h"
#include<math.h>
#include <string>
using namespace std;

Point :: Point (float x ,float y ):x(x),y(y){}
void Point :: deplace (float dx,float dy){
x+=dx;
y+=dy;
}
void Point :: affiche (){
cout << "("<<x<< " , "<<y<<")"<<endl;
}
int main (){
Point p;
p.affiche ();
return 0;
}
*/
//Exercice 14 :
/*
#include<iostream>
using namespace std;

class Pile {



public :
   Pile (): //constructeur
   void push(int element) {

    int pop (){

    }

    int vide() {
        return ;
};




int main (){
Pile p1,p2 ;

p1.push (1);
p1.push (2);

p2.push (4);
p2.push (9);

cout <<"

}
*/
//Exercice 15 :
/*
#include <cstdlib>
#include<iostream>
using namespace std;
class Fichier{
private:
    char* pointeur;
    size_t longueur;
public:
    Fichier(size_t n) {
        longueur = n;
        pointeur = new char[n];
    }

    ~Fichier() {
        delete[] pointeur;
    }

   void Creation(size_t n) {
        pointeur = new char[n];
        longueur = n;
    }

     void Remplit() {
         size_t i ;
        for (i = 0; i < longueur; i++) {
            pointeur[i] = i;

        }
    }
     void Affiche() {
         size_t i;
        for (i = 0; i < longueur; i++) {
            cout << pointeur[i];
        }
            cout <<endl;
    }

};
 int main (){
   Fichier* f = new Fichier(10);

    f->Creation(10);
    f->Remplit();
    f->Affiche();

    delete f;
    return 0;
 }
 */

//Exercice 16:
#include<iostream>
using namespace std;

struct Element {
    int data;
    Element* next;

    Element(int value) : data(value), next(nullptr) {}
};

class Liste {
private:
    Element* first;

public:
    Liste() : first(nullptr) {}

    ~Liste() {
        while (first != nullptr) {
            Element* temp = first;
            first = first->next;
            delete temp;
        }
    }

    void Ajouter(int val) {
        Element* nouvelElement = new Element(val);
        nouvelElement->next = first;
        first = nouvelElement;
    }

    void Supprimer() {
        if (first != nullptr) {
            Element* temp = first;
            first = first->next;
            delete temp;
        }
    }

    void Afficher() {
        Element* p = first;
        while (p != nullptr) {
            cout << p->data << " ";
           p = p->next;
        }
        cout << endl;
    }
};

int main() {
    Liste L;
    int n ,x;
    cout<<"entrer le nombre des elements qui vous voulez ajouter:";
    cin>>n;
for(int i=0;i<n ;i++){
     cin>> x;
     L.Ajouter(x);
}


    cout << "Liste : ";
    L.Afficher();
for(int i=0;i<n ;i++){
    L.Supprimer();
}
    cout << "Liste après suppression : ";
    L.Afficher();

    return 0;
}





