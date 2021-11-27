/* 
 * Klavyeden bir öğrenci için öğrenci no, vize ve final girildiğinde, öğrencinin
 * vize notunun %40’ı ve final notunun %60’ı alarak geçme notunu hesaplayan ve
 * öğrencinin numarası ile birlikte ekrana sonucu yazdıran programı C dili ile
 * yazınız.
 * 
 * $ gcc 3.c -o 3
 * $ ./3
 *
 * Öğrenci Numaranızı Giriniz: 2012
 * Vize Notunuz: 40
 * Final Notunuz: 50
 * Öğrenci Numarası:   2012 | Vize Notu:  40 | Final Notu:  50 | Geçme Notu: 46.0
 */

 #include <stdio.h>

int main(int argc, char** argv) {
    int studentNumber, midTermExam, finalExam;

    printf("Öğrenci Numaranızı Giriniz: ");
    scanf("%d", &studentNumber);

    printf("Vize Notunuz: ");
    scanf("%d", &midTermExam);

    printf("Final Notunuz: ");
    scanf("%d", &finalExam);

    printf("Öğrenci Numarası: %6d | Vize Notu: %3d | Final Notu: %3d | Geçme Notu: %3.1f\n", studentNumber, midTermExam, finalExam, midTermExam * 0.4 + finalExam * 0.6);


    return 0;
}
