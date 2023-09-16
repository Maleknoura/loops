#include<stdio.h>
#include<stdlib.h>
int main(){
	int nb1;
	printf("veuillez saisir un nombre : ");
	scanf("%d",&nb1);
	for(int i =0; i<10 ; i++){
		nb1++;
		printf("%d\n",nb1);
	}
     return 0;
}