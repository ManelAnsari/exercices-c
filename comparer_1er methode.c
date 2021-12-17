/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
main()
{

 char CH1[200], CH2[200]; 

 
 printf("Entrez la première chaîne à comparer svp : ");
 gets(CH1);
 printf("Entrez la deuxième chaîne à comparer svp : ");
 gets(CH2);

 // chercher 
 for (I=0; (CH1[I]==CH2[I]) && CH1[I] && CH2[I]; I++)
     ;
 ///comparer le 1er element
 if (CH1[I]==CH2[I])
     printf("\"%s\" est égal à \"%s\"\n", CH1, CH2);
 else if (CH1[I]<CH2[I])
     printf("\"%s\" précède \"%s\"\n", CH1, CH2);
 else
     printf("\"%s\" précède \"%s\"\n", CH2, CH1);
  return 0;
}