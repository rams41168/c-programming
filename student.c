#include<stdio.h>
struct Student {
int id;
char name[50];
float marks;
};
int main(){
struct Student student1={101,"Ram",70.5};
printf("Student Id:%d\n",student1.id);
printf("Student Name:%s\n",student1.name);
printf("Student Mark:%f\n",student1.marks);
student1.marks=90.2;
printf("Updated Marks:%f\n",student1.marks);
return 0;
}
