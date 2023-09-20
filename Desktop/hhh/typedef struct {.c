 typedef struct {
        int id, price, qt;
        char name[20];
    }product;
void add (product t, int size);
void show (productt, int size);
void menu(product t, int size);


void    show(productt, int size){
    for (int i=0; i<size; i++){
        printf("-----------------------------------------------\n");
        printf("\t\t\tProduct number %d\n\n", i+1);
        printf("-----------------------------------------------\n");

        printf("Name %d:\t %s\n",i+1,  t[i].name);
        printf("ID %d:\t %d\n",i+1, t[i].id);
        printf("Quantuty %d:\t %d\n", i+1, t[i].qt);
        printf("Price %d: \t %d \n",i+1,  t[i].price);
    }
}

void    menu(product t, int size){

    int ch = 0;
    while (ch != 3){
        printf("\t[1] Add New Product : \n");
        printf("\t[2] Show all Products : \n");
        printf("Enter your choice ");
        scanf("%d", &ch);

        switch (ch){

            case 1:
                add(t,size);
                break;
            case 2:
                show(t, size);
                break;
            default:
                break;
        }
    }

}

void add(productt, int size){

        printf("How much product you wish add :: ");
        scanf("%d", &size);

        for (int i=0; i<size; i++){
                printf("Enter the Product name %d:\t", i+1);
                scanf("%s",t[i].name);
                printf("Enter the product ID %d: \t", i+1);
                scanf("%d",&t[i].id);
                printf("Enter the quantity %d: \t", i+1);
                scanf("%d", &t[i].qt);
                printf("Enter the product price %d: \t", i+1);
                scanf("%d", &t[i].price);
        }
}

int    main(){

    int size;
    product t[3];
    menu(t,size);



    return 0;
}
