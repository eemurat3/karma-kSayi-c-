#include <iostream>
#include "KarmasikSayi.h"


using namespace std;
/*yazdýðýmýz header dosyasýný ve cpp dosyasýndaki kodlarýn
nasýl çalýþtýðýný test ediyoruz aþaðýda*/

/*k1,k2,k3,k4,k5,k6,k7,k8 nesnelerini karmasiksayi sýnýfýndan turettik
ve default constructor olmamasý için tanýmladýðýz nesnelere
ilk deðerleri constructor ile birlikte atadýk ve daha sonra classtaki 
metodlarý kullanarak sayýlar uzerinde deðiþiklikler yaptýk*/
int main() 
{
	KarmasikSayi k1(3,5);
	KarmasikSayi k2(2,3);
	KarmasikSayi k3(2,0);
	KarmasikSayi k4(0,1);
	KarmasikSayi k5(-4,-1);
	KarmasikSayi k6(-2,0);
	KarmasikSayi k7(-10,3);
	KarmasikSayi k8(0,0);
	cout<<"k1 nesnesi:\n";
	k1.ekranabastir();
	cout<<"k1 nesnesinin reel  kismi 1.2 olarak degistiriliyor\n";
	k1.setAtaReel(1.2);
	k1.ekranabastir();
	cout<<"k2 nesnesi:>\n";
	k2.ekranabastir();
	cout<<"k2 nesnesinin sanal kismi 9 olarak degistiriliyor\n";
	k2.setAtaSanal(9);
	k2.ekranabastir();
	cout<<"k3 nesnesi:>\n";
	k3.ekranabastir();
	cout<<"k3 nesnesinin reel kismi 3.2 ve";
	cout<<" sanal kismi -4 olarak degistiriliyor:\n";
	k3.setAtaReel(3.2);
	k3.setAtaSanal(-4);
	k3.ekranabastir();
	cout<<"k4 nesnesinin reel olma durumu sorgulaniyor:>";
	cout<<k4.reelmi()<<"\n\n";
	cout<<"k5 nesnesinin negatiflik durumu sorgulaniyor:>";
	cout<<k5.negatifmi()<<"\n\n";
	cout<<"k6 nesnesinin negatiflik durumu sorgulaniyor:>";
	cout<<k6.negatifmi()<<"\n";
	cout<<"k7 nesnesinin once negatiflik sonrada reel olma durumu sorgulaniyor:>";
	cout<<"negatiflik="<<k7.negatifmi()<<" reellik="<<k7.reelmi()<<"\n\n";
	cout<<"k8 nesnesi:>\n";
	k8.ekranabastir();
	cout<<"k8 nesnesinin degerleri degistiriliyor:>\n";
	k8.setYaz(3.1,-4.9);
	k8.ekranabastir();
	
	return 0;
}
