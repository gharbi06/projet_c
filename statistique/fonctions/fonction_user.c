#include "fonction_user.h"
#include<stdio.h>
#include <string.h>

 int ajouter(utilisateur u,char user [])
{ 
    FILE * f=fopen(user, "a");
    if(f!=NULL)
{fprintf(f," \n %s %s %s %s %s %d %d %d %d %d %s %d %s \n",u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote ,strcpy(u.vote,"-1"));
 fclose(f);
//printf("test ok \n");
        return 1;
}
else return 0;

}


int modifier(char id[], utilisateur nouv, char * user)
{
utilisateur u;
    FILE * f=fopen(user, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while

(fscanf(f,"%s %s %s %s %s %d %d %d %d %d %s %d %s",u.cin,u.nom,u.prenom,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF)
{
if(strcmp(id,u.cin)==1)
     {   fprintf(f2,"\n %s %s %s %s %s %d %d %d %d %d %s %d %s \n",u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote,u.vote );

}
else
{
  fprintf(f2,"\n %s %s %s %s %s %d %d %d %d %d %s %d %s \n",nouv.cin,nouv.nom,nouv.prenom,nouv.email,nouv.tel,nouv.role,nouv.sexe,nouv.D.jour,nouv.D.mois,nouv.D.anne,nouv.mot_de_passe,nouv.bureau_vote ,u.vote);
}
}
        fclose(f);
        fclose(f2);
remove(user);
rename("aux.txt", user);
        return 1;
    }
  
}
int supprimer(char id[], char * user)
{
utilisateur u;
    FILE * f=fopen(user, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %s %s %d %d %d %d %d %s %d %s",u.cin,u.nom,u.prenom,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF)
{
if(strcmp(id,u.cin)==1)
      {   fprintf(f2," \n %s %s %s %s %s %d %d %d %d %d %s %d %s\n",u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote ,u.vote);

}
}
        fclose(f);
        fclose(f2);
remove(user);
rename("aux.txt", user);
        return 1;
    }
}

utilisateur chercher(char id[], char nom[], char prenom[],char * user)
{ utilisateur u; int tr=0;
    FILE * f=fopen(user, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%s %s %s %s %s %d %d %d %d %d %s %d %s",u.cin,u.nom,u.prenom,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF && tr==0)
{if(strcmp(id,u.cin)==0)
tr=1;
}
}
if(tr==0)
strcpy(u.cin,"-1");
return u;

}
int modif_vote(char idvote[] , char * user)
{ utilisateur u; 
    FILE * f=fopen(user, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
{while(fscanf(f,"%s %s %s %s %s %d %d %d %d %d %s %d %s",u.cin,u.nom,u.prenom,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF );
 
fprintf(f2,"\n %s %s %s %s %s %d %d %d %d %d %s %d %s \n",u.cin,u.nom,u.prenom,u.email,u.tel,u.role,u.sexe,u.D.jour,u.D.mois,u.D.anne,u.mot_de_passe,u.bureau_vote,strcpy(u.vote,idvote) );

        fclose(f);
        fclose(f2);
remove(user);
rename("aux.txt", user);
        return 1;
    
}
}
//taux de participation de electeur
float TPE(char * user)
{
utilisateur u;
int nbEvote=0,nbEtotale=0;
float TPE;
FILE * f=fopen(user, "r");
        if(f!=NULL)
        {
while(fscanf(f,"%s %s %s %s %s %d %d %d %d %d %s %d %s",u.cin,u.nom,u.prenom,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF)
        {

nbEtotale=nbEtotale+1;

            if(u.vote != -1)
                {nbEvote=nbEvote+1;
}

        }


TPE=(float)nbEvote/nbEtotale;

    }
    fclose(f);
   
    return TPE;
}

// taux de participation des hommes et des femmes
void TPHF(char * user, float * fe,float * h)
{
utilisateur u;
int nbEvote=0,nbEvoteH=0,nbEvoteF=0;
FILE * f=fopen(user, "r");
        if(f!=NULL)
        {
while(fscanf(f,"%s %s %s %s %s %d %d %d %d %d %s %d %s",u.cin,u.nom,u.prenom,u.email,u.tel,&u.role,&u.sexe,&u.D.jour,&u.D.mois,&u.D.anne,u.mot_de_passe,&u.bureau_vote ,u.vote)!=EOF)
        {
            if(u.vote != -1)
        { nbEvote=nbEvote+1;
switch(u.sexe)
{case 0:{nbEvoteF=nbEvoteF+1;
break;}
case 1:{nbEvoteH=nbEvoteH+1;
break;}
}
}
*fe=(float)nbEvoteF/nbEvote;
*h=(float)nbEvoteH/nbEvote;
    }
    fclose(f);
}
} 
 


