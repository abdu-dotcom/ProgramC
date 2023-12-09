#include <stdio.h>
//
// Created by abduh on 12/9/2023.
//

int showMenu(){
    printf("Pilih operasi perhitungan yang ingin digunakan : \n");
    printf("1. Operasi +\n");
    printf("2. Operasi -\n");
    printf("3. Operasi -\n");
    printf("4. Operasi /\n");
    return 0;
}

int calculate(int operasi, int inputan1, int inputan2){
    int result = 0;

    switch (operasi) {
        case 1 :
            result = inputan1 + inputan2;
            break;
        case 2 :
            result = inputan1 - inputan2;
            break;
        case 3:
            result = inputan1 * inputan2;
            break;
        case 4:
            result = inputan1 / inputan2;
            break;
    }

    printf("hasil : %d", result);
    return 0;
}
int main() {
    int operasi;
    int number1;
    int number2;

    showMenu();
    printf("Masukin operasi:");
    scanf("%d", &operasi);

    printf("Masukin nilai pertama:");
    scanf("%d", &number1);

    printf("Masukin nilai kedua:");
    scanf("%d", &number2);

    calculate(operasi, number1, number2);
    return 0;
}