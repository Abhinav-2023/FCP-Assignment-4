#include <stdio.h>

void main(){
    FILE *file=fopen("Assignment-3(2).txt", "w");
    fprintf(file, "Table Of Numbers From 2 To 50: \n");
    for (int i=2; i<=50; i++){
        fprintf(file,"Table for %d:\n",i);
        for(int j=1;j<=10;j++){
            fprintf(file,"%d x %d = %d\n", i,j,i*j);
        }
    }
    fclose(file);
}