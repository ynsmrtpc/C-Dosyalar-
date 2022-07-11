#include<stdio.h>

int N;	// Hem main i�inde hem de fonksiyon i�inde kullanaca��m�z i�in global bir de�i�ken atad�k.

int yazdir(int N){		// yazdir isimli fonksiyonunumuzu olu�turduk.

	if(N>0){		   // 1'den n'e kadar yazd�rmak istedi�imiz i�in n>0 olana kadar �art�n� ko�tuk 
		yazdir(N-1);	// n, s�f�rdan b�y�k olana kadar birer birer azaltmay� rekursive olarak ger�ekle�tirdik.
		printf("%d ",N);	// Ekrana bast�k
	}
}

int main(){			
	
	printf("Kaca kadar ekrana yazdiracaginizi girin:");	// n say�s�n� kullan�c�dan ald�k
	scanf("%d",&N);
	
	yazdir(N);	// fonksiyonumuzu �a��rd�k
}

/*
E�er iteratif �ekilde yapm�� olsayd�k �u �ekilde yapard�k
----------------------------------------- 
|	#include<stdio.h>					|
|										|
|	int main(){							|
|										|
|		int i,n;						|
|										|
|		printf("Sayi girin:");			|
|		scanf("%d",&n);					|
|										|
|		for(i=0;i<n;i++){				|
|		printf("%d",i);					|
|		}								|
| 	}									|
-----------------------------------------	
�eklinde yazard�k.

Kodunumuzu iteratif olmayan �ekilde yazmak bize daha sonra ba�ka yerlerde kullanabilece�imiz bir fonksiyon olu�turmam�z� sa�lad�.
Bizi i�lem kalabal���ndan kurtard�. �teratif yolla yapt���m�zda ilk �nce kullan�c�dan bir say� ald�k bu say� n say�s� yani bize ekrana
yazd�rman�n ne zaman bitece�ini s�yleyen say�. Daha sonra bu say�y� for d�ng�s� i�ine soktuk ve i de�erini her ad�mda bir artt�rd�k ve 
say�lar� tek tek ekrana yazd�rd�k. En son i, n'den k���k olunca da d�ng� durdu. iteratif olmayan yolla yapt���m�zda rekursive bir fonksiyon
kullan�yoruz. main fonksiyonunun i�inde kullan�c�dan say�y� ka�a kadar yazd�raca��m�z� al�yoruz �ncelikle. Daha sonra fonksiyonumuzu �a��r�yoruz
ve i�ine kullan�c�dan ald���m�z say�y� yolluyoruz. Fonksiyonun i�ine gelecek olursak, fonksiyonda �nce if kullanarak bir ko�ul belirttik. n, s�f�rdan
k���k olana kadar a�a��daki i�lemleri yap dedik. Bir sonraki ad�mda yazdir fonksiyonunun i�inden tekrar yazdir fonksiyonunu �a��rd�k ve bu kez
(n-1)'i fonksiyonun i�ine yollad�k bu �ekilde n'i s�rekli azaltm�� olduk. En sonda da n'i s�rayla ekrana yazd�rd�k.

*/
