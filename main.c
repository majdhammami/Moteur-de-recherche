#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "film.h"

int main()
{

    Film catalogue[30];

    int indice, indice2, indice3;

    int choix ;

    time_t timestamp = time( NULL );
    struct tm * timeInfos = localtime( & timestamp );

 printf( "Date and local time : %02d/%02d/%04d %02d:%02d:%02d\n",
        //timeInfos->tm_year+1900, timeInfos->tm_mon+1, timeInfos->tm_mday,
        timeInfos->tm_mday, timeInfos->tm_mon+1, timeInfos->tm_year+1900,
        timeInfos->tm_hour, timeInfos->tm_min, timeInfos->tm_sec );

     int c=0;
    int i=0;
    int h;
    int N=0 ;
    FILE* F ;
    F=fopen("film.txt","rt") ;
     if (F==NULL)
     {


        printf ("le fichier n'existe pas\n") ;
        }
     else
     {
         while(!feof(F))
         {
             fscanf(F,"%s %s %s %s %s %s %d %d %d %s\n", catalogue[N].titre, catalogue[N].realisateur, catalogue[N].acteur[0],catalogue[N].acteur[1],
            catalogue[N].acteur[2],catalogue[N].categorie, &catalogue[N].date_sortie.jour,&catalogue[N].date_sortie.mois,&catalogue[N].date_sortie.annee,catalogue[N].description ) ;
            N++;
         }

            }

     fclose(F);
     do{
    printf("1 pour Creer une fiche\n");
    printf("2 pour Rechercher un film selon le titre\n");
    printf ("3 pour Rechercher selon une categorie donnee \n") ;
    printf("4 pour Rechercher un film par la donnee du titre ou un mot cle \n");
    printf("5 pour trier toutes les fiches selon leur date de sortie\n");
    printf("6 pour supprimer un film de ce catalogue\n");
    printf("7 pour afficher le catalogue\n");
    printf ("8 pour modifier quelque chose\n");
    printf ("0 pour quitter\n");
    printf ("Donner le choix\n") ;
    scanf("%i", &choix) ;

    switch(choix)
    {
    case 1 :

        {
            do
    {

        catalogue[N]=creerFiche();
        N++ ;
        printf ("0:si vous voulez quitter, 1:si vous voulez ajouter un film\n") ;
        scanf("%d",&h);
    }
    while((h==1)&&(N<30)) ;


        /*{
            for (j=0;j<i;j++)
            {
                if (!strcmp(catalogue[i].titre,catalogue[j].titre))
                {
                                        c++ ;

                }
                break;

            }
            if (c!=0)
            {
                printf ("********************film existe déjà ! ***********************\n");
                supprimerFilm(catalogue,N,i);
                c=0;
                i-- ;
            }

            continue;

        }*/
break ;
    }


    case 2 :
        {
         indice= rechercherFilmSelonTitre(catalogue,N);
if(indice!=-1)
{
            afficherFiche(catalogue[indice]);

}
    break;
        }
    case 3 :
        {
          rechercherFilmCategorie(catalogue,N) ;

        break;
         }

    case 4 :
    {
    indice2= rechercherFilmParTitreOuMotCle(catalogue,N);

if(indice2!=-1)
{
    afficherFiche(catalogue[indice2]);

}
break;
    }

    case 5:
    {

     triFiche(catalogue, N) ;
     break;
    }
    case 6:
        {
    indice3 =rechercherFilmSelonTitre(catalogue,N);
     if(indice3!=-1)
     {
          N=supprimerFilm(catalogue,N,indice3);
          printf("le catalogue aprés suppression\n");
          for(i=0;i<N;i++)
            {
                afficherFiche(catalogue[i]);

           }

     }

     else
         printf("le film n est pas dans le catalogue \n");
         break;
        }
    case 7:
        {
             for(i=0;i<N;i++)
    {
        printf ("film n: %i \n ",i+1);
        afficherFiche(catalogue[i]);
    }
break ;
        }
    case 8 :
        {
            modifierFilm(catalogue, N) ;
            break;
        }
        case 0 :
            {
                F= fopen("film.txt","wt") ;
                for (i=0 ; i<N ; i++)
                {


                    fprintf(F,"%s %s %s %s %s %s %d %d %d %s\n", catalogue[i].titre, catalogue[i].realisateur, catalogue[i].acteur[0],catalogue[i].acteur[1],
            catalogue[i].acteur[2],catalogue[i].categorie, catalogue[i].date_sortie.jour,catalogue[i].date_sortie.mois,catalogue[i].date_sortie.annee,catalogue[i].description ) ;
             }
             fclose(F);
                             exit(0) ;

            }
    }
}

    while (choix!=0) ;



    return 0;

}



