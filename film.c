#include "film.h"
#include<stdio.h>
#include<string.h>
#include <time.h>
Film creerFiche()
{
    Film f;
    int i;
    int  k,j;
    int comp=0;
    int comp2=0 ;
    int comp3=0 ;
    int comp4=0;
    int comp41=0;
    int comp42=0;
    int comp5=0;
    int comp6=0;
    int comp7=0;
    int comp8=0;
    //char carSpec[] = {'!','?','"','&','(','-','_',')','^',';','*','#',',','.'} ;
 do

     {
    printf("donner le titre\n");
    scanf("%s",f.titre);
    comp=0 ;
     for(k=0;k<strlen(f.titre);k++){
    if (((f.titre[k]>0) && (f.titre[k]<31)) || ((f.titre[k]>32) &&(f.titre[k]<48)) || ((f.titre[k]>57)  && (f.titre[k]<65)) || ((f.titre[k]>90)  && (f.titre[k]<97) && (f.titre[k]!=95)) || (f.titre[k]>122) )
   /*for (i=0;i<strlen(f.titre);i++){
     for (j=0;j<strlen(carSpec);j++){
    carSpec[j] == f.titre[i];
    if((f.titre[i]=='!')||(f.titre[i]=='?')||(f.titre[i]=='*')||(f.titre[i]=='&')||(f.titre[i]=='#')||(f.titre[i]=='/')||(f.titre[i]==';')||(f.titre[i]==',')||(f.titre[i]==':')||(f.titre[i]=='.')||(f.titre[i]=='-')||(f.titre[i]=='_'))*/
{

        printf("le titre ne doit pas contenir de caracteres speciaux \n");
        comp++;
        break;
        }
     }
   }
    while (comp!=0) ;

   /* printf("donner le titre\n");
    scanf("%s",f.titre);
    for(k=0;k<strlen(f.titre);k++){
            if ((f.titre[k]<65) || ((f.titre[k]>90)&&(f.titre[k]<97)) || (f.titre[k]>122))
            {
                printf ("le titre ne doit pas contenir des caracteres speciaux\n");
                comp++;
                break;
            }

    }
    if (comp!=0){exit(0);}

    printf("donner le nom du realisateur\n");
    scanf("%s",f.realisateur);

     if (comp2!=0){exit(0);}
    for(k=0;k<strlen(f.realisateur);k++){
            if ((f.realisateur[k]<65) || ((f.realisateur[k]>90)&&(f.realisateur[k]<97)) || (f.realisateur[k]>122))
            {
                printf ("le realisateur ne doit pas contenir des caracteres speciaux\n");
                comp2++;
                break;
            }
    }
      if (comp2!=0){exit(0);}

*/
do
{

    printf("donner le nom du realisateur\n");
    scanf("%s",f.realisateur);
    comp2=0;
    for(k=0;k<strlen(f.realisateur);k++){
            if ((f.realisateur[k]<65) || ((f.realisateur[k]>90)&&(f.realisateur[k]<97)&&(f.realisateur[k]!=95)) || (f.realisateur[k]>122))
            {
                printf ("le realisateur ne doit pas contenir des caracateres speciaux\n");
                comp2++;
                break;
            }

    }
    }
    while (comp2!=0);

    /*intf("donner les trois principaux acteurs\n");
    for(i=0;i<3;i++)
    {
        printf("acteurs[%d]=",i+1);
        scanf("%s",&f.acteur[i]);
        printf("\n");
        for(k=0;k<strlen(f.acteur[i]);k++){
            if ((f.acteur[i][k]<65) || ((f.acteur[i][k]>90)&&(f.acteur[i][k]<97)) || (f.acteur[i][k]>122))
            {
                printf ("l'acteur ne doit pas contenir des caracteres speciaux\n");
                comp4++;
                break;
            }

    }
    if (comp4!=0){exit(0);}

    }
    */
    do
{
comp4=0 ;
    printf("donner le nom du acteur 1 : \n");
    scanf("%s",&f.acteur[0]);
    for(k=0;k<strlen(f.acteur[0]);k++){
             if ((f.acteur[0][k]<65) || ((f.acteur[0][k]>90)&&(f.acteur[0][k]<97)&&(f.acteur[0][k]!=95)) || (f.acteur[0][k]>122))
            {
                printf ("le nom du premier acteur ne doit pas contenir des caracteres speciaux\n");
                comp4++;
                break;
            }

    }
    }
    while (comp4!=0) ;

        do
{
comp41=0 ;
    printf("donner le nom du acteur 2 : \n");
    scanf("%s",&f.acteur[1]);
    for(k=0;k<strlen(f.acteur[1]);k++){
            if ((f.acteur[1][k]<65) || ((f.acteur[1][k]>90)&&(f.acteur[1][k]<97)&&(f.acteur[1][k]!=95)) || (f.acteur[1][k]>122))
            {
                printf ("le nom du deuxieme acteur ne doit pas contenir des caracteres speciaux\n");
                comp41++;
                break;
            }

    }
    }
    while (comp41!=0) ;
         do
{
comp42=0 ;
    printf("donner le nom du acteur 3 : \n");
    scanf("%s",&f.acteur[2]);
    for(k=0;k<strlen(f.acteur[2]);k++){
            if ((f.acteur[2][k]<65) || ((f.acteur[2][k]>90)&&(f.acteur[2][k]<97)&&(f.acteur[2][k]!=95)) || (f.acteur[2][k]>122))
            {
                printf ("le nom du troisieme acteur ne doit pas contenir des caracteres speciaux\n");
                comp42++;
                break;
            }

    }
    }
    while (comp42!=0) ;

    do
    {
    comp3=0;
    printf("donner la categorie de ce film \n");
    scanf("%s",f.categorie);
    for(k=0;k<strlen(f.categorie);k++){
            if ((f.categorie[k]<65) || ((f.categorie[k]>90)&&(f.categorie[k]<97)) || (f.categorie[k]>122))
            {
                printf ("la categorie ne doit pas contenir des caracteres speciaux\n");
                comp3++;
                break;
            }

    }
    }

        while (comp3!=0) ;
         int  month, year,day;

   time_t now;

    time(&now);

    struct tm *local = localtime(&now);
    year = local->tm_year + 1900;
do {
        comp6=0;
    printf("donner sa date de sortie:jour: ");
    scanf("%i",&f.date_sortie.jour);
    if ((f.date_sortie.jour>31) || (f.date_sortie.jour<1))
            {
                printf ("Vous devez verifier le jour\n");
                comp6++;
            }
}
while (comp6!=0) ;
do  {
    comp7=0;
    printf("donner sa date de sortie:mois: ");
    scanf("%i",&f.date_sortie.mois);
    if ((f.date_sortie.mois>12) || (f.date_sortie.mois<1))
            {
                printf ("Ce mois n'existe pas\n");
               comp7++;
            }

    else if ((f.date_sortie.mois==2)&&(f.date_sortie.jour>29))
    {
               printf("verifier la date\n");
               do {
        comp6=0;
    printf("donner sa date de sortie:jour: ");
    scanf("%i",&f.date_sortie.jour);
    if ((f.date_sortie.jour>29) || (f.date_sortie.jour<1))
            {
                printf ("Vous devez verifier le jour\n");
                comp6++;
            }
}
while ((comp6!=0) && (f.date_sortie.jour>29) ) ;


    }
      else if (((f.date_sortie.mois==4)||(f.date_sortie.mois==6)||(f.date_sortie.mois==9)||(f.date_sortie.mois==11))&&(f.date_sortie.jour>30))
    {
               printf("verifier la date\n");
               do {
        comp6=0;
    printf("donner sa date de sortie:jour: ");
    scanf("%i",&f.date_sortie.jour);
    if ((f.date_sortie.jour>30) || (f.date_sortie.jour<1))
            {
                printf ("Vous devez verifier le jour\n");
                comp6++;
            }
}
while (comp6!=0) ;


    }
}
while (comp7!=0);

do {
        comp8=0;
    printf("donner sa date de sortie:annee: ");
    scanf("%i",&f.date_sortie.annee);
    if ((f.date_sortie.annee>year) || (f.date_sortie.annee<1930))
            {
                printf ("l'annee doit etre entre 1930 et l'annee actuelle\n");
                comp8++;
            }
}
while(comp8!=0);
do{
    comp5=0;
    printf("donner une description pour ce film\n");
    scanf("%s",f.description);
    for (k=0;k<strlen(f.description);k++){
     //if((f.description[i]=='!')||(f.description[i]=='?')||(f.description[i]=='*')||(f.description[i]=='&')||(f.description[i]=='#')||(f.description[i]=='/')||(f.description[i]==';')||(f.description[i]==',')||(f.description[i]==':')||(f.description[i]=='.')||(f.titre[i]=='-')||(f.titre[i]=='_'))
    if (((f.description[k]>0) && (f.description[k]<31)) || ((f.description[k]>32) &&(f.description[k]<48)) || ((f.description[k]>57)  && (f.description[k]<65)) || ((f.description[k]>90)  && (f.description[k]<97) && (f.description[k]!=95)) || (f.description[k]>122) )
     {

                printf ("la description ne doit pas contenir des caracteres speciaux\n");
                comp5++;
                break;
            }

    }
}
    while (comp5!=0);

    return f;

}

      /* fprintf(fichier, "titre : %s \n", f.titre);
        fprintf(fichier, "realisateur : %s \n", f.realisateur);
         for(i=0;i<3;i++)
    {
        fprintf(fichier, "acteur n%i  : %s \n",i, f.acteur[i]);
 }
         fprintf(fichier, "categorie : %s \n", f.categorie);
        fprintf(fichier, "date de sortie : %i/%i/%i \n", f.date_sortie.jour,f.date_sortie.mois,f.date_sortie.annee);
        fprintf(fichier, "*******************************\n");*/

