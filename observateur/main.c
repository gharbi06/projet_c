#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include"fonction_hadil.h"
int main ()
{
observateur o1 ={1,1,3,4,"organisation",1},o3;
observateur o2={2,1,2,3,"media",2};



 /*int x=ajouter( o1,"obsevrateur.txt");
 if(x==1)
        printf("\najout de la reclamation avec succés\n");
    else printf("\nechec ajout\n"); */




   /* int x=modifier(o2,1,1,"obsevrateur.txt");

    if(x==1)
        printf("\nModification du réclamation avec succés\n");
    else printf("\nechec Modification\n");*/  




   /*int x=supprimer(2,1,"obsevrateur.txt" );
    if(x==1)
        printf("\nSuppression du réclamation avec succés\n");
    else printf("\nechec Suppression\n");  */





    o3=chercher(1,1,"obsevrateur.txt");
    if(o3.Identifiant==-1)
        printf("\nl'identifiant que vous cherchez introuvable\n"); 
        else printf("\nok \n"); 



return 0;}

