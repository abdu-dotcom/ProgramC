#include <stdio.h>
//

int calculateTotalAmount(int totalAmount, int potonganDiscount, int bulan){

    printf("\nMasukan Total Belanjaan Anda, Nominal : ");
    scanf(" %d", &totalAmount);

    if (totalAmount < 200000){
        printf("tidak mendapat diskon.");
        printf("\n===================================================");
    }
    else if (totalAmount >= 200000 && totalAmount <= 500000){
        printf("\nmendapat diskon 10%s", "%");
        potonganDiscount = totalAmount * 10 / 100;
        totalAmount = totalAmount - potonganDiscount;

        printf("\nKamu mendapatkan potongan 10%, dipotong sejumlah : %d", potonganDiscount);
        printf("\ntotal belanja menjadi : %d", totalAmount);
        printf("\n===================================================");
    }
    else if (totalAmount >= 550.000 && totalAmount <= 1000000){
        printf("\nmendapat diskon 20%s", "%");
        potonganDiscount = totalAmount * 20 / 100;
        totalAmount = totalAmount - potonganDiscount;

        printf("\nKamu mendapatkan potongan 20%, dipotong sejumlah : %d", potonganDiscount);
        printf("\ntotal belanja menjadi : %d", totalAmount);
        printf("\n===================================================");
    }else if (totalAmount > 1000000) {
        printf("\nmendapat diskon 30%s","%");
        potonganDiscount = totalAmount * 30 / 100;
        totalAmount = totalAmount - potonganDiscount;
        printf("\nKamu mendapatkan potongan 30%s, dipotong sejumlah : %d", "%", potonganDiscount);
        printf("\ntotal belanja menjadi : %d", totalAmount);
        printf("\n===================================================");
    }

    if (bulan == 4){
        potonganDiscount = totalAmount * 20 / 100;
        totalAmount = totalAmount - potonganDiscount;
        printf("\n Tetapi Kamu telah belanja 4 kali dalam sebulan, \n"
               "Kamu Mendapatkan diskon 20%, dipotong sejumlah : %d", potonganDiscount);
        printf("\ntotal belanja menjadi : %d", totalAmount);
        printf("\n===================================================");
    }

    printf("\nTotal biaya yang harus dibayarkan keseluruhan adalah : %d", totalAmount);

    return 0;
}
int main(){
    int totalAmount = 0;
    int potonganDiscount = 0;
    int bulan = 1;

    while (bulan < 5){

        calculateTotalAmount(totalAmount, potonganDiscount, bulan);
        printf("\n===================================================");
        printf("\nJumlah transaksi bulan ini : %d kali", bulan);
        bulan++;
    }
}