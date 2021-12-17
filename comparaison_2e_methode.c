#include <stdio.h>
#include <string.h>
 
int main()
{
   char CH1[100], CH2[100];
 
   printf(" Entrez la première chaîne de caractère: ");
   gets(CH1);
 
   printf(" Entrez la deuxième chaîne de caractère: ");
   gets(CH2);
 /* Upper(str2),
  Upper(str1),*/
  // COMPARER LES DEUX chaînes
 
   if (strcmp(CH1,CH2) == 0)
      printf(" Les deux chaînes sont egales.\n");
   else
      printf(" Les deux chaînes ne sont pas egales.\n");
 
   return 0;
}