#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//
// Created by abduh on 11/23/2023.
//

int main() {
    FILE *fp;
    fp = fopen("filename.txt", "w");
    // processing of the files
    fprintf(fp, "%s", "Hellow World");
    fclose(fp);
    return 0;
}