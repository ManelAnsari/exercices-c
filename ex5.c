/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
main()
{ 
char TXT[201]; // 
int I,J; // indice

int L; /// longuer

// saisir
printf("Entrez une ligne de texte :\n");
gets(TXT);
// compter les carateres
L=strlen(TXT) ;

// parcurie la chaîne et cherche apparation de e
for (J=0,I=0 ; I<L ; I++)
{
TXT[J] = TXT[I];
if (TXT[I] != 'e')
J++;
}
//fin chaine
TXT[J]='\0';
puts(TXT);
return 0;
}