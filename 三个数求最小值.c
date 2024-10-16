#include <stdio.h>
int main(){
    int a,b,c,min;
    printf("please input:\n");
    scanf("%d%d%d",&a,&b,&c);
    min=a;
    if(min>b){
    min=b;
    }
    if(min>c){
    min=c;
    }
    printf("the smallest number is:%d\n",min);
    return 0;
}
