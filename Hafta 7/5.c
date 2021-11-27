/* 
 * Klavyeden girilen bir para miktarını en az banknot kullanarak oluşturmak
 * istediğimizde içinde kaç tane 100, 50, 20 ve 10’luk olduğunu bulan programı C
 * dili ile yazınız. Not: Klavyeden girilen para miktarı 10’un katları olmalıdır.
 * 
 * $ gcc 5.c -o 5
 * $ ./5
 *
 * Çekmek istediğiniz miktar: 580
 * 5 Adet 100'lük Banknot | 1 Adet 50'lik Banknot | 1 Adet 20'lik Banknot | 1 Adet 10'luk Banknot
 * Şeklinde 580 TL tarafınıza aktarılmıştır.
 */

 #include <stdio.h>

int main(int argc, char** argv) {
    int amount, temp;

    printf("Çekmek istediğiniz miktar: ");
    scanf("%d", &amount);

    temp = amount;

    if ( temp >= 100 ) {
        printf("%d Adet 100'lük Banknot", temp / 100);
        temp = temp % 100;
    }

    if ( temp >= 50 ) {
        printf(" | %d Adet 50'lik Banknot", temp / 50);
        temp = temp % 50;
    }

    if ( temp >= 20 ) {
        printf(" | %d Adet 20'lik Banknot", temp / 20);
        temp = temp % 20;
    }

    if ( temp >= 10 ) {
        printf(" | %d Adet 10'luk Banknot", temp / 10);
        temp = temp % 10;
    }

    printf("\n");

    printf("Şeklinde %d TL tarafınıza aktarılmıştır.\n", amount);


    return 0;
}
