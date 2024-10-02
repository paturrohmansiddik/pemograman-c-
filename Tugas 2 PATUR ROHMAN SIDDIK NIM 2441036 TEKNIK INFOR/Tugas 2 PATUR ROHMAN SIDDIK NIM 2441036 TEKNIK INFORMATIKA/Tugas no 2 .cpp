#include <stdio.h>
#include <math.h>

int main() 
{
    // Deklarasi variabel
    float diameter, radius, volume;
    const float pi = 3.141592653589793;

    // Input diameter
    diameter = 15.0;

    // Menghitung radius
    radius = diameter / 2.0;

    // Menghitung volume bola (4/3 * pi * r^3)
    volume = (4.0 / 3.0) * pi * pow(radius, 3);

    // Menampilkan hasil
    printf("Volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", diameter, volume);

    return 0;
}