//fclose(fichier);
  //  }

void afficherFiche(Film f)
{
    int i;
    printf("titre : %s | realisateur: %s |\n",f.titre,f.realisateur);
    for(i=0;i<3;i++)
        {
            printf("acteurs[%d]=%s |",i+1,f.acteur[i]);
        }
    printf("categorie : %s | date_sortie: %i/%i/%i |\n",f.categorie,f.date_sortie.jour,f.date_sortie.mois,f.date_sortie.annee);
    printf("description : %s \n",f.description);

 }

int rechercherFilmSelonTitre(Film tab[],int N)
{
    int i;
    char nom_rechercher[10];
    printf("donner le nom a rechercher\n");
    scanf("%s",nom_rechercher);
    for(i=0;i<N;i++)
        if(!strcmp(nom_rechercher,tab[i].titre))
            return i;
    return -1;
}

int rechercherFilmCategorie(Film tab[],int N)
{
    int i;
    char categorie_rechercher[10];
    printf("donner la categorie des films à rechercher\n");
    scanf("%s",categorie_rechercher);
    for(i=0;i<N;i++)
        if(!strcmp(categorie_rechercher,tab[i].categorie))
            afficherFiche(tab[i]);

    return 0;
}

int rechercherFilmParTitreOuMotCle(Film tab[],int N)

