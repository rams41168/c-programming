#include<stdio.h>
struct Address
{
char city[20];
int zip;
};
struct Person{
char name[20];
struct Address address;
};
int main ()
{
struct Person person= {"Alice","Newyork",10010};
printf("Name:%s\n", person.name);
printf("City:%s\n", person.address.city);
printf("ZIP code:%d\n", person.address.zip);
return 0;
}
