#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fonction_user.h"
int main ()
{ 

utilisateur u1 ={"2","haifa","slim","user.slim@esprit.tn",1,"1992",1,"13",03,1995,1,6},u3;
utilisateur u2={"2","hajer","bounjour","haje@gmail.com",2,"2",1,"15",05,1995,2,5};
 int x=ajouter( u1,"user.txt");
 if(x==1)
        printf("\najout de point avec succés");
    else printf("\nechec ajout");
    /*  
   x=modifier("1",u2,"user.txt");

    if(x==1)
        printf("\nModification de point avec succés");
    else printf("\nechec Modification");
 x=ajouter( u1,"user.txt");
 if(x==1)
        printf("\najout de point avec succés");
    else printf("\nechec ajout");

    x=supprimer("2","user.txt" );
    if(x==1)
        printf("\nSuppression de point avec succés");
    else printf("\nechec Suppression");

   u3=chercher("2","haifa","5","user.txt");
    if(strcmp(u3.cin,"-1")==0)
        printf("\nle cin que vous cherchez introuvable\n");
else printf("\n ok!");
x= modif_vote("123" , "user.txt");
 if(x==1)
        printf("\nmodif de vote avec succés");
    else printf("\nechec modif");*/

return 0;}
