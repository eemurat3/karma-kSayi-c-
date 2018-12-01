#ifndef KARMASIKSAYI_H
#define KARMASIKSAYI_H

/*bu class karma��k bir say�n�n de�erini de�i�tirmek,
karma��k say�n�n reel vaya sadece sanal k�sm�n� de�i�tirmek,
karma��k say�n�n sadece reel k�s�mdanm� yoksa sanal k�sm�n�n da
olup olmad���n� sorgulamak i�in yaz�lm��t�r
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

