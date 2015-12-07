#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define boyut 5

void gosterMatris(int [][boyut], int b [][boyut]);

void toplaMatris(int [][boyut], int b [][boyut]);

int main(){
	
	setlocale(LC_ALL, "Turkish"); // Türkçe karakterleri destekler.
	
	int a[boyut][boyut];
	int b[boyut][boyut];
	int rasSayi, i, j, negYap;
	
    srand(time(NULL));
	
	for( i = 0; i < boyut; i++ ){
         
         for( j = 0; j < boyut; j++ ){
              
            rasSayi = rand() % 11;
            
            negYap = rand() % 2;
              
            a[i][j] = rasSayi;
            
            if ( negYap == 0 ){
            
               a[i][j] = 0 - a[i][j];
                 
            }
            
            rasSayi = rand() % 11;
            
            b[i][j] = rasSayi;
 
         }
         
    }
	
	gosterMatris(a, b);
	
	toplaMatris(a, b);
	
	printf("\n\n"); system("pause");
	return 0;
	
}

void gosterMatris(int a[][boyut], int b[][boyut]){
     
    int i, j;
    
    printf("\n       A MATRİSİ \n\n");

    for( i = 0; i < boyut; i++ ){
         
         for( j = 0; j < boyut; j++ ){
             
            printf("%5d", a[i][j]);
 
         }
         
         printf("\n");
         
    }
    
    printf("\n\n       B MATRİSİ \n\n");

    for( i = 0; i < boyut; i++ ){
         
         for( j = 0; j < boyut; j++ ){
             
            printf("%5d", b[i][j]);
 
         }
         
         printf("\n");
         
    }    
     
}

void toplaMatris(int a[][boyut], int b[][boyut]){
     
    int i, j;
    
    printf("\n\n       TOPLAM MATRİSİ \n\n");

    for( i = 0; i < boyut; i++ ){
         
         for( j = 0; j < boyut; j++ ){
             
            printf("%5d", a[i][j] + b[i][j]);
 
         }
         
         printf("\n");
         
    }
     
}
