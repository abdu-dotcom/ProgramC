#include <stdio.h>
#include <string.h>
//
// Created by abduh on 12/15/2023.
//

int main(){

    /*
     * Menggunakan strlen
     */

    char a[20] = "Program";
    char b[20] = {'P','r','o','g','r','a','m','\0'};

    // Using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n", strlen(a));
    printf("Length of string b = %zu \n", strlen(b));


    char stringPertama[20] = "Programing\n";
    char stringKedua[20];

    strcpy(stringKedua, stringPertama);
    printf("Copy %s", stringKedua);


    char firstString[100] = "Muhammad Abduh";
    char lastString[100] = "Husaini Batubara";

    strcat(firstString, lastString);
    printf(firstString);

    int i;
    int list_int[10];

    for (int i = 0; i <= 10; i++) {
        list_int[i] = i + 1;
        printf("list_int[%d] is initialized with %d.\n",i, list_int[i]);
    }
    return 0;

}