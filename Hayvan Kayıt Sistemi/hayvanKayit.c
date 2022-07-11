#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct kayit{
	char ad[20];
	char cins[20];
	int yas;
	char sahip[20];
	int kayitnum;
	struct kayit *sonraki, *onceki;
};

struct kayit *ilk, *son, *gecici;

void ekle(){
	printf("Hayvanin ismini giriniz:");
	if(ilk==NULL){
		ilk = malloc(sizeof(struct kayit));
		fflush(stdin);	scanf("%s",ilk->ad);
		ilk->sonraki = NULL;
		ilk->onceki = NULL;
		son = ilk;
	}

	else if (son == ilk){
		son = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%s",son->ad);
		ilk->sonraki = son;
		son->sonraki = NULL;
		son->onceki = ilk;
	}

	else{
		gecici = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%s",gecici->ad);
		son->sonraki = gecici;
		gecici->onceki = son;
		son = gecici;
		son->sonraki = NULL;

	}
	printf("Hayvanin cinsini giriniz:");
	if(ilk==NULL){
		ilk = malloc(sizeof(struct kayit));
		fflush(stdin);	scanf("%s",ilk->cins);
		ilk->sonraki = NULL;
		ilk->onceki = NULL;
		son = ilk;
	}

	else if (son == ilk){
		son = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%s",son->cins);
		ilk->sonraki = son;
		son->sonraki = NULL;
		son->onceki = ilk;
	}

	else{
		gecici = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%s",gecici->cins);
		son->sonraki = gecici;
		gecici->onceki = son;
		son = gecici;
		son->sonraki = NULL;

	}
	printf("Hayvanin yasini giriniz:");
	if(ilk==NULL){
		ilk = malloc(sizeof(struct kayit));
		fflush(stdin);	scanf("%d",&ilk->yas);
		ilk->sonraki = NULL;
		ilk->onceki = NULL;
		son = ilk;
	}

	else if (son == ilk){
		son = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%d",&son->yas);
		ilk->sonraki = son;
		son->sonraki = NULL;
		son->onceki = ilk;
	}

	else{
		gecici = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%d",&gecici->yas);
		son->sonraki = gecici;
		gecici->onceki = son;
		son = gecici;
		son->sonraki = NULL;
	}
	printf("Hayvanin sahibini giriniz:");
	if(ilk==NULL){
		ilk = malloc(sizeof(struct kayit));
		fflush(stdin);	scanf("%s",ilk->sahip);
		ilk->sonraki = NULL;
		ilk->onceki = NULL;
		son = ilk;
	}

	else if (son == ilk){
		son = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%s",son->sahip);
		ilk->sonraki = son;
		son->sonraki = NULL;
		son->onceki = ilk;
	}

	else{
		gecici = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%s",gecici->sahip);
		son->sonraki = gecici;
		gecici->onceki = son;
		son = gecici;
		son->sonraki = NULL;

	}
	printf("Kayit numarasini giriniz:");
	if(ilk==NULL){
		ilk = malloc(sizeof(struct kayit));
		fflush(stdin);	scanf("%d",&ilk->kayitnum);
		ilk->sonraki = NULL;
		ilk->onceki = NULL;
		son = ilk;
	}

	else if (son == ilk){
		son = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%d",&son->kayitnum);
		ilk->sonraki = son;
		son->sonraki = NULL;
		son->onceki = ilk;
	}

	else{
		gecici = malloc(sizeof(struct kayit));
		fflush(stdin); scanf("%d",&gecici->kayitnum);
		son->sonraki = gecici;
		gecici->onceki = son;
		son = gecici;
		son->sonraki = NULL;

	}


}
void ara(){
	int aranan_kayitnum;
	printf("Guncellenecek Hayvanin Kayit Numarasi:");
	fflush(stdin);	scanf("%d",&aranan_kayitnum);
	gecici = ilk;
	while(gecici->kayitnum!=aranan_kayitnum){
		gecici = gecici->sonraki;
	}
}

void sahip_ara(){
	char aranan_sahip[20];
	printf("Sahibin Adi:");
	fflush(stdin);	scanf("%s",aranan_sahip);
	gecici = ilk;
	while(strcmp(gecici->sahip,aranan_sahip)){
		gecici = gecici->sonraki;
	}
	printf("\nKayit Bulundu!\n");
    printf("Hayvanin adi:%s\n", gecici->ad);
    printf("Hayvanin cinsi:%s\n", gecici->cins);
    printf("Hayvanin sahibi:%s\n", gecici->sahip);
    printf("Hayvanin yasi:%d\n", gecici->yas);
    printf("Hayvanin kayit numarasi:%d\n", gecici->kayitnum);

}

void guncelle(void){
	ara();
	printf("\nGuncel Liste\n\n");
	fflush(stdin);
	printf("Hayvanin yeni ismini girin:");	scanf("%s",gecici->ad);
	printf("Hayvanin yeni cinsini girin:");	scanf("%s",gecici->cins);
	printf("Hayvanin yeni yasini girin:");	scanf("%d",&gecici->yas);
	printf("Hayvanin yeni sahibini girin:");	fflush(stdin);	scanf("%s",ilk->sahip);
	printf("Hayvanin yeni kayit numarasini girin:");	scanf("%d",&gecici->kayitnum);


}

void listele(){

gecici = son;

printf("\nHayvan Listesi\n\n");

while(gecici != NULL){

printf("Hayvanin adi:%s\n", gecici->ad);
printf("Hayvanin cinsi:%s\n", gecici->cins);
printf("Hayvanin sahibi:%s\n", gecici->sahip);
printf("Hayvanin yasi:%d\n", gecici->yas);
printf("Hayvanin kayit numarasi:%d\n", gecici->kayitnum);

gecici = gecici->sonraki;
}
}

int main(){
	int secim, sayi,i;
	while(1){
	printf("\n*****SECENEKLER*****\n\n1.Hayvan Kaydet\n2.Bilgileri Guncelle\n3.Hayvanlari listele\n4.Sahibine Gore Hayvani Bul\n5.Cikis\n\n");
	printf("Seciminizi yapin:");	scanf("%d",&secim);
	switch(secim){
		case 1:
			printf("Kayit edilecek hayvan sayisini giriniz:"); scanf("%d",&sayi);
			for(i=1;i<=sayi;i++){
			printf("\n");	ekle();}
			printf("\nKayit Basarili!\n");
			break;
		case 2:
			guncelle();
			break;
		case 3:
            for(i=1;i<=sayi;i++){
			listele();}
			break;
		case 4:
			sahip_ara();
			break;
        case 5:
            printf("Program Bitti!\n");
            exit(0);
            break;
        default:
            printf("Hatali secim!");
	}
}
	return 0;
}
