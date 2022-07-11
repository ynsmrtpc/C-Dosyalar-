#include<stdio.h>

int N;	// Hem main içinde hem de fonksiyon içinde kullanacaðýmýz için global bir deðiþken atadýk.

int yazdir(int N){		// yazdir isimli fonksiyonunumuzu oluþturduk.

	if(N>0){		   // 1'den n'e kadar yazdýrmak istediðimiz için n>0 olana kadar þartýný koþtuk 
		yazdir(N-1);	// n, sýfýrdan büyük olana kadar birer birer azaltmayý rekursive olarak gerçekleþtirdik.
		printf("%d ",N);	// Ekrana bastýk
	}
}

int main(){			
	
	printf("Kaca kadar ekrana yazdiracaginizi girin:");	// n sayýsýný kullanýcýdan aldýk
	scanf("%d",&N);
	
	yazdir(N);	// fonksiyonumuzu çaðýrdýk
}

/*
Eðer iteratif þekilde yapmýþ olsaydýk þu þekilde yapardýk
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
þeklinde yazardýk.

Kodunumuzu iteratif olmayan þekilde yazmak bize daha sonra baþka yerlerde kullanabileceðimiz bir fonksiyon oluþturmamýzý saðladý.
Bizi iþlem kalabalýðýndan kurtardý. Ýteratif yolla yaptýðýmýzda ilk önce kullanýcýdan bir sayý aldýk bu sayý n sayýsý yani bize ekrana
yazdýrmanýn ne zaman biteceðini söyleyen sayý. Daha sonra bu sayýyý for döngüsü içine soktuk ve i deðerini her adýmda bir arttýrdýk ve 
sayýlarý tek tek ekrana yazdýrdýk. En son i, n'den küçük olunca da döngü durdu. iteratif olmayan yolla yaptýðýmýzda rekursive bir fonksiyon
kullanýyoruz. main fonksiyonunun içinde kullanýcýdan sayýyý kaça kadar yazdýracaðýmýzý alýyoruz öncelikle. Daha sonra fonksiyonumuzu çaðýrýyoruz
ve içine kullanýcýdan aldýðýmýz sayýyý yolluyoruz. Fonksiyonun içine gelecek olursak, fonksiyonda önce if kullanarak bir koþul belirttik. n, sýfýrdan
küçük olana kadar aþaðýdaki iþlemleri yap dedik. Bir sonraki adýmda yazdir fonksiyonunun içinden tekrar yazdir fonksiyonunu çaðýrdýk ve bu kez
(n-1)'i fonksiyonun içine yolladýk bu þekilde n'i sürekli azaltmýþ olduk. En sonda da n'i sýrayla ekrana yazdýrdýk.

*/
