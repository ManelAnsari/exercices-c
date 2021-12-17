/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdio.h>
#include <string.h>
 main()
{

 char CH1[100], CH2[100]; //chaine
 char CH3[100]="";        //res


 printf("Saisie la première chaîne de caractères svp : ");
 gets(CH1);
 printf("Saisie la deuxième chaîne de caractères svp : ");
 gets(CH2);


// strncpy Cette fonction permet de copier le contenu d'une chaîne de caractère dans une autre
//
 strncpy(CH3, CH1, strlen(CH1)/2);
 strncat(CH3, CH2, strlen(CH2)/2);
  /* Affichage du résultat */
 printf("Resultat \"%s\"\n", CH3);
 return 0;
}