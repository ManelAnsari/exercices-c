/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
main()
{

 char Tchar[4][40]; // table 4 mots
 int I;           
 /* Saisie des mots */
 printf("Entrez 4 mots, séparés par des espaces :\n");
 // parcour Saisie 4 mot 
 for (I=0; I<4; I++)
     scanf("%s", Tchar[I]);
 /* Affichage du résultat */
 for (I=3; I>=0; I--)
    printf("%s ", Tchar[I]);
 printf("\n");
  return 0;
}

