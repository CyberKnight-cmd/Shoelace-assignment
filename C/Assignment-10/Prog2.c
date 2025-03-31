#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("file1.txt", "r");
    char Subjects[5][10];
    int marks[5];
    for(int i = 0; i < 5; i++){
        fscanf(fp, "%s %d", (Subjects + i), (marks+i));
        printf("\nSubject : %s", *(Subjects+i));
        printf("\nMarks : %d\n", *(marks+i));
    }
    return 0;
}