/* 
 * Klavyeden A ve B tamsayı değişkenlerinde tutulan iki sayı giriliyor. A ve B
 * değişkenlerinin değerlerini kendi arasında yer değiştirerek ekrana yazdıran
 * programı C dili ile yazınız.
 * 
 * $ gcc 2.c -o 2
 * $ ./2
 *
 * A'yı Giriniz: 5
 * B'yi Giriniz: 7
 * Yeni A Değeri: 7
 * Yeni B Değeri: 5
 */

 #include <stdio.h>

int main(int argc, char** argv) {
    int A, B;

    printf("A'yı Giriniz: ");
    scanf("%d", &A);

    printf("B'yi Giriniz: ");
    scanf("%d", &B);

    int swapTemp = B;
    B = A;
    A = swapTemp;

    printf("Yeni A Değeri: %d\n", A);
    printf("Yeni B Değeri: %d\n", B);

    return 0;
}
