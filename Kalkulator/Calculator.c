#include <stdio.h>
#include <stdlib.h>
#include <mqoai.h>
#include <stdbool.h>

//
// Created by abduh on 11/30/2023.
//
int operatorLeft(int hasil, int angkaPertama, int angkaKedua, char operatorPertama) {

    if (hasil == 0){
        if (operatorPertama == '*'){
            hasil = angkaPertama * angkaKedua;
        }else if (operatorPertama == '/'){
            hasil = angkaPertama / angkaKedua;
        }else if (operatorPertama == '-'){
            hasil = angkaPertama - angkaKedua;
        }else if (operatorPertama == '+'){
            hasil = angkaPertama + angkaKedua;
        }else{
            printf("Operator %d tidak ditemukann\n", operatorPertama);
        }
    }   else {
        switch (operatorPertama) {
            case '*':
                hasil *= angkaPertama;
                break;
            case '+':
                hasil += angkaPertama;
                break;
            case '-':
                hasil -= angkaPertama;
                break;
            case '/':
                hasil /= angkaPertama;
                break;
        }
    }
    return hasil;
}
int operatorRight(int hasil, int angkaKedua, int angkaKetiga, char operatorKedua) {
    if (hasil == 0){
        if (operatorKedua == '*'){
            hasil = angkaKedua * angkaKetiga;
        }else if(operatorKedua == '/'){
            hasil = angkaKedua / angkaKetiga;
        }else if(operatorKedua == '+'){
            hasil = angkaKedua + angkaKetiga;
        }else if (operatorKedua == '-'){
            hasil = angkaKedua - angkaKetiga;
        } else {
            printf("Operator %d tidak ditemukann\n", operatorKedua);
        }
    } else{
        switch (operatorKedua) {
            case '*':
                hasil *= angkaKetiga;
                break;
            case '+':
                hasil += angkaKetiga;
                break;
            case '-':
                hasil -= angkaKetiga;
                break;
            case '/':
                hasil /= angkaKetiga;
                break;
        }
    }

    return hasil;
}


int main() {
    int angkaPertama = 0;
    int angkaKedua = 0;
    int angkaKetiga = 0;
    char operatorPertama;
    char operatorKedua;
    int hasil;

    printf("Masukkan ekspresi (contoh: 3 + 4 * 2): ");
    scanf("%d %c %d %c %d", &angkaPertama, &operatorPertama, &angkaKedua, &operatorKedua, &angkaKetiga);

    if (operatorPertama == '*' || operatorPertama == '/'){
        hasil = operatorLeft(hasil,angkaPertama, angkaKedua, operatorPertama);
        hasil = operatorRight(hasil, angkaKedua,angkaKetiga,operatorKedua );
    }else {
        hasil = operatorRight(hasil, angkaKedua, angkaKetiga,operatorKedua);
        hasil = operatorLeft(hasil,angkaPertama, angkaKedua, operatorPertama);
    }

    printf("hasil %d", hasil);

    return 0;
}
