#include <stdio.h>

int main(){
    int x;
    for ( x = 0; x < 10; x++ ) {
        printf("%d\n",x);
    }
    x =0;
    while (x<10){
        printf("%d\n",x);
    }
    x=0;
    do{
        printf("%d\n",x);
        x+=1;
    } while(x<10);
    return 0;
}