/* 
 * Klavyeden bir dairenin yarıçap bilgisi ve işlem türü girildiğinde işlem türü 1
 * ise dairenin çevresini hesaplanıp yazdıran 2 girilirse alanının hesaplayıp
 * yazdıran, bunların dışındaki girişler için “Yanlış giriş” mesajı vererek sonlanan
 * programı C dili ile yazınız.
 * 
 * $ gcc 4.c -o 4
 * $ ./4
 *
 * Kullanılabilir İşlemler:
 *        [1] Dairenin Çevresini Hesapla
 *        [2] Diarenin Alanını Hesapla
 * Önce işlemi sonra bir boşluk bırakarak yarı çapı giriniz: 3 5
 * Yanlış giriş
 * 
 * Kullanılabilir İşlemler:
 *         [1] Dairenin Çevresini Hesapla
 *         [2] Diarenin Alanını Hesapla
 * Önce işlemi sonra bir boşluk bırakarak yarı çapı giriniz: 1 5
 * Yarı çapı 5 olan dairenin çevresi: 31.42
 */

 #include <stdio.h>

int main(int argc, char** argv) {
    float PI = 3.14159265359;
    int choice, radius;

    SELECTION:

    printf("Kullanılabilir İşlemler:\n");
    printf("\t[1] Dairenin Çevresini Hesapla\n");
    printf("\t[2] Diarenin Alanını Hesapla\n");
    printf("Önce işlemi sonra bir boşluk bırakarak yarı çapı giriniz: ");
    scanf("%d %d", &choice, &radius);
    
    if ( choice == 1 ) printf("Yarı çapı %d olan dairenin çevresi: %.2f\n", radius, 2 * radius * PI);
    else if ( choice == 2 ) printf("Yarı çapı %d olan dairenin alanı: %.2f\n", radius, PI * radius * radius);
    else {
        printf("Yanlış giriş\n\n");
        goto SELECTION;
    }

    return 0;
}
