#include<stdio.h>
#include<stdlib.h>
void affichage(int t[],int taille){
	for(int i=0;i<taille;i++){
		printf("%d",t[i]);
	}
	printf("\n");
}
void tri(int t[],int taille){
	for(int i=1;i<taille;i++)
	{
			int temp=t[i];
			int j = i-1;
			while( temp < t[j] && j>=0){
		t[j+1] = t[j];
		j--;
	}
		
			t[ j+1 ]=temp;
	}
}

int main(){
		int taille=9;
	int t[] = {1,4,6,9,7,2,8,3,5};
	printf("tableau initial: \n");
	affichage(t,taille);
	tri(t,taille);
	printf("affichage du tableau : \n");
	affichage(t,taille)	;

	return 0 ;
}
