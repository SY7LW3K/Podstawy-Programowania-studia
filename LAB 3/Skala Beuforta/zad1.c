#include <stdio.h>

int main(void){
    int knots;
    printf("podaj liczbe wezlow\n");
    scanf("%d", &knots);
    if(knots < 0){
        printf("predkosc nie moze byc ujemna\n");
        return 1;
    }
    else if (knots == 0){
        printf("Predkosc %d, Skala Befourta: 0, nazwa: calm\n", knots);    
    }
    else if(knots <= 3){
        printf("Predkosc: %d, Skala Befourta: 1, nazwa: light air\n", knots);
    }
    else if(knots <= 6){
        printf("Predkosc: %d, Skala Befourta: 2, nazwa: light breeze\n", knots);
    }
    else if(knots <= 10){
        printf("Predkosc: %d, Skala Befourta: 3, nazwa: gentle breeze\n", knots);
    }
    else if(knots <= 16){
        printf("Predkosc: %d, Skala Befourta: 4, nazwa: moderate breeze\n", knots);
    }
    else if(knots <= 21){
        printf("Predkosc: %d, Skala Befourta: 5, nazwa: fresh breeze\n", knots);
    }
    else if(knots <=27){
        printf("Predkosc: %d, Skala Befourta: 6, nazwa: strong breeze\n", knots);
    }
    else if(knots <= 33){
        printf("Predkosc: %d, Skala Befourta: 7, nazwa: near gale\n", knots);
    }
    else if(knots <= 40){
        printf("Predkosc: %d, Skala Befourta: 8, nazwa: gale\n", knots);
    }
    else if(knots <= 47){
        printf("Predkosc: %d, Skala Befourta: 9, nazwa: gale\n", knots);
    }
    else if(knots <= 55){
         printf("Predkosc: %d, Skala Befourta: 10, nazwa: strong gale\n", knots);
    }
    else if(knots <= 63){
        printf("Predkosc: %d, Skala Befourta: 11, nazwa: violent storm\n", knots);
    }
    else {
         printf("Predkosc: %d, Skala Befourta: 12, nazwa: hurricane\n", knots); 
}
return 0;
}