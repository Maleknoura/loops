#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int price,id,quantity;
    char name[20];
}product;
void add_product(product *t,int size)
    {   

    for(int i= 0;i<size;i++){
    printf("saisir la quantite du produit : \n ");
    scanf("%d",&t[i].quantity);
     printf("saisir le nom du produit : \n ");
     scanf("%s",t[i].name);
     printf("saisir l id du produit : \n");
     scanf("%d",&t[i].id);
     printf("saisir le prix du produit :\n ");
     scanf("%d",&t[i].price);
    
    }
}
void show_product(product *t, int size){
    for(int i=0 ; i<2;i++){
        printf("nom:%s \n",t[i].name);
         printf("id: %d \n ",t[i].id);
         printf("price: %d \n",t[i].price);
    }
}
int main(){
    product tab[2];
    int choice;
    

    do {
            printf("[1]- add products: \n ");
        printf("[2]-show products : ");
        scanf("%d",&choice);
//   comment
    switch(choice){
        case 1 : add_product(tab,3);
        break;
        case 2 :show_product(tab,2);
        break;
        default: printf("ce choix n est pas valide ! ");
    }
    }while(choice != 0);
    
    
      

   return 0 ;
}