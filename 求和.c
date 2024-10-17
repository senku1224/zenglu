#include <stdio.h>
int main(){
    int sum=0,i=3;
    while(i<1000){
        sum=sum+i;
        i=i+3;
    }
    printf("%d",sum);
    return 0;
}
