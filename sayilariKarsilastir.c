#include<stdio.h>

int main(){
	int yunus[10],emre[10],topcu[10] = {0},i,j,gecici,toplam=0,a=0,b=0,c=0;
	float dizi_ort1, dizi_ort11, dizi_ort12;
	
	for(i=0;i<=9;i++){  // birinci dizi i�in kullan�c�dan 10 tane say� al�yoruz.
		printf("Ilk dizi icin %d. Sayiyi Giriniz:",i+1);
		scanf("%d",&yunus[i]);
	}
	printf("\n");
	for(i=0;i<=9;i++){ // ikinci dizi i�in kullan�c�dan 10 tane say� al�yoruz.
		printf("Ikinci dizi icin %d. Sayiyi Giriniz:",i+1);
		scanf("%d",&emre[i]);
	}

	for(i=0;i<=9;i++){ // ortak elemanlar� 3. dizimize eklemek i�in for d�ng�s� ba�lat�yoruz.
		for(j=0;j<=9;j++){ // ortak elemanlar� kontrol etmemiz i�in i� i�e d�ng� yazmam�z gerekiyor.
			if(yunus[i]==emre[j]){ // ortak eleman var m� diye kontrol ediyoruz.
				topcu[a] = emre[j]; // ortak elemanlar� 3. dizimizin i�ine at�yoruz.
				a++;
			}
		}
	}
	 for(i=0; i<9;i++){ 
        for(j=i+1; j<10; j++){
            if(topcu[i] < topcu[j]){
                gecici = topcu[i]; // topcu[i] yi kaybetmemek i�in gecicide tutuyoruz
                topcu[i] = topcu[j]; //topcu[i] yi topcu[i] den daha k���k olan topcu[j] kaydediyoruz
                topcu[j] = gecici;
            }}}
// Ortak elemanlar� bar�nd�ran topcu dizimizi b�y�kten k����e s�ralad�k
	printf("\nOrtak Elemanlar:");
      for(i=0;i<a;i++){
   printf("%d ",topcu[i]);} // Burada da topcu dizisini ekrana yazd�r�yoruz.
	
     printf("\n\n");
	
	for(i=0;i<=9;i++) {	
		  	toplam = toplam+yunus[i]; // dizinin ortalamas�n� bulmak i�in toplam diye bir de�i�kenin i�ine dizideki elemanlar�n toplam�n� koyuyoruz.
		  }
		  dizi_ort1 = (float)toplam/10.0; // 10 eleman oldu�u i�in 1o'a b�l�yoruz.
		  printf("1. Dizinin Ortalamasi:%.2f\n",dizi_ort1); // Dizinin ortalamas�n� yazd�r�yoruz.
		  toplam = 0; // toplam� tekrar s�f�ra e�itliyoruz.
	// Ayn� i�lemleri di�er diziler i�in de yap�yoruz.
	for(i=0;i<=9;i++) {	
		  	toplam = toplam+emre[i];
		  }
		  dizi_ort11 = (float)toplam/10.0;
		  printf("2. Dizinin Ortalamasi:%.2f\n",dizi_ort11);
		  toplam = 0;
		  
	for(i=0;i<a;i++) {	
		  	toplam = toplam+topcu[i];
			  }
		  dizi_ort12 = (float)toplam/a;
		  printf("3. Dizinin Ortalamasi:%.2f\n",(dizi_ort12));
		  
		  printf("3. Dizideki Cift Sayilar:");	//Dizideki �ift say�lar� bulmak i�in for d�ng�s� ba�lat�yoruz
		  for(i=0;i<a;i++){						
			if(topcu[i] % 2 == 0){				//E�er 2 ye b�l�nd���nde kalan 0 ise alttakileri yap diyoruz.
			printf("%d ",topcu[i]);				//Yazd�r�yoruz.
			b++;}}								//Adedi yazd�rmak i�in saya� kullan�yoruz.
			  printf("\nCift sayilarin adedi:%d",b);  	//Adedi yazd�r�yoruz.
		
		 printf("\n3. Dizideki Tek Sayilar:");	//�ift say�lar i�in yapt���m�z� tek say�lar i�in de yap�yoruz.
		  for(i=0;i<=9;i++){
			if(topcu[i] % 2 == 1){
			printf("%d ",topcu[i]);
			c++;}}
		printf("\nTek sayilarin adedi:%d",c);
		}
		  

		  

