#include <stdio.h>

int main(void){
    float m, kg, bmi;
    printf("podaj wzrost w metrach i wage w kilogramach\n");
    scanf("%f %f", &m, &kg);
    if(m <= 0 || kg <= 0){
        printf("waga i wzrost nie moze byc ujemna lub równa 0\n");
        return 1;
    }
    else {
        bmi = kg / (m * m);
        if(bmi <= 18.5){
            printf("twoje bmi %.1f, jestes w niedowadze\n", bmi);
        }
        else if(bmi <= 25){
            printf("twoje bmi %.1f, twoja waga jest w normie\n", bmi);
        }
        else if(bmi <= 30){
            printf("twoje bmi %.1f, jestes w nadwadze\n", bmi);
        }
        else {
            printf("twoje bmi %.1f, jestes otyly\n", bmi);
        }
    }   
    return 0;    
}