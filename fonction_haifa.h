typedef struct
{ int jour;
int mois;
int anne ;
}Date;
typedef struct
{ 
int cin;
char nom[30];
char prenom[30]; 
char email[50];
char role [20];
int mot_de_passe ;
int bureau_vote;
int tel;
int sexe;
Date D;


} utilisateur;

void ajouter(utilisateur u, char filename []);
int modifier(int id, utilisateur u , char * filename);
int supprimer(int id, char * filename);
utilisateur chercher(int id, char * filename);
