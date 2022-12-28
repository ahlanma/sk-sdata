#include <iostream>  
using namespace std; 

struct data{
  	string nama;
  	string id;
  	string judul;
  	int stok;
  	int Tb;
  	data *next, *prev;
  };
  data *awal,*akhir,*bantu, *tambah, *baru,*hapus;
  
class Perpustakaan {
public:


  void input();
  void output();
  void hapusData();
  void tambahData();
  
};


void Perpustakaan::input() {
  int jml;
  cout<<"Masukan Jumlah buku : ";
  cin>>jml;  
  for (int i=0; i<jml; i++) {
  	baru = new data;
	baru->next = NULL;
    baru->prev = NULL;
    cout << "Data ke-" << i+1 << endl;
    cout << "Masukkan Id\t : ";
    cin >> baru->id;
    cout << "Masukkan Nama\t : ";
    cin >> baru->nama;
    cout << "Masukkan Judul\t : ";
    cin >> baru->judul;
    cout << "Tahun terbit\t : ";
    cin >> baru->Tb;
    cout << "Masukkan stok buku: ";
    cin >> baru->stok;
    cout << endl;
    if (awal == NULL){
	        awal = akhir = baru;
	}
    else {
	        baru->next = awal;
	        awal->prev = baru;
	        awal = baru;
    }
  } 
}

void Perpustakaan::output() {
	if(awal == NULL){
    cout << "Data kosong\nSegera input data terlebih dahulu!\n";
	}else{
	bantu = awal;
    while (bantu!=NULL) {
    cout << endl;
    cout << "Id buku \t: " << bantu->id << endl;
    cout << "Judul buku \t: " << bantu->judul << endl;
    cout << "Nama pengarang \t: " << bantu->nama << endl;
    cout << "Tahun terbit\t: " << bantu->Tb << endl;
    cout << "Stok buku \t: " << bantu->stok << endl;
    bantu = bantu->next;  
	}
  }
}



void Perpustakaan::hapusData(){
    if(awal == NULL){
        cout << "link list belum di buat\n";
    }else{
        hapus = akhir;
        akhir = akhir->prev;
        akhir->next = NULL;
        //akhir = akhir->prev;
        
        delete hapus;
        cout << "Data telah di hapus\n";
    }
}

void Perpustakaan::tambahData(){
	int n;
	tambah = new data;
	if(awal == NULL){
		awal = akhir = tambah;
		cout << "link list belum di buat\nSegera di buat terlebih dahulu!\n";
	}else{	
	
	cout << "Masukkan jumlah buku : ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
	cout << "Data ke-" << i+1 << endl;
    cout << "Masukkan Id\t : ";
    cin >> tambah->id;
    cout << "Masukkan Nama\t : ";
    cin >> tambah->nama;
    cout << "Masukkan Judul\t : ";
    cin >> tambah->judul;
    cout << "Tahun terbit\t : ";
    cin >> tambah->Tb;
    cout << "Masukkan stok buku: ";
    cin >> tambah->stok;
    
    tambah->next = awal;
	awal->prev = tambah;
	awal = tambah;
    
//    tambah->prev = NULL;
//    tambah->next = awal;
//    awal->prev = tambah;
//    awal = tambah;
	}
//	if (awal == NULL){
//	        awal = akhir = tambah;
//	}
//    else {
//
//    }
	
	}
}

int main() {
	Perpustakaan x;
  int pilih;

  do{
	cout << "+----------------------------+" << endl;
	cout << "| PROGRAM PERPUSTAKAAN CERIA |" << endl;
	cout << "+----------------------------+" << endl;
	cout << endl;
	awal:
  	cout << "Pilih menu : \n";
  	cout << "1. Input data \n";
  	cout << "2. Hapus data \n";
  	cout << "3. Tambah data \n";
  	cout << "4. Output data\n";
  	cout << "5. Exit\n";
  	cout << "Lain-lain >> EXIT\n";
  	cout << endl;
  	cout << "Pilih   : ";
  	cin>>pilih;

  switch(pilih){
    case 1:
      //system("cls");
      x.input();
      break;
      case 2:
      //system("cls");
      x.hapusData();
      break;
      case 3:
	  //system("cls");
      x.tambahData();
      break;
      
      case 4:
      x.output();
      //system("cls");
      //goto awal;
      break;
      
      default :
      system("cls");
      cout << "---------EXIT---------";
      exit(1);
      break;
  }
  
}
  while(pilih<=3);
}
