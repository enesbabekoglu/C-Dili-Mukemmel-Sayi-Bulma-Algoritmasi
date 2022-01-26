/******************************************************************************

MÜKEMMEL SAYI NEDİR?

Kendisi hariç bütün pozitif tamsayı çarpanları toplamı kendisine eşit olan sayılara
mükemmel sayı denir. 

Örnek: 6 sayısının kendisi hariç pozitif çarpanları toplamı
1+2+3 = 6 olduğundan 6 sayısı mükemmel bir sayı olarak kabul edilir.

>> Test İçin Örnek Mükemmel Sayılar: {6, 28, 496, 8128, 33550336}

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){

  int girilenSayi, toplam = 0;

  for(;;){

    printf("Sayi Girin: ");
    scanf("%d", &girilenSayi);

    printf("Girilen Sayi: %d\n\n", girilenSayi);

    int i = 1;
    while(i<girilenSayi){

      if(girilenSayi%i == 0){
        toplam += i;
      }

      i++;
    }

    if(toplam == girilenSayi){
      printf("%d Mukemmel sayidir.\n\n", girilenSayi);
    }else{
      printf("%d Mukemmel sayi degildir.\n\n", girilenSayi);
    }

    toplam = 0; // Burada toplam değerini bir sonraki sorgu için sıfırlıyoruz.

  }

  return 0;

}
