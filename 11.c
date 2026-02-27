# include <stdio.h>
int main(){
    int d1,d2,d3,d4,d5;
    srand(time(NULL));
    d1= rand()%10;
    printf("%d",d1);
    d2= rand()%10;
    printf("%d",d2);
    d3= rand()%10;
    printf("%d",d3);
    d4= rand()%10;
    printf("%d",d4);
    d5= rand()%10;
    printf("%d",d5);
    return 0;
}
