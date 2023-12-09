#include <stdio.h>
//
// Created by abduh on 12/9/2023.
//

char cheackGrade(int ratarataNilai){

    char grade;

    if (ratarataNilai <= 55){
        grade = 'E';
    } else if (ratarataNilai <= 65){
        grade = 'D';
    } else if (ratarataNilai <= 75){
        grade = 'C';
    } else if (ratarataNilai <= 85){
        grade = 'B';
    } else if (ratarataNilai <= 100){
        grade = 'A';
    } else {
        grade = ' ';
    }
    return grade;
}
int main() {

    int jumlahMahasiswa = 0;

    int nilaiQuiz = 0;
    int nilaiTugas = 0;
    int nilaiAbsensi = 0;
    int nilaiPrakter = 0;
    int nilaiUAS = 0;
    char grade;
    // input jumlah mahasiswa, nilai ini jadi acuan jumlah maksimal perulangan

    printf("Masukkan Jumlah Mahasiswa : ");
    scanf("%d",&jumlahMahasiswa);

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        int ratarataNilai = 0;

        printf("\nMahasiswa %d", i+1);

        // masukan nilai quiz
        printf("\nMasukan nilai quiz:");
        scanf("%d", &nilaiQuiz);
        ratarataNilai += nilaiQuiz;

        // masukan nilai Tugas
        printf("\nMasukan nilai Tugas:");
        scanf("%d", &nilaiTugas);
        ratarataNilai += nilaiTugas;

        // masukan nilai Absensi
        printf("\nMasukan nilai Absensi:");
        scanf("%d", &nilaiAbsensi);
        ratarataNilai += nilaiAbsensi;

        // masukan nilai Praktek
        printf("\nMasukan nilai Praktek:");
        scanf("%d", &nilaiPrakter);
        ratarataNilai += nilaiPrakter;

        // masukan nilai UAS
        printf("\nMasukan nilai UAS:");
        scanf("%d", &nilaiUAS);
        ratarataNilai += nilaiUAS;

        ratarataNilai = ratarataNilai / 5;
        printf("\nNilai rata-rata ma hasiswa %d : ", i+1);
        printf("%d", ratarataNilai);

       grade =  cheackGrade(ratarataNilai);
        if (grade == 'D' || grade == 'E' ){
            printf("\nTidak Lulus");
        }else if (grade == 'A' || grade == 'B' || grade == 'C'){
            printf("\nLulus");
        }else {
            printf("\nNilai rata - rata kelebihan");
        }
    }
    return 0;
}