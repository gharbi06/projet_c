#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED
#include <stdio.h>
typedef struct
{
int jour;
int mois;
int annee;
}DateE;
typedef struct
{
DateE y;
int id;
int nb_habitants;
int nb_conseillers;
int municipalite;
}election;
int ajouter(char * ELECTION, election e);
int modifier(char * ELECTION, int id, election nouv);
int supprimer(char * ELECTION, int id);
election chercher(char * ELECTION, int id);
#endif
