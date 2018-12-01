/*bu k�s�mda ise KarmasikSayi.h  dosyas�nda tan�mlad���m�z 
fonksiyonlar� ne i� yapacaklar�n� i�lerine yazd�k  ve 
KarmasikSayi.h dosyas�n� buraya ekledik*/
#include "KarmasikSayi.h"
#include <iostream>
#include <math.h>
using namespace std;

//yap�c� fonksiyonumuz iki tane double deger ile �al���r
KarmasikSayi::KarmasikSayi(double reell,double sanal)
{
	setAtaReel(reell);//constructor'a reel de�erini atamak i�in �a��rd�k
	setAtaSanal(sanal);//constructor'a sanal de�erini atamak i�in �a��rd�k
	
}


void KarmasikSayi::setYaz(double reelkisim,double imajiner)//karma��k say�ya degerler atar
{
    reel=reelkisim;//reel k�sma de�er atar
    sanal=imajiner;//sanal k�sma de�er atar
}

void KarmasikSayi::setAtaReel(double reell)//karma��k say�n�n reel k�sm�n� de�i�tirir
{
	reel=reell;
}
	
void KarmasikSayi::setAtaSanal(double imajiner)//karma��k say�n�n sanal k�sm�n� de�i�tirir
{
	sanal=imajiner;
}

/*say�n�n reel olup olmad���n� sorgular reelse 1 de�ilse 0 dondurur*/
int KarmasikSayi::reelmi()
{
	if(reel != 0  && sanal==0)
		return 1;
	else
		return 0;
}

//karma��k say�n�n orjine olan uzakl���n� bulur
double KarmasikSayi::uzunluk()
{
	double a=getGosterReel();
    double b=getGosterSanal();
	return sqrt(pow(a,2)+pow(b,2));//karma��k say�n�n uzunlugunu dondurur
}

double KarmasikSayi::getGosterReel()
	{
	return reel;//karma��k say�n�n reel k�sm�n� d�nd�r�r
	}
	
	
double KarmasikSayi::getGosterSanal()
	{
	return sanal;//karma��k say�n�n sanal k�sm�n� d�nd�r�r
	}

/*say�n�n negatif durumunu sorgulama donen deger -1 ise sayi negatif,
1 ise sayi pozitif,0 ise tan�ms�z*/
int KarmasikSayi::negatifmi()
{
	if(reel < 0 && sanal == 0)
		return -1;
	else if(reel>0 && sanal == 0 )
		return 1;
	else
		return 0;
	
}	
/*karma��k say�y�n�n sanal ve reel k�sm�n� birlikte ekrana basar*/
void KarmasikSayi::ekranabastir()
{
	//cout<<"girdiginiz sayi:>";
	if(KarmasikSayi::sanal < 0)
		cout<<reel<<" + ("<<sanal<<")i\n";
	else
		cout<<getGosterReel()<<"+"<<getGosterSanal()<<"i\n";
	cout<<"****----****----****----****\n\n";
}

