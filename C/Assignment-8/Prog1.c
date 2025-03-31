#include<stdio.h>


struct Student
{
    char name[50];
    int marks;
};

int main(){
    struct Student Avirupa;
    printf("Enter the name and marks : ");
    scanf("%s %d", Avirupa.name, &Avirupa.marks);
    printf("Name\tMarks\n");
    printf("%s\t%d",Avirupa.name,Avirupa.marks);
    return 0;
}