#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct{
    int x;
    int y;
}point ;
int main(){
      point a,b ;
      float d ;
    printf("sasir le coordonnee x du point a : ");
    scanf("%d",& a.x);
     printf("sasir le coordonnee y du point a : ");
    scanf("%d",&a.y);
     printf("sasir la coordoonnee x du point b : ");
    scanf("%d",& b.x);
      printf("sasir la coordoonnee y du point b : ");
       scanf("%d",& b.y);
    d= sqrt (pow((b.x-a.x),2)+ pow((b.y-a.y),2));
    printf("la distance est : %d",d);
return 0 ;

}