#include <stdio.h>
#include <stdlib.h>
//
// Created by abduh on 11/24/2023.
//

int main(){

    float distanceKiloMeter;
    float distanceMeter;
    float distanceCentimeter;


    // Loop untuk menampilkan hasil setiap kali Enter ditekan
    while (1) {

        // input jarak kilometer
        printf("Masukan jarak : ");
        scanf("%f", &distanceKiloMeter);

        // konversi jarak
        distanceMeter = distanceKiloMeter * 1000;
        distanceCentimeter = distanceMeter * 100;

        printf("%.2f kilometer = %.2f meter = %.2f sentimeter\n", distanceKiloMeter, distanceMeter, distanceCentimeter);
    }
}