// perform integer division without using either / or * operators
#include <stdio.h>


int divide(int a,int b){
   // a / b
   int count = b;
   int quotient = 0;
   while (a >= count){
        quotient += 1;
        count += b;
   }
   return quotient;
}

int main(){
    int a;
    int b;
    scanf("%d/%d",&a,&b);
    printf("%d",divide(a,b));
    return 0;
}
