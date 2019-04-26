// Program Operasi dasar aritmatika
#include <stdio.h>

int main(void)
{
  int ayam = 15;
  int bebek = 12;
  int jumlah_ternak = 0;

  int ayam_mati = 2;
  ayam = ayam - ayam_mati;
  jumlah_ternak = ayam + bebek;
  printf("\nSisa hewan ternak saya %d ekor. Ada %d ekor ayam yang mati",jumlah_ternak, ayam_mati);

  ayam_mati = 7;
  ayam = ayam - ayam_mati;
  jumlah_ternak = ayam + bebek;
  printf("\nSisa hewan ternak saya %d ekor.  Ada %d ekor ayam yang mati\n", jumlah_ternak, ayam_mati);
  printf("\nTotal ayam = %d dikali bebek = %d adalah %d ekor.", ayam, bebek, ayam*bebek);
  int ayam_kali_bebek = ayam*bebek;
  printf("\nTotal ayam = %d dikali bebek = %d adalah %d ekor.\n", ayam, bebek, ayam_kali_bebek);


  int sangkar = 3;
  printf("\nJumlah ternak %d ekor. Kapasitas sangkar %d ekor.", jumlah_ternak,sangkar);
  printf("\nTotal sangkar yang diperlukan %d ekor.", jumlah_ternak/sangkar);
  int jumlah_sangkar = jumlah_ternak/sangkar;
  printf("\nTotal sangkar yang diperlukan %d ekor.\n", jumlah_sangkar);


  int sisa_bagi, bil_1, bil_2;
  bil_1 = 5;
  bil_2 = 2;
  sisa_bagi = bil_1 % bil_2;
  printf("\nSisa bagi antara %d dengan %d adalah %d \n",bil_1,bil_2,sisa_bagi);
  return 0;
}
