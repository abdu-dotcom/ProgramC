#include "stdio.h"
#include "string.h"
//
//
// Created by abduh on 1/7/2024.
//

struct dataPegawai {
    int nip;
    char nama[100];
    char alamat[250];
    int phoneNumber;
    char jabtan[100];
    char kodeGolong[2];
    int lembur;
};

struct salary {
    char codeGroup[3];
    int basicSalary;
    int overtimePay;
} ;

int inputanUserPertama(struct dataPegawai pegawai, struct salary EmployeeSalaryGroup[3]) {

    // inputan nip karyawan
    printf("Masukan Nip Karyawan : ");
    scanf("%d", &pegawai.nip);

    // inputan nama karyawan
    printf("Masukan Nama Karyawan : ");
    scanf("%s", pegawai.nama);

    // inputan alamat karyawan
    printf("Masukan alamat Karyawan : ");
    scanf("%s", pegawai.alamat);

    // inputan nomor hp karyawan
    printf("Masukan nomor hp Karyawan : ");
    scanf("%d", &pegawai.phoneNumber);

    // inputan jabatan karyawan
    printf("Masukan Jabatan Karyawan : ");
    scanf("%s", pegawai.jabtan);

    // inputan golongan karyawan
    printf("Masukan Golongan Karyawan : ");
    scanf("%s", pegawai.kodeGolong);

    int salaryEmployee = 0;
    // process calculate salary
    if (strcmp(pegawai.kodeGolong,EmployeeSalaryGroup[0].codeGroup) == 0){
        salaryEmployee = EmployeeSalaryGroup[0].basicSalary;
    } else if (strcmp(pegawai.kodeGolong,EmployeeSalaryGroup[1].codeGroup) == 0){
        salaryEmployee = EmployeeSalaryGroup[1].basicSalary;
    } else if (strcmp(pegawai.kodeGolong,EmployeeSalaryGroup[2].codeGroup) == 0){
        salaryEmployee = EmployeeSalaryGroup[2].basicSalary;
    }

    // response
    printf("=====================================");
    printf("\nNip = %d", pegawai.nip);
    printf("\nNama = %s", pegawai.nama);
    printf("\nAlamat = %s", pegawai.alamat);
    printf("\nNo HP = %d", pegawai.phoneNumber);
    printf("\nJabatan = %s", pegawai.jabtan);
    printf("\nGolongan = %s", pegawai.kodeGolong);
    printf("\nGaji = %d", salaryEmployee);
    printf("\n=====================================");

    return 0;
}

int inputanUserKedua(struct dataPegawai pegawai, struct salary EmployeeSalaryGroup[3]){

    // input nip
    printf("NIP = ");
    scanf("%d", &pegawai.nip);
    // input golongan
    printf("Golongan = ");
    scanf("%s", pegawai.kodeGolong);
    // input nip
    printf("Lembur = ");
    scanf("%d", &pegawai.lembur);

    int salaryEmployee = 0;
    // process calculate salary
    if (strcmp(pegawai.kodeGolong,EmployeeSalaryGroup[0].codeGroup) == 0){
        salaryEmployee = EmployeeSalaryGroup[0].basicSalary + ( EmployeeSalaryGroup[0].overtimePay * pegawai.lembur);
    } else if (strcmp(pegawai.kodeGolong,EmployeeSalaryGroup[1].codeGroup) == 0){
        salaryEmployee = EmployeeSalaryGroup[1].basicSalary + ( EmployeeSalaryGroup[1].overtimePay * pegawai.lembur);
    } else if (strcmp(pegawai.kodeGolong,EmployeeSalaryGroup[2].codeGroup) == 0){
        salaryEmployee = EmployeeSalaryGroup[2].basicSalary + ( EmployeeSalaryGroup[2].overtimePay * pegawai.lembur);
    }

    // response
    printf("=====================================");
    printf("\nNip = %d", pegawai.nip);
    printf("\nGolongan = %s", pegawai.kodeGolong);
    printf("\nTotal Gaji Bulanan = %d", salaryEmployee);
    printf("\n=====================================");

    return 0;
}

int main(){
    int nomorInputan = 0;

    struct dataPegawai pegawai;
    struct salary EmployeeSalaryGroup[3] = {{"D1", 2500000, 10000},
                                            {"D2", 2000000, 5000},
                                            {"D3", 1500000, 2500}};

    //menu
    printf("1. Masukan Nomor induk pegawai, nama pegawai, alamat, no_hp, Jabatan, Golongan\n");
    printf("2. Masukan induk pegawai, golongan, jumlah jam lembur\n");
    printf("Pilih inputan yang ingin dilakukan : ");
    scanf("%d", &nomorInputan);

    switch (nomorInputan) {
        case 1:
            inputanUserPertama(pegawai,EmployeeSalaryGroup);
            break;
        case 2:
            inputanUserKedua(pegawai,EmployeeSalaryGroup);
            break;
    }
    return 0;
}