#include <stdio.h>
//
int main(){
 int totalAmount;
    int totalTransactionPerMonth;
    int potonganDiscon;

    printf("Masukan Total Belanjaan Anda, Nominal : ");
    scanf("%d", &totalAmount);
    printf("Masukan jumlah pembelian dalam satu bulan :");
    scanf("%d", &totalTransactionPerMonth);

    if (totalAmount < 200000){
        printf("tidak mendapat diskon.");
        printf("\n===================================================");
    }
    else if (totalAmount >= 200000 && totalAmount <= 500000){
        printf("\nmendapat diskon 10%");
        potonganDiscon = totalAmount * 10 / 100;
        totalAmount = totalAmount - potonganDiscon;

        printf("\nKamu mendapatkan potongan 10%, dipotong sejumlah : %d", potonganDiscon);
        printf("\ntotal belanja menjadi : %d", totalAmount);
        printf("\n===================================================");
    }
    else if (totalAmount >= 550.000 && totalAmount <= 1000000){
        printf("\nmendapat diskon 20%.");
        potonganDiscon = totalAmount * 20 / 100;
        totalAmount = totalAmount - potonganDiscon;--=-

        printf("\nKamu mendapatkan potongan 20%, dipotong sejumlah : %d", potonganDiscon);
        printf("\ntotal belanja menjadi : %d", totalAmount);
        printf("\n===================================================");
    }

    if (totalTransactionPerMonth >= 4){
        potonganDiscon = totalAmount * 20 / 100;
        totalAmount = totalAmount - potonganDiscon;
        printf("\nKamu telah belanja 4 kali dalam sebulan, \n"
               "Kamu Mendapatkan diskon 20%, dipotong sejumlah : %d", potonganDiscon);
        printf("\n===================================================");
    }

    printf("\nTotal biaya yang harus dibayarkan keseluruhan adalah : %d", totalAmount);

    return 0;
}