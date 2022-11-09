#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
typedef struct

{

int Identifiant;

int Numero_de_reclamation ;

int Numero_de_BV;

int List_electoral;

char Reclamation[200];

int Type_de_reclamation [4];



} observateur ;



int ajouter(observateur o , char * filename);

int modifier(observateur nouv,int Identifiant,int  Numero_de_reclamation, char * filename);

int supprimer (int Ident,int Numero_de_reclamation , char * filename);

observateur chercher(int Identifiant,int Numero_de_reclamation, char * filename);


#endif // FONCTION_H_INCLUDED

