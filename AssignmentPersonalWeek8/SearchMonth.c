#include "stdio.h"
#include "string.h"
#include <ctype.h>
#include <stdbool.h>

//
// Created by abduh on 1/14/2024.
//

struct vokal{
    int countVokal;
    int countNonVokal;
};
int counthVocal(char month[]){

    struct vokal Vokal;
    Vokal.countVokal = 0;
    Vokal.countNonVokal = 0;
    for (int i = 0; i < strlen(month); ++i) {
        if (tolower(month[i]) == 'a'){
            Vokal.countVokal++;
        }else if(tolower(month[i]) == 'i'){
            Vokal.countVokal++;
        }else if(tolower(month[i]) == 'u'){
            Vokal.countVokal++;
        }else if(tolower(month[i]) == 'e'){
            Vokal.countVokal++;
        }else if(tolower(month[i]) == 'o'){
            Vokal.countVokal++;
        }else {
            Vokal.countNonVokal++;
        }
    }

    printf("Jumlah huruf vokal : %d\n", Vokal.countVokal);
    printf("Jumlah huruf Non vokal : %d", Vokal.countNonVokal);
    return 0;
};
int main(){

    int huruf;
    huruf = getchar();

    printf("The entered character is : %c\n", huruf);

    char * month[12] ={"January", "February", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    char * selectArray[] = {};

    int j = 1;
    int k = 0;
    int selectArrayNull = 1;

    for (int i = 0; i < sizeof(month)/sizeof(month[0]) ; i++) {
        if (tolower(huruf) == tolower( month[i][0])){
            selectArrayNull = 2;
            selectArray[k] = month[i];
            printf("%d. %s\n", j, month[i]);
            j++;
            k++;
        }
    }

    if (selectArrayNull == 2){

        int inpuntanMonth;

        printf("Input nomor, bulan yang ingin dipilih :");
        scanf(" %d", &inpuntanMonth);

        printf("bulan : %s\n", selectArray[inpuntanMonth-1]);
        counthVocal(selectArray[inpuntanMonth-1]);

    }else {
        printf("Tidak ada bulan awalan huruf : %c", huruf);

    }

    return 0;
}