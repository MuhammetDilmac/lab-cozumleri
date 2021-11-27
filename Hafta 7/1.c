/* 
 * 1- Klavyeden girilen iki sayının toplamını hesaplayıp ekrana yazdıran programı C
 * dili ile yazınız.
 * 
 * $ gcc 1.c -o 1
 * $ ./1
 *
 * 1. Sayıyı Giriniz: 5
 * 2. Sayıyı Giriniz: 7
 * 5 + 7 = 12
 */

#include <stdio.h>

int main(int argc, char** argv) {
    int firstNumber, secondNumber;

    printf("1. Sayıyı Giriniz: ");
    scanf("%d", &firstNumber);

    printf("2. Sayıyı Giriniz: ");
    scanf("%d", &secondNumber);

    printf("%d + %d = %d\n", firstNumber, secondNumber, firstNumber + secondNumber);

    return 0;
}
