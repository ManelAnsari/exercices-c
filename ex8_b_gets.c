/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
main()
{
 
 char CH1[100], CH2[100]; //chaine
 char CH3[100]="";        // resultat
 int L1,L2; //longueurs       */
 int I,J;

 puts("saisir la  1 er chaîne s'ile vous plait : ");
 gets(CH1);
 puts("saisir la 2 eme chaine s'ile vous plait  : ");
 gets(CH2);
 
 //longueeur
 for (L1=0; CH1[L1]; L1++) ;
 for (L2=0; CH2[L2]; L2++) ;
 //copier 1er moitè de ch1 a ch3
 for (I=0 ; I<(L1/2) ; I++)
     CH3[I]=CH1[I];
 //copier 1er moitè de ch2 a ch3
 J=I;
 for (I=0 ; I<(L2/2) ; I++)
    {
     CH3[J]=CH2[I];
     J++;
    }
 // fin chaine
 CH3[J]='\0';
 

 puts("Le résultat : ");
 puts(CH3);
 return 0;
}
