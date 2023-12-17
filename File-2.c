#include <stdio.h>

struct student{
    char name[50];
    int age;
    float cgpa;
};

void main(){

    struct student student1;

    FILE*fp=fopen("StructureData.txt","w");

    printf("Student Name: ");
    fgets(student1.name,sizeof(student1.name),stdin);

    printf("Student Age: ");
    scanf("%d",&student1.age);

    printf("Student cgpa: ");
    scanf("%f",&student1.cgpa);

    fprintf(fp,"name: %s\n age: %d\n cgpa: %f\n", student1.name,student1.age,student1.cgpa);
    // fprintf(fp, student1.name,student1.age,student1.cgpa);
    fclose(fp);
}