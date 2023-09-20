#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char name[20];
    int age;
}personne;
int main(){
    personne P;
    printf("saisir votre nom : ");
    scanf("%s",P.name);
     printf("saisir votre age: ");
    scanf("%d",&P.age);
    printf("votre nom est %s et votre age %d ",P.name,P.age);
    
}