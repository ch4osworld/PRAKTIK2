#include <iostream>// Rifandi Winarya 2100018376
#include <iomanip>// Muhammad Didat Wiradhyaksa 2100018415
using namespace std;
int main()
{
	int a,jumlah_beli,jumlah[100], harga[100],ttl[100];
	string nama_barang[100];
	float total,bayar,x;
	do
	{
		cout<<"1) Masukkan barang belanja "<<endl;
		cout<<"2) Keluar"<<endl;
		cout<<"masukkan pilihan : ";cin>>a;
		cout<<endl;	
		if(a==1)//percabangan
		{
			cout<<"Masukan Jumlah Beli : ";
			cin>>jumlah_beli; 
			cin.ignore();
			for (int i=0; i<jumlah_beli;i++)//perulangan
			{
				cout<<endl;
				cout<<"Nama Barang : ";
				getline(cin,nama_barang[i]); 
				cout<<"Harga       : ";
				cin>>harga[i];
				cout<<"jumlah      : ";
				cin>>jumlah[i]; 
				cin.ignore();
				ttl[i]=jumlah[i]*harga[i];
				total+=ttl[i];//operator
			}		
		}
	}
	while(a==1);
	cout<<"No   Barang    Jumlah     Harga     Total"<<endl;
	for (int i=0;i<jumlah_beli;i++)
	{
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<ttl[i]<<endl; 
	}
	cout<<"Total Harga  : Rp."<<total<<endl;
	cout<<"Bayar        : Rp.";cin>>bayar;
	x=bayar-total;
	if(x>0)
	{
		cout<<"Kembalian : Rp."<<x<<endl;
	}
	else
		cout<<"UANG KURANG PEMBELIAN GAGAL"<<endl;
	return 0;
}