{
        int i ;
        char nom_rechercher[10];
        char motcle_rechercher[10];
        printf("donner le nom a rechercher\n");
        scanf("%s",nom_rechercher);
        printf("donner le mot cle a rechercher\n");
        scanf("%s",motcle_rechercher);
        for(i=0;i<N;i++)
            if(((strstr(tab[i].description,motcle_rechercher))!=0)||(!strcmp(nom_rechercher,tab[i].titre)))
             return i;
        return -1;
}

int supprimerFilm(Film tab[],int N,int indice)
{
    int i;
    for(i=indice;i<N;i++)
        tab[i]=tab[i+1];
    return N-1;
}

void triFiche(Film tab[],int N)
{
    int i,j;
    Film c ;
    for(i=0;i<N-1;i++)
        for(j=i+1;j<N;j++)

         if ( tab[i].date_sortie.annee > tab[j].date_sortie.annee )
         {
             c = tab[i];
            tab[i] = tab[j];
            tab[j] = c;
         }

         else if ( tab[i].date_sortie.annee == tab[j].date_sortie.annee )
         {
             if ( tab[i].date_sortie.mois > tab[j].date_sortie.mois )
         {
            c = tab[i];
            tab[i] = tab[j];
            tab[j] = c;
         }
         else if (tab[i].date_sortie.mois == tab[j].date_sortie.mois )
         {
             if ( tab[i].date_sortie.jour > tab[j].date_sortie.jour )
           {

              c = tab[i];
            tab[i] = tab[j];
            tab[j] = c;
          }
         }
         }
}

