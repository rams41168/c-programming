#include<stdio.h>

int Add (int a,int b);
int Subtract (int a,int b);

int main(){
 int Sum = Add(10,20);
 int Difference = Subtract(10,20);
 printf("Sum: %d\n",Sum); 
printf("Difference: %d\n",Difference);
 return 0;
}

int Add (int a,int b){
return  a + b; }
int Subtract (int a,int b){
return  a - b; }
