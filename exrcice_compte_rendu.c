#include <stdio.h>
#include <stdlib.h>

int saisir(){
	int n;
	   do
    {
    printf(" Veuillez saisir la  taille du tableau : ");
    scanf("%d",&n);
    } while ( n<=0);
     return n ;
}

void Affichage(int *tab, int n){
	int i;
	for (i = 0; i < n; i++)
    {
        printf("%d \t",*(tab+i));
    }

}

void RemlpirTab(int *tab,int n ){
	int i ;
	for (i = 0; i < n; i++){
        printf("Entier n %d : ",i+1);
        scanf("%d",t+i);
    }
}


int Supprimer(){
int x;
	 printf("Veuillez saisir l'entier a supprimer : ");
    scanf("%d",&x);
    return x;
}

int position(int *tab,int n,int x){
    if(n<0)
        return n;
    if(*(tab+n)==x)
        return n;
    return position(tab,n-1,x);
}


void suppOccurence(int *tab,int *n, int x){
   int i;
    int j= position(tab,*n-1,x);
    if(j>=0){
        for ( i = j; i < *n-1; i++)
        {
            *(tab+i)=*(tab+i+1);
        }
    *n=*n-1;
    suppOccurence(t,n,x);
    }
}
void main(){
    int *tab,n,x,i;
     n= saisir();

    tab=malloc(n*4);
    RemlpirTab(tab, n );

    x=Supprimer();
    suppOccurence(tab,&n,x);
    tab=realloc(tab,n*4);

    Affichage(tab,n);
    system("pause");
}
