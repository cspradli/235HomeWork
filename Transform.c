#include <stdio.h>
#include <string.h>

int main(int argv, char const **argc)
{
    char buff[50];
    FILE *inFile, *outFile;
    inFile = fopen(argc[1], "r");
    outFile = fopen(argc[2], "w");

    if (inFile == NULL) {
        printf("Trouble opening file: %s \n", argc[1]);
        return 1;
    }
    if (outFile == NULL){
        printf("Can't  open file %s \n", argc[2]);
        return 1;
    }
    while (fscanf(inFile, "%s", buff)==1){
        fprintf(outFile, "%s\n", buff);
    }
    printf("Program run\n");
    fclose(inFile);
    fclose(outFile);
    return 0;
}