void modifierFilm(Film tab[],int N)
{
        int choix ;
        int j;
        printf("choisissez le numéro du film\n");
        scanf ("%i", &j);

    do{
    printf("1 pour modifier un titre\n");
    printf("2 pour modifier un realisateur\n");
    printf ("3 pour modifier un acteur \n") ;
    printf("4 pour modifier une categorie \n");
    printf("5 pour modifier une date de sortie\n");
    printf("6 pour modifier une description \n");
    printf ("0 pour quitter\n");
    printf ("Donner le choix\n") ;
    scanf("%i", &choix) ;

    switch(choix)
    {
    case 1 :
        {
            char nouveau_titre[10];
            printf("saisir le nouveau titre: \n ");
            scanf ("%s",nouveau_titre);
            strcpy(tab[j-1].titre , nouveau_titre) ;
            break ;
        }
    case 2 :
        {
            char nouveau_realisateur[10];
            printf("saisir le nouveau realisateur : \n ");
            scanf ("%s",nouveau_realisateur);
            strcpy(tab[j-1].realisateur , nouveau_realisateur) ;
            break ;
        }
    case 3 :
            {
               int choixx ;
               do
               {


               printf("1 pour modifier le premier acteur\n");
               printf("2 pour modifier le 2eme acteur\n");
               printf("3 pour modifier le 3eme acteur \n");
               printf("0 pour quitter\n");
               scanf ("%i",&choixx);
               switch(choixx)
               {
               case 1 :
                {
                 char nouveau_acteur[10];
                 printf("saisir le nouveau acteur : \n ");
                 scanf ("%s",nouveau_acteur);

                 strcpy(tab[j-1].acteur[1] , nouveau_acteur);
                 break;
                }
                case 2 :
                {
                 char nouveau_acteur[10];
                 printf("saisir le nouveau acteur : \n ");
                 scanf ("%s",nouveau_acteur);
                 strcpy(tab[j-1].acteur[2] ,nouveau_acteur) ;
                 break;
                }
                case 3 :
                {
                 char nouveau_acteur[10];
                 printf("saisir le nouveau acteur : \n ");
                 scanf ("%s",nouveau_acteur);
                 strcpy(tab[j-1].acteur[1], nouveau_acteur) ;
                 break;
                }
                case 0 : break;
               }
               } while (choixx!=0) ;
               break ;

            }
    case 4 :
            {
            char nouvelle_categorie[10];
            printf("saisir la nouvelle categorie: \n ");
            scanf ("%s",nouvelle_categorie);
            strcpy(tab[j-1].categorie , nouvelle_categorie);
            break ;
            }
    case 5 :
        {
               int choixxx ;
               do {
               printf("1 pour modifier le jour\n");
               printf("2 pour modifier le mois\n");
               printf("3 pour modifier l'annee \n");
               printf("0 pour quitter \n");
               scanf ("%i",&choixxx);
               switch(choixxx)
               {
               case 1 :
                {
                 int nouveau_jour;
                 printf("saisir le nouveau jour : \n ");
                 scanf ("%i",&nouveau_jour);
                tab[j-1].date_sortie.jour =  nouveau_jour ;
                 break;
                }
                case 2 :
                {
                 int nouveau_mois;
                 printf("saisir le nouveau mois : \n ");
                 scanf ("%i",&nouveau_mois);
                 tab[j-1].date_sortie.mois=  nouveau_mois ;
                 break;
                }
                case 3 :
                {
                 int nouvelle_annee;
                 printf("saisir la nouvelle annee : \n ");
                 scanf ("%i",&nouvelle_annee);
                 tab[j-1].date_sortie.annee= nouvelle_annee ;
                 break;
                }
                case 0 : break;
               }
               }while (choixxx!=0) ;
               break ;
        }
        case 6 :
            {
            char n_description[100];
            printf("saisir la nouvelle description : \n ");
            scanf ("%s",n_description);
            strcpy(tab[j-1].description , n_description);
            break ;
            }
        case 0 : break ;


        }
}
while (choix!=0) ;

}



