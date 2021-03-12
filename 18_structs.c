#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//usually we start a struct name with capital letter
struct Student{
    char name[50];
    char course[50];
    int age;
    double GPA;
};

int main(){

    struct Student student1; //we created a container called student1 which stores name, course, age, & GPA 

    // in array we store a single type of data type
    // while in struct we can store different datattypes in a single struct
    student1.age = 21;
    student1.GPA = 7.8;
    strcpy( student1.name, "Sally");
    strcpy( student1.course, "Electronics");

    struct Student student2;
    student2.age = 20;
    student2.GPA = 6.9;
    strcpy( student2.name, "mark");
    strcpy( student2.course, "Civil");


    printf("%d\n", student1.age);
    printf("%s\n", student2.name);

    return 0;
}