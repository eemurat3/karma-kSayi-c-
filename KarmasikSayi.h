#ifndef KARMASIKSAYI_H
#define KARMASIKSAYI_H

/*bu class karmaþýk bir sayýnýn deðerini deðiþtirmek,
karmaþýk sayýnýn reel vaya sadece sanal kýsmýný deðiþtirmek,
karmaþýk sayýnýn sadece reel kýsýmdanmý yoksa sanal kýsmýnýn da
olup olmadýðýný sorgulamak için yazýlmýþtýr
murat Kaymaz 161201007
05.10.2018 21:30*/
class KarmasikSayi
{
	public:
		KarmasikSayi(double reel,double sanal);
		void setYaz(double reelkisim,double imajiner);
		void setAtaReel(double reell);
		void setAtaSanal(double imajiner);
		double getGosterReel();
		double getGosterSanal();
		int negatifmi();
		int reelmi();
		void ekranabastir();
		double uzunluk();
	private:
		double reel;
		double  sanal;
		
		
};

#endif

