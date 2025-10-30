#include <iostream> //library untuk input dan output

using namespace std;//untuk menggunakan std:: secara default pada output, input dan tipe data

int main(){ //method utama yang akan dieksekusi lebih dulu

	
	int Pilihan; //sebuah deklarasi variabel
	
	//Menu utama
	cout << "Sebuah perhitungan Segitiga dan Lingkaran Simple:)" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "" << endl;
	cout << " Pilih Menu: " << endl;
	cout << " 1. Segitiga" << endl;
	cout << " 2. Lingkaran" << endl;
	cout << "" << endl;
	cout << " >> ";
	cin >> Pilihan; // input yang dimasukkan oleh user, kemudian dikirim ke variabel Pilihan

	if(! cin.fail()){ // ! cin.fail berfungsi ketika pengguna menginputkan huruf dan bukan angka, maka else akan tereksekusi
		if (Pilihan == 1){ // ketika user memilih 1. segitiga
		
			int menuSegitiga; //sebuah deklarasi variabel
			
			
			cout << " ==Menghitung segitiga== " << endl; // segitiga
			cout << "Pilih Menu: " << endl;
			cout << "1. Hitung Luas" << endl;
			cout << "2. Hitung Keliling" << endl;
			cout << ">> ";
			cin >> menuSegitiga; // input user dikirim ke deklarasi variabel menuSegitiga
			if (menuSegitiga == 1){ // ketika user memilih 1. Hitung Luas
				
				int luas, alas, tinggi; //deklarasi variabel luas, alas, tinggi
				
				cout << " ==Menghitung Luas== " << endl; //menghitung luas
				cout << "Masukkan tinggi: " << endl;
				cin >> tinggi; //input user dikirim ke deklarasi variabel tinggi
				cout << "Masukkan alas: " << endl;
				cin >> alas; //input user dikirim ke deklarasi variabel alas
				
				luas = 0.5 * alas * tinggi; //sebuah rumus untuk menghitung luas segitiga
				
				cout << "Luas adalah: " << luas ; //hasil dari penghitungan luas
			}
			
			else if(menuSegitiga == 2){ // ketika user memilih 2. Hitung Keliling
			    int sisi1, sisi2, sisi3, keliling; // sebuah deklarasi variabel
			    
			    cout << "Masukkan sisi pertama >> ";
			    cin >> sisi1; //input user dikirim ke deklarasi variabel sisi1
			    cout << "Masukkan sisi kedua >> ";
			    cin >> sisi2; //input user dikirim ke deklarasi variabel sisi2
			    cout << "Masukkan sisi ketiga >> ";
			    cin >> sisi3; //input user dikirim ke deklarasi variabel sisi3
			    
			    keliling = sisi1 + sisi2 + sisi3; // sebuah rumus untuk menghitung keliling segitiga
			    
			    cout << "Keliling adalah >> " << keliling; //hasil dari perhitungan keliling
			    }
		}
		else if(Pilihan == 2){ // ketika memilih 2. Lingkaran
		    
		    int jari, luas, keliling, menuLingkaran; //deklarasi variabel
		    double pi = 22/7; //sebuah variabel pi
		    
		    //user akan memilih salah satu dari dua pilihan
		    cout << " ==Menghitung Lingkaran== " << endl;
		    cout << "1. Menghitung Luas" << endl;
		    cout << "2. Menghitung Keliling" << endl;
		    cin >> menuLingkaran; //input user dikirim ke deklarasi variabel menuLingkaran
		    if(menuLingkaran == 1){//ketika user memilih 1. Menghitung Luas
		        cout << "Menghitung Luas" << endl;
		        cout << "Masukkan jari jari >> ";
		        cin >> jari; //input user dikirim ke deklarasi variabel jari
		        
		        luas = pi * jari * jari; // rumus menghitung luas lingkaran
		        
		        cout << "Luas Lingkaran adalah >> " << luas; // hasil dari perhitungan luas lingkaran
		        }else if(menuLingkaran == 2){ // ketika user memilih 2. Menghitung Keliling
		            cout << "Menghitung Keliling" << endl;
		            cout << "Masukkan jari jari lingkaran >> ";
		            cin >> jari;//input user dikirim ke deklarasi variabel jari
		            
		            keliling = 2 * pi * jari; // rumus menghitung keliling lingkaran
		            cout << "Keliling lingkaran adalah >> " << keliling; // hasil dari perhitungan keliling lingkaran
		            }
		    }
}else{
    cout << "Masukkan angka bang!"; 	//terpicu ketika user tidak memasukkan angka yang sesuai dan malah memasukkan huruf
    }
}

// nama: Ramdan Olii
// nim : 532424069

