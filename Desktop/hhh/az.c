#include <stdio.h>
#include <string.h> // Added for string functions

// GLOBAL VARIABLES DECLARATION ----------------------------------
int i = -1;

// structs declaration --------------------------------------------
typedef struct {
    int year;
    int month;
    int day;
} date;

typedef struct {
    char name[20], last_name[20];
    date birth_date;
} student;

// Function prototypes ---------------------------------------------
void add();
void show();
void tri_par_age () ;
int size;
struct student t[100];
 

void add() {
    i++; // Increment i
    printf("Enter the Name of student :: ");
    scanf("%s", t[i].name);
    printf("Enter the last name :: ");
    scanf("%s", t[i].last_name);
    printf("Enter your date of birth as the following syntax (dd/mm/aaaa) :: ");
    scanf("%d/%d/%d", &t[i].birth_date.day, &t[i].birth_date.month, &t[i].birth_date.year);
}

void show() {
    printf("\t+----------+---------------+------------+\n");
    printf("\t|  NAME    |   LAST NAME   |     AGE    |\n");
    printf("\t+----------+---------------+------------+\n");
    for (int j = 0; j <= i; j++) {
        printf("\t| %4s     | %4s        ||\n", t[j].name, t[j].last_name);
    }
}


void tri_par_age (){
  
    for(int i = 0 ; i<size-1;i++){
         for(int i = 0 ; i<size-i-1;i++){
            if(t[j].age>t[j+1].age){
                int temp+T[J];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
         }
    }
}

int main() {
    int choice ;
    while(1){
        printf("[1]-ajouter un apprenant : ");
        printf("[2]- tri_par_age : ");
        printf("[3]-voir les apprenants : ");
        scanf("%d",&choice);
     switch(choice){
          case 1 : add();;
            break;
    case 2 : tri_par_age;
            break;
    case 3 : show();
            break;     
    default : ("choix invalide ! ");
     }
   
    
    }

    return 0;
}
