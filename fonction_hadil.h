typedef struct
{ 
int Identifiant;
int Numéro_de_réclamation ;
int Numéro_de_BV; 
int List_électoral;
char Réclamation[200];
int Type_de_réclamation [4];


} observateur ;

int ajouter(observateur o , char* filename );
int modifier(observateur nouv,int Ident,int  Numéro_réclamation, char * filename);
int supprimer (int Ident,int Numéro_réclamation , char * filename);
observateur chercher(int Identifiant,int Numéro_réclamation, char * filename);
