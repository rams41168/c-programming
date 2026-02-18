#include<stdio.h>
int main(){
int a = 3;
int b = 5;
int c = 7;
int result;
result = a+b+c;
printf("result of a+b+c: %d\n",result);
result = a+b*c;
printf("result of a+b*c:%d\n",result);
result = a+b>c?a:b;
printf("result of a+b>c?a:b:%d\n",result);
return 0;
} 
