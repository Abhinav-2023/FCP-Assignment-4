#include <stdio.h>

struct student{
    char name[50];
    int age;
    float cgpa;
};

int calculateChecksum(const char *data){
    int Checksum=0;
    while(*data){
        Checksum += *data++;
    }
    return Checksum;
}
void main(){

    struct student student1;

    FILE*fp=fopen("StructureData1.txt","w");

    printf("Student Name: ");
    fgets(student1.name,sizeof(student1.name),stdin);

    printf("Student Age: ");
    scanf("%d",&student1.age);

    printf("Student cgpa: ");
    scanf("%f",&student1.cgpa);

    fprintf(fp,"name: %s\n age: %d\n cgpa: %f\n", student1.name,student1.age,student1.cgpa);
    
    int Checksum=calculateChecksum(student1.name);
    fprintf(fp,"Checksum: %d\n",Checksum);

    fclose(fp);
}