#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fonction_haifa.h"
int main ()
{ 

utilisateur u1 ={1,"haifa","slim","haifa.slim@esprit.tn","admistrateur",1,1,13,03,1995,1,5},u3;
utilisateur u2={2,"hajer","bounjour","haje@gmail.com","electeur",2,1,15,05,1995,2,5};
 int x=ajouter( u1,"filename.txt");
 if(x==1)
        printf("\najout de point avec succés");
    else printf("\nechec ajout");
        
    x=modifier(1,u2,"filename.txt");

    if(x==1)
        printf("\nModification de point avec succés");
    else printf("\nechec Modification");
    x=supprimer(1,"filename.txt" );
    if(x==1)
        printf("\nSuppression de point avec succés");
    else printf("\nechec Suppression");

    u3=chercher(3,"filename.txt");
    if(u3.cin==-1)
        printf("\nle cin que vous cherchez introuvable");


return 0;}
