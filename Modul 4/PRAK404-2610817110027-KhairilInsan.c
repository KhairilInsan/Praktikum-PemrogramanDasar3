#include <stdio.h>

int main()
{
    int command = 0;
    float a, b, hasil;

    printf("Pilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Keluar\n");

    while (command != 5)
    {
        printf("Masukkan Pilihan: ");
        scanf("%d", &command);

        if (command == 1)
        {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
            hasil = a + b;
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
        }
        else if (command == 2)
        {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
            hasil = a - b;
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
        }
        else if (command == 3)
        {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
            hasil = a * b;
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
        }
        else if (command == 4)
        {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
            hasil = a / b;
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
        }
        else if (command == 5)
        {
            printf("Terimakasih, telah menggunakan kalkulator KHAIRIL INSAN\n");
        }
        else
        {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }

    return 0;
}
