#include<stdio.h>

int main(){
    FILE *source, *destination;
    char temp;

    source = fopen("source.txt", "r");
    destination = fopen("destination.txt", "w");

    while ((temp = fgetc(source))!=EOF)
        fputc(temp, destination);
        
    return 0;
}