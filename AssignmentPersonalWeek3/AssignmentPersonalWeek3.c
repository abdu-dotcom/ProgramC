#include <stdio.h>
#include <stdlib.h>
//
// Created by abduh on 11/24/2023.
//

int main(){

    float distanceKiloMeter;
    float distanceMeter;
    float distanceCentimeter;

    // input jarak kilometer
    printf("Masukan jarak : ");
    scanf("%f", &distanceKiloMeter);

    // konversi jarak Meter dan Centimeter
    distanceMeter = distanceKiloMeter * 1000;
    distanceCentimeter = distanceMeter * 100;

    // hasil
    printf("%.2f kilometer = %.2f meter = %.2f sentimeter\n", distanceKiloMeter, distanceMeter, distanceCentimeter);

}