#include "fonction_haifa.h"
#include<stdio.h>
#include <string.h>

 int ajouter(utilisateur u,char filename [])
{ 
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
{fprintf(f,"%d %s %s %s %d %s %d %d %d %d %d %d\n",u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote );
 fclose(f);
//printf("test ok \n");
        return 1;
}
else return 0;

}


int modifier(int id, utilisateur nouv, char * filename)
{
utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while

(fscanf(f,"%d %s %s %s %d %s %d %d %d %d %d %d",&u.cin,u.nom,u.prenom,u.email,&u.tel,u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,&u.mot_de_passe,&u.bureau_vote )!=EOF)
{
if(u.cin!=id)
     {   fprintf(f2,"%d %s %s %s %d %s %d %d %d %d %d %d",u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote );

}
else
{
  fprintf(f2,"%d %s %s %s %d %s %d %d %d %d %d %d \n",nouv.cin,nouv.nom,nouv.prenom,nouv.email,nouv.tel,nouv.role,nouv.sexe,nouv.D.jour,nouv.D.mois,nouv.D.anne,nouv.mot_de_passe,nouv.bureau_vote );
}
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}
int supprimer(int id, char * filename)
{
utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %s %d %s %d %d %d %d %d %d",&u.cin,u.nom,u.prenom,u.email,&u.tel,u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,&u.mot_de_passe,&u.bureau_vote )!=EOF)
{
if(u.cin!=id)
      {   fprintf(f2,"%d %s %s %s %d %s %d %d %d %d %d %d\n",u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote );

}
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

utilisateur chercher(int id, char * filename)
{ utilisateur u; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %s %s %s %d %s %d %d %d %d %d %d",&u.cin,u.nom,u.prenom,u.email,&u.tel,u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,&u.mot_de_passe,&u.bureau_vote )!=EOF && tr==0)
{if(id==u.cin)
tr=1;
}
}
if(tr==0)
u.cin=-1;
return u;

}
