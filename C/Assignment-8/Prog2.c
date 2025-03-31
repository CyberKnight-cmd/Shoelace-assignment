#include<stdio.h>


struct Student
{
    char name[50];
    int marks;
};

struct Student Students[5];
int main(){
    for(int i = 0; i < 5; i++)
        scanf("%s %d", Students[i].name, &Students[i].marks);
    
    printf("Name\tMarks\n");
    for(int i = 0; i < 5; i++)
        printf("%s\t%d\n",Students[i].name,Students[i].marks);
    return 0;
}