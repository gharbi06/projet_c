#include "fonction_hadil.h"
#include<stdio.h>
#include <stdlib.h>

int ajouter( observateur o, char * filename)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %d %s %d \n",o.Identifiant,o.Numero_de_reclamation,o.Numero_de_BV,o.List_electoral,o.Reclamation,o.Type_de_reclamation);
        fclose(f);
        return 1;
    }
    else
    { return 0;
    }

}


int modifier(observateur nouv,int Identifiant,int  Numero_de_reclamation, char * filename)
{
    int tr=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %d \n",&o.Identifiant,&o.Numero_de_reclamation,&o.Numero_de_BV,&o.List_electoral,&o.Reclamation,&o.Type_de_reclamation)!=EOF)
        {
            if((o.Identifiant== Identifiant)&&(o.Numero_de_reclamation==Numero_de_reclamation))
            {
                fprintf(f2,"%d %d %d %d %s %d \n",nouv.Identifiant,nouv.Numero_de_reclamation,nouv.Numero_de_BV,nouv.List_electoral,nouv.Reclamation,nouv.Type_de_reclamation);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %d %s %d \n",o.Identifiant,o.Numero_de_reclamation,o.Numero_de_BV,o.List_electoral,o.Reclamation,o.Type_de_reclamation);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(int Identifiant,int Numero_de_reclamation, char * filename)
{
    int tr=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %d \n",&o.Identifiant,&o.Numero_de_reclamation,&o.Numero_de_BV,&o.List_electoral,&o.Reclamation,&o.Type_de_reclamation)!=EOF)
        {
            if((o.Identifiant == Identifiant)&&(o.Numero_de_reclamation==Numero_de_reclamation))
                tr=1;
            else
                fprintf(f2,"%d %d %d %d %s %d \n",o.Identifiant,o.Numero_de_reclamation,o.Numero_de_BV,o.List_electoral,o.Reclamation,o.Type_de_reclamation);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
observateur chercher(int Identifiant,int Numero_de_reclamation, char * filename)
{
    observateur o;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %d %d %s %d \n",&o.Identifiant,&o.Numero_de_reclamation,&o.Numero_de_BV,&o.List_electoral,&o.Reclamation,&o.Type_de_reclamation)!=EOF)
        {
            if((o.Identifiant == Identifiant)&&(o.Numero_de_reclamation==Numero_de_reclamation))
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        o.Identifiant=-1;
    o.Numero_de_reclamation=-1;
    return o;

}


