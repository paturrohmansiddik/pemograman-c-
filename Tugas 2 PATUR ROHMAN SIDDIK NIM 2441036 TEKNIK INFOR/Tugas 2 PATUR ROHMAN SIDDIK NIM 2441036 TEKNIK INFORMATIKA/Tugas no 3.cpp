#include <stdio.h>
#include <math.h>

int main() {
    float alas = 4.0, tinggi = 5.0, sisiMiring;

    sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));


    printf("Panjang sisi miring segitiga adalah: %.2f cm\n", sisiMiring);

    return 0;
}