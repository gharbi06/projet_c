#include "fonction_hadil.h"
#include<stdio.h>
#include <string.h>

 int ajouter( observateur o,char filename )
{ 
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
{
fprintf(f,"%d %d %d %d %s %d \n",o.Identidiant,o.Numéro_de_réclamation,o.Numéro_de_BV,o.List_électoral,o.Réclamation,o.Type_de_réclamation);      
fclose(f);
 return 1;
}
else return 0;

}


int modifier(observateur nouv,int Identifiant,int  Numéro_de_réclamation, char * filename)
{
    int tr=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %d \n",&o.Identidiant,&o.Numéro_de_réclamation,&o.Numéro_de_BV,&o.List_électoral,&o.Réclamation,&o.Type_de_réclamation)!=EOF)
        {
            if((o.Identifiant== Ident)&&(o.Numéro_de_réclamation==Numéro_de_réclamation))
            {
                fprintf(f2,"%d %d %d %d %s %d \n",nouv.Identidiant,nouv.Numéro_de_réclamation,nouv.Numéro_de_BV,nouv.List_électoral,nouv.Réclamation,nouv.Type_de_réclamation);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %d %s %d \n",o.Identidiant,o.Numéro_de_réclamation,o.Numéro_de_BV,o.List_électoral,o.Réclamation,o.Type_de_réclamation);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int Identifiant,int Numéro_de_réclamation)
{
    int tr=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %d \n",&o.Identidiant,&o.Numéro_de_réclamation,&o.Numéro_de_BV,&o.List_électoral,&o.Réclamation,&o.Type_de_réclamation)!=EOF)
        {
            if((o.Identifiant == Ident)&&(o.Numéro_de_réclamation==Numéro_de_réclamation))
                tr=1;
            else
                fprintf(f2,"%d %d %d %d %s %d \n",o.Identidiant,o.Numéro_de_réclamation,o.Numéro_de_BV,o.List_électoral,o.Réclamation,o.Type_de_réclamation);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
observateur chercher(int Identifiant,int Numéro_de_réclamation, char * filename)
{
    observateur o;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %d %d %s %d \n",&o.Identidiant,&o.Numéro_de_réclamation,&o.Numéro_de_BV,&o.List_électoral,&o.Réclamation,&o.Type_de_réclamation)!=EOF)
        {
            if((o.Identifiant == Identifiant)&&(o.Numéro_de_réclamation==Numéro_de_réclamation))
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        o.Identifiant=-1;
        o.Numéro_de_réclamation=-1;
    return o;

}