/*#include "film.h"
#include<stdio.h>
#include<string.h>

Film creerFiche()
{
    Film f;
    int i;
    int  k,j;
    int comp=0;
    int comp2=0 ;
    int comp3=0 ;
    int comp4=0;
    int comp41=0 ;
    int comp42= 0 ;
    int comp5=0 ;
    int comp6=0 ;
    int comp7=0 ;
    int comp8=0;
    char carSpec[] = {'!','?','"','&','(','-','_',')','^',';','*','#',',','.'} ;
do
{


    printf("donner le titre\n");
    scanf("%s",f.titre);
    comp=0 ;
    for(k=0;k<strlen(f.titre);k++){
            if (((f.titre[k]>0) && (f.titre[k]<31)) || ((f.titre[k]>32) &&(f.titre[k]<48)) || ((f.titre[k]>57)  && (f.titre[k]<65)) || ((f.titre[k]>90)  && (f.titre[k]<97) && (f.titre[k]!=95)) || (f.titre[k]>122) )
            {
                printf ("le titre ne doit pas contenir des car speciaux\n");
                comp++;
                break;
            }

    }
    }
    while (comp!=0) ;
    //if (comp!=0){exit(0);}

do
{

    printf("donner le nom du réalisateur\n");
    scanf("%s",f.realisateur);
    for(k=0;k<strlen(f.realisateur);k++){
            if ((f.realisateur[k]<65) || ((f.realisateur[k]>90)&&(f.realisateur[k]<97)) || (f.realisateur[k]>122))
            {
                printf ("le realisateur ne doit pas contenir des car speciaux");
                comp2++;
                break;
            }

    }
    }
    while (comp2!=0) ;
    do
{
comp4=0 ;
    printf("donner le nom du acteur 1 : \n");
    scanf("%s",&f.acteur[0]);
    for(k=0;k<strlen(f.acteur[0]);k++){
            if ((f.acteur[0][k]<65) || ((f.acteur[0][k]>90)&&(f.acteur[0][k]<97)) || (f.acteur[0][k]>122))
            {
                printf ("le realisateur ne doit pas contenir des car speciaux");
                comp4++;
                break;
            }

    }
    }
    while (comp4!=0) ;

        do
{
comp41=0 ;
    printf("donner le nom du acteur 2 : \n");
    scanf("%s",&f.acteur[1]);
    for(k=0;k<strlen(f.acteur[1]);k++){
            if ((f.acteur[1][k]<65) || ((f.acteur[1][k]>90)&&(f.acteur[1][k]<97)) || (f.acteur[1][k]>122))
            {
                printf ("le realisateur ne doit pas contenir des car speciaux");
                comp41++;
                break;
            }

    }
    }
    while (comp41!=0) ;



    do
    {
    printf("donner la catégorie de ce film \n");
    scanf("%s",f.categorie);
    for(k=0;k<strlen(f.categorie);k++){
            if ((f.categorie[k]<65) || ((f.categorie[k]>90)&&(f.categorie[k]<97)) || (f.categorie[k]>122))
            {
                printf ("la categorie ne doit pas contenir des car speciaux");
                comp3++;
                break;
            }

    }
    }
        while (comp3!=0) ;

        do
        {

       comp6=0;
    printf("donner sa date de sortie:jour: ");
    scanf("%i",&f.date_sortie.jour);
    if ((f.date_sortie.jour>31) || (f.date_sortie.jour<1))
            {
                printf ("le jour ne doit pas etre superieur a 31 ou inferieur a 1\n");
                comp6++;

            }
             }
             while (comp6!=0) ;
do
{
    comp7=0;

    printf("donner sa date de sortie:mois: ");
    scanf("%i",&f.date_sortie.mois);
    if ((f.date_sortie.mois>12) || (f.date_sortie.mois<1))
            {
                printf ("le mois ne doit pas etre superieur a 12 ou inferieur a 1");
               comp7++ ;
            }

}
  while (comp7!=0) ;
  do
  {

 comp8=0;
    printf("donner sa date de sortie:annee: ");
    scanf("%i",&f.date_sortie.annee);
    if ((f.date_sortie.annee>2020) || (f.date_sortie.annee<1930))
            {
                printf ("l'annee ne doit pas etre superieur a cette annee ou inferieur a 1930");
                comp8++;
            }
 }
 while (comp8!=0) ;

    printf("donner une déscription pour ce film\n");
    scanf("%s",f.description);
    for(k=0;k<strlen(f.description);k++){
            if (((f.description[k]>0) && (f.description[k]<31)) || ((f.description[k]>32) &&(f.description[k]<48)) || ((f.description[k]>57)  && (f.description[k]<65)) || ((f.description[k]>90)  && (f.description[k]<97)) || (f.description[k]>122) )
            {
                printf ("la description ne doit pas contenir des car speciaux");
                comp5++;
                break;
            }

    }
    if (comp5!=0){exit(0);}

    return f;

}


void afficherFiche(Film f)
{
    int i;
    printf("titre : %s | réalisateur: %s |\n",f.titre,f.realisateur);
    for(i=0;i<3;i++)
        {
            printf("acteurs[%d]=%s |",i+1,f.acteur[i]);
        }
    printf("catégorie : %s | date_sortie: %i/%i/%i |\n",f.categorie,f.date_sortie.jour,f.date_sortie.mois,f.date_sortie.annee);
    printf("Déscription : %s \n",f.description);

 }

int rechercherFilmSelonTitre(Film tab[],int N)
{
    int i;
    char nom_rechercher[10];
    printf("donner le nom à rechercher\n");
    scanf("%s",nom_rechercher);
    for(i=0;i<N;i++)
        if(!strcmp(nom_rechercher,tab[i].titre))
            return i;
    return -1;
}

int rechercherFilmCategorie(Film tab[],int N)
{
    int i;
    char categorie_rechercher[10];
    printf("donner la categorie des films à rechercher\n");
    scanf("%s",categorie_rechercher);
    for(i=0;i<N;i++)
        if(!strcmp(categorie_rechercher,tab[i].categorie))
            afficherFiche(tab[i]);

    return 0;
}

int rechercherFilmParTitreOuMotCle(Film tab[],int N)

{
        int i ;
        char nom_rechercher[10];
        char motcle_rechercher[10];
        printf("donner le nom à rechercher\n");
        scanf("%s",nom_rechercher);
        printf("donner le mot clé à rechercher\n");
        scanf("%s",motcle_rechercher);
        for(i=0;i<N;i++)
            if(((strstr(tab[i].description,motcle_rechercher))!=0)||(!strcmp(nom_rechercher,tab[i].titre)))
             return i;
        return -1;
}

int supprimerFilm(Film tab[],int N,int indice)
{
    int i;
    for(i=indice;i<N;i++)
        tab[i]=tab[i+1];
    return N-1;
}

void triFiche(Film tab[],int N)
{
    int i,j;
    Film c ;
    for(i=0;i<N-1;i++)
        for(j=i+1;j<N;j++)

         if ( tab[i].date_sortie.annee > tab[j].date_sortie.annee )
         {
             c = tab[i];
            tab[i] = tab[j];
            tab[j] = c;
         }

         else if ( tab[i].date_sortie.annee == tab[j].date_sortie.annee )
         {
             if ( tab[i].date_sortie.mois > tab[j].date_sortie.mois )
         {
            c = tab[i];
            tab[i] = tab[j];
            tab[j] = c;
         }
         else if (tab[i].date_sortie.mois == tab[j].date_sortie.mois )
         {
             if ( tab[i].date_sortie.jour > tab[j].date_sortie.jour )
           {

              c = tab[i];
            tab[i] = tab[j];
            tab[j] = c;
          }
         }
         }
}

void modifierFilm(Film tab[],int N)
{
        int choix ;
        int j;
        printf("choisissez le numéro du film\n");
        scanf ("%i", &j);

    do{
    printf("1 pour modifier un titre\n");
    printf("2 pour modifier un realisateur\n");
    printf ("3 pour modifier un acteur \n") ;
    printf("4 pour modifier une categorie \n");
    printf("5 pour modifier une date de sortie\n");
    printf("6 pour modifier une description \n");
    printf ("0 pour quitter\n");
    printf ("Donner le choix") ;
    scanf("%i", &choix) ;

    switch(choix)
    {
    case 1 :
        {
            char nouveau_titre[10];
            printf("saisir le nouveau titre: \n ");
            scanf ("%s",nouveau_titre);
            strcpy(tab[j-1].titre , nouveau_titre) ;
            break ;
        }
    case 2 :
        {
            char nouveau_realisateur[10];
            printf("saisir le nouveau realisateur : \n ");
            scanf ("%s",nouveau_realisateur);
            strcpy(tab[j-1].realisateur , nouveau_realisateur) ;
            break ;
        }
    case 3 :
            {
               int choixx ;
               do
               {


               printf("1 pour modifier le premier acteur\n");
               printf("2 pour modifier le 2eme acteur\n");
               printf("3 pour modifier le 3eme acteur \n");
               printf("0 pour quitter\n");
               scanf ("%i",&choixx);
               switch(choixx)
               {
               case 1 :
                {
                 char nouveau_acteur[10];
                 printf("saisir le nouveau acteur : \n ");
                 scanf ("%s",nouveau_acteur);

                 strcpy(tab[j-1].acteur[1] , nouveau_acteur);
                 break;
                }
                case 2 :
                {
                 char nouveau_acteur[10];
                 printf("saisir le nouveau acteur : \n ");
                 scanf ("%s",nouveau_acteur);
                 strcpy(tab[j-1].acteur[2] ,nouveau_acteur) ;
                 break;
                }
                case 3 :
                {
                 char nouveau_acteur[10];
                 printf("saisir le nouveau acteur : \n ");
                 scanf ("%s",nouveau_acteur);
                 strcpy(tab[j-1].acteur[1], nouveau_acteur) ;
                 break;
                }
                case 0 : break;
               }
               } while (choixx!=0) ;
               break ;

            }
    case 4 :
            {
            char nouvelle_categorie[10];
            printf("saisir la nouvelle categorie: \n ");
            scanf ("%s",nouvelle_categorie);
            strcpy(tab[j-1].categorie , nouvelle_categorie);
            break ;
            }
    case 5 :
        {
               int choixxx ;
               do {
               printf("1 pour modifier le jour\n");
               printf("2 pour modifier le mois\n");
               printf("3 pour modifier l'annee \n");
               printf("0 pour quitter \n");
               scanf ("%i",&choixxx);
               switch(choixxx)
               {
               case 1 :
                {
                 int nouveau_jour;
                 printf("saisir le nouveau jour : \n ");
                 scanf ("%i",&nouveau_jour);
                tab[j-1].date_sortie.jour =  nouveau_jour ;
                 break;
                }
                case 2 :
                {
                 int nouveau_mois;
                 printf("saisir le nouveau mois : \n ");
                 scanf ("%i",&nouveau_mois);
                 tab[j-1].date_sortie.mois=  nouveau_mois ;
                 break;
                }
                case 3 :
                {
                 int nouvelle_annee;
                 printf("saisir la nouvelle annee : \n ");
                 scanf ("%i",&nouvelle_annee);
                 tab[j-1].date_sortie.annee= nouvelle_annee ;
                 break;
                }
                case 0 : break;
               }
               }while (choixxx!=0) ;
               break ;
        }
        case 6 :
            {
            char n_description[100];
            printf("saisir la nouvelle description : \n ");
            scanf ("%s",n_description);
            strcpy(tab[j-1].description , n_description);
            break ;
            }
        case 0 : break ;


        }
}
while (choix!=0) ;

}  */
