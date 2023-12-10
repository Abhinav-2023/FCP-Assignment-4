#include <stdio.h>
void main(){
    FILE *file=fopen("Assignment-3(1).txt","w");
    fprintf(file,"Hello I am Abhinav Singh and I am pursuing my B.Tech form Faculty Of Technology, Delhi University.");
    fclose(file);
}