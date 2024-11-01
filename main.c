#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("\n");
    scanf("%d",&a);
    int b,c;
    if(a<7){
        printf("%d天",a);
    }
    else if(a==7){
        printf("1周");
    }
    else{
        b=a/7;
        c=a-7*b;
        printf("%d周%d天",b,c);
    }
    return 0;
}