/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "film.h"

int main()
{

    Film catalogue[30];

    int indice, indice2, indice3;

    int choix ;

    time_t timestamp = time( NULL );
    struct tm * timeInfos = localtime( & timestamp );



    printf( "Date and local time : %04d/%02d/%02d %02d:%02d:%02d\n",
        timeInfos->tm_year+1900, timeInfos->tm_mon+1, timeInfos->tm_mday,
        timeInfos->tm_hour, timeInfos->tm_min, timeInfos->tm_sec );



     int c=0;
    int i=0;
    int h;
    int N=0 ;
    FILE* F ;
    F=fopen("t.txt","rt") ;
     if (F==NULL)
     {


        printf ("le fichier n'existe pas\n") ;
        }
     else
     {
         while(!feof(F))
         {
             fscanf(F,"%s %s %s %s %s %s %d %d %d %s\n", catalogue[N].titre, catalogue[N].realisateur, catalogue[N].acteur[0],catalogue[N].acteur[1],
            catalogue[N].acteur[2],catalogue[N].categorie, &catalogue[N].date_sortie.jour,&catalogue[N].date_sortie.mois,&catalogue[N].date_sortie.annee,catalogue[N].description ) ;
            N++;
         }

            }

     fclose(F);
     do{
    printf("1 pour Creer une fiche\n");
    printf("2 pour Rechercher un film selon le titre\n");
    printf ("3 pour Rechercher selon une catégorie donnée \n") ;
    printf("4 pour Rechercher un film par la donnée du titre ou un mot clé \n");
    printf("5 pour trier toutes les fiches selon leur date de sortie\n");
    printf("6 pour supprimer un film de ce catalogue\n");
    printf("7 pour afficher le catalogue\n");
    printf ("8 pour modifier quelque chose\n");
    printf ("0 pour quitter\n");
    printf ("Donner le choix") ;
    scanf("%i", &choix) ;

    switch(choix)
    {
    case 1 :

        {
            do
    {

        catalogue[N]=creerFiche();
        N++ ;
        printf ("0:si vous voulez quitter, 1:si vous voulez ajouter un film") ;
        scanf("%d",&h);
    }
    while((h==1)&&(N<30)) ;



break ;
    }


    case 2 :
        {
         indice= rechercherFilmSelonTitre(catalogue,N);
if(indice!=-1)
{
            afficherFiche(catalogue[indice]);

}
    break;
        }
    case 3 :
        {
          rechercherFilmCategorie(catalogue,N) ;

        break;
         }

    case 4 :
    {
    indice2= rechercherFilmParTitreOuMotCle(catalogue,N);

if(indice2!=-1)
{
    afficherFiche(catalogue[indice2]);

}
break;
    }

    case 5:
    {

     triFiche(catalogue, N) ;
     break;
    }
    case 6:
        {
    indice3 =rechercherFilmSelonTitre(catalogue,N);
     if(indice3!=-1)
     {
          N=supprimerFilm(catalogue,N,indice3);
          printf("le catalogue aprés suppression\n");
          for(i=0;i<N;i++)
            {
                afficherFiche(catalogue[i]);

           }

     }

     else
         printf("le film n est pas dans le catalogue \n");
         break;
        }
    case 7:
        {
             for(i=0;i<N;i++)
    {
        printf ("film n: %i \n ",i+1);
        afficherFiche(catalogue[i]);
    }
break ;
        }
    case 8 :
        {
            modifierFilm(catalogue, N) ;
            break;
        }
        case 0 :
            {
                F= fopen("t.txt","wt") ;
                for (i=0 ; i<N ; i++)
                {


                    fprintf(F,"%s %s %s %s %s %s %d %d %d %s\n", catalogue[i].titre, catalogue[i].realisateur, catalogue[i].acteur[0],catalogue[i].acteur[1],
            catalogue[i].acteur[2],catalogue[i].categorie, catalogue[i].date_sortie.jour,catalogue[i].date_sortie.mois,catalogue[i].date_sortie.annee,catalogue[i].description ) ;
             }
             fclose(F);
                             exit(0) ;

            }
    }
}

    while (choix!=0) ;



    return 0;

}

*/
