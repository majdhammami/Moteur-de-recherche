#include <stdio.h>
#include <string.h>

typedef struct
{
    int jour ;
    int mois;
    int annee;

} Date;

typedef struct
{
    char titre[10];
    char realisateur[20];
    char acteur [3][60];
    char categorie [10];
    Date date_sortie;
    char description [100];

} Film;

Film creerFiche();
void afficherFiche(Film f);
int rechercherFilmSelonTitre(Film tab[],int N);
int rechercherFilmCategorie(Film tab[],int N);
int rechercherFilmParTitreOuMotCle(Film tab[],int N);
void triFiche(Film tab[],int N) ;
int supprimerFilm(Film tab[],int N,int indice);
void modifierFilm(Film tab[],int N);




//#endif // FILM_H_INCLUDED
