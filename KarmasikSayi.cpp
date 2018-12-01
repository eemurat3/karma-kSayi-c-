/*bu kýsýmda ise KarmasikSayi.h  dosyasýnda tanýmladýðýmýz 
fonksiyonlarý ne iþ yapacaklarýný içlerine yazdýk  ve 
KarmasikSayi.h dosyasýný buraya ekledik*/
#include "KarmasikSayi.h"
#include <iostream>
#include <math.h>
using namespace std;

//yapýcý fonksiyonumuz iki tane double deger ile çalýþýr
KarmasikSayi::KarmasikSayi(double reell,double sanal)
{
	setAtaReel(reell);//constructor'a reel deðerini atamak için çaðýrdýk
	setAtaSanal(sanal);//constructor'a sanal deðerini atamak için çaðýrdýk
	
}


void KarmasikSayi::setYaz(double reelkisim,double imajiner)//karmaþýk sayýya degerler atar
{
    reel=reelkisim;//reel kýsma deðer atar
    sanal=imajiner;//sanal kýsma deðer atar
}

void KarmasikSayi::setAtaReel(double reell)//karmaþýk sayýnýn reel kýsmýný deðiþtirir
{
	reel=reell;
}
	
void KarmasikSayi::setAtaSanal(double imajiner)//karmaþýk sayýnýn sanal kýsmýný deðiþtirir
{
	sanal=imajiner;
}

/*sayýnýn reel olup olmadýðýný sorgular reelse 1 deðilse 0 dondurur*/
int KarmasikSayi::reelmi()
{
	if(reel != 0  && sanal==0)
		return 1;
	else
		return 0;
}

//karmaþýk sayýnýn orjine olan uzaklýðýný bulur
double KarmasikSayi::uzunluk()
{
	double a=getGosterReel();
    double b=getGosterSanal();
	return sqrt(pow(a,2)+pow(b,2));//karmaþýk sayýnýn uzunlugunu dondurur
}

double KarmasikSayi::getGosterReel()
	{
	return reel;//karmaþýk sayýnýn reel kýsmýný döndürür
	}
	
	
double KarmasikSayi::getGosterSanal()
	{
	return sanal;//karmaþýk sayýnýn sanal kýsmýný döndürür
	}

/*sayýnýn negatif durumunu sorgulama donen deger -1 ise sayi negatif,
1 ise sayi pozitif,0 ise tanýmsýz*/
int KarmasikSayi::negatifmi()
{
	if(reel < 0 && sanal == 0)
		return -1;
	else if(reel>0 && sanal == 0 )
		return 1;
	else
		return 0;
	
}	
/*karmaþýk sayýyýnýn sanal ve reel kýsmýný birlikte ekrana basar*/
void KarmasikSayi::ekranabastir()
{
	//cout<<"girdiginiz sayi:>";
	if(KarmasikSayi::sanal < 0)
		cout<<reel<<" + ("<<sanal<<")i\n";
	else
		cout<<getGosterReel()<<"+"<<getGosterSanal()<<"i\n";
	cout<<"****----****----****----****\n\n";
}

