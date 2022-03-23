#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
int main(){	
	int a=17000 ,b=21000;
	int l, menu, jumlah, bayar, kembali, diskon;
	string nama;
	time_t now = time(0);
	char* dt = ctime(&now);
	
	cout<<"=============KEDAI AYAM BEMBENG============= "<<endl;
	cout<<"---------------KOTA YOGYAKARTA--------------- "<<endl<<endl;
	cout<<"NAMA PEMBELI : ";
	cin>>nama;
	cout<<"NAMA MAKANAN: "<<endl;
	cout<<"1. AYAM GORENG "<<endl;
	cout<<"2. AYAM BAKAR "<<endl;
	cout<<"PILIH MENU MAKANAN : ";
	cin>>menu;
	
	if (menu==1){
		cout<<"Masukan jumlah porsi : "; cin>>l;
		jumlah = l*a;
		cout<<"Total harga Rp."<<jumlah<<endl;
	}
	else{
		cout<<"Masukan jumlah porsi : "; cin>>l;
		jumlah = l*b;
		cout<<"Total Harga Rp."<<jumlah<<endl;
	}
	
	if (jumlah > 45000)
	{
		diskon = jumlah*0.1;
	}
	cout << "Diskon : " << diskon << endl;
	cout<<"Total pembayaran : Rp.";
	cin>>bayar;

	system("cls");
	
	cout<<"==================STRUK PEMBELIAN KEDAI AYAM BEMBENG================="<<endl;
	cout<<"==============================================================="<<endl<<endl;
	cout<<"Nama Pembli \t\t: "<<nama<<endl;
	if (menu ==1 ){
	cout<<"Jenis menu \t\t: "<<"AYAM GORENG"<<endl;
	}
	
	else 
	{
	cout<<"Jenis menu \t\t: "<<"AYAM BAKAR"<<endl;
	}
	cout<<"Total banyak pembelian : "<<l<<" Porsi"<<endl;
	cout<<"Total Harga \t\t: Rp."<<jumlah - diskon<<endl;
	cout<<"Total pembayaran\t: Rp."<<bayar<<endl;
	kembali = bayar-jumlah+diskon;
	cout<<"Total kembalian \t: Rp."<<kembali<<endl<<endl;
	cout<<"\tTerimakasih telah berbelanja di KEDAI AYAM BEMBENG"<<endl;
	cout<<"\t\t  "<<dt;
	getch();
}
