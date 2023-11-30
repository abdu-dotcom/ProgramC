#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int caseOne() {
    int input, hour, minutes, seconds;
    printf("Masukan total detik: ");
    scanf("%d", &input);
    hour = input / 3600;
    input %= 3600;
    minutes = input / 60;
    seconds = input % 60; // perhitungan modul, angka akan dibagi habis, sisanya merupakan hasil dari modulus

    printf("%d hour", hour);
    printf("%d minutes ", minutes);
    printf("%d seconds", seconds);

    return 0;
}

int caseTwo() {
    char strConcat[100];
    char kalimat1[] = "teknik";
    char kalimat2[] = "informatika";
    char kalimat3[] = "binus";

    int lengthKalimat1 = strlen(kalimat1);
    int lengthKalimat2 = strlen(kalimat2);
    int lengthKalimat3 = strlen(kalimat3);

    sprintf(strConcat, "%s %s %s", kalimat1, kalimat2, kalimat3);
    printf("Gabungan 3 buah inputan kalimat = ");
    printf("%s \n", strConcat);
    printf("Hasil membalik kalimat gabungan = ");
    printf("%s ", strrev(kalimat1));
    printf("%s ", strrev(kalimat2));
    printf("%s \nq", strrev(kalimat3));

    printf("Hasil Membalik Kalimat gabungan = ");
    for (int i = strlen(strConcat) - 1; i >= 0; i--)
        printf("%c", strConcat[i]);

    printf("\nJumlah huruf kalimat pertama = ");
    printf("%d", lengthKalimat1);
    printf("\nJumlah huruf kalimat kedua = ");
    printf("%d", lengthKalimat2);
    printf("\nJumlah huruf kalimat ketiga = ");
    printf("%d", lengthKalimat3);

    printf("\nTotal Jumlah huruf = %d", lengthKalimat1 + lengthKalimat2 + lengthKalimat3);
    return 0;
}
void  main() {
    caseOne();
    caseTwo();
}
