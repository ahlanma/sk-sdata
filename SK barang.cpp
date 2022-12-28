#include <iostream>
using namespace std;

int maksimal = 5;
string arrayBuku[5];
int top = 0;

bool isFull()
{
  if( top == maksimal ){
    return true;
  }else{
    return false;
  }
}

bool isEmpty()
{
  if( top == 0 ){
    return true;
  }else{
    return false;
  }
}

void pushArray(string data){
  if( isFull() ){
    cout << "Data penuh" << endl;
  }else{
    arrayBuku[top] = data;
    top++;
  }
}

void popArray()
{
  if( isEmpty() ){
    cout << "Data kosong!!" << endl;
  }else{
    arrayBuku[top-1] = "";
    top--;
  }
}

void displayArray(){
  if( isEmpty() ){
    cout << "Data kosong!!" << endl;
  }else{
    cout << "Data stack array : " << endl;
    for( int i = maksimal - 1; i >= 0; i-- ){
      if( arrayBuku[i] != "" ){
        cout << "Data : " << arrayBuku[i] << endl;
      }
    }
    cout << "\n" << endl;
  }
}

void peekArray(int posisi){
  if( isEmpty() ){
    cout << "Data kosong!!" << endl;
  }else{
    int index = top;
    for( int i = 0; i < posisi; i++ ){
      index--;
    }
    cout << "Data posisi ke-" << posisi << " : " << arrayBuku[index] << endl;
  }
}

void changeArray(string data, int posisi){
  if( isEmpty() ){
    cout << "Data kosong!!" << endl;
  }else{
    int index = top;
    for( int i = 0; i < posisi; i++ ){
      index--;
    }
    arrayBuku[index] = data;
  }
}

int countArray()
{
  if( isEmpty() ){
    return 0;
  }else{
    return top;
  }
}

void destroyArray(){
  for( int i = 0; i < top; i++ ){
    arrayBuku[i] = "";
  }
  top = 0;
}


// Pakai Linked List
struct dataBarang{
  string namaBarang;
  int hargaBarang;

  // pointer
  dataBarang *prev;
  dataBarang *next;
};

dataBarang *head, *tail, *cur, *newNode, *del;
int maksimalBarang = 5;

void createBarang(string namaBarang, int hargaBarang){
  head = new dataBarang();
  head->namaBarang = namaBarang;
  head->hargaBarang = hargaBarang;
  head->prev = NULL;
  head->next = NULL;
  tail = head;
}

int countBarang()
{
  if( head == NULL ){
    return 0;
  }else{
    int banyak = 0;
    cur = head;
    while( cur != NULL ){
      cur = cur->next;
      banyak++;
    }
    return banyak;
  }
}


bool isFullBarang()
{
  if( countBarang() == maksimalBarang ){
    return true;
  }else{
    return false;
  }
}

bool isEmptyBarang()
{
  if( countBarang() == 0 ){
    return true;
  }else{
    return false;
  }
}

void pushBarang( string namaBarang, int hargaBarang ){

  if( isFullBarang() ){
    cout << "Stack Full!!" << endl;
  }else{
    if( isEmptyBarang() ){
      createBarang(namaBarang, hargaBarang);
    }else{
      newNode = new dataBarang();
      newNode->namaBarang = namaBarang;
      newNode->hargaBarang = hargaBarang;
      newNode->prev = tail;
      tail->next = newNode;
      newNode->next = NULL;
      tail = newNode;
    }
  }

}

void popBarang()
{
  del = tail;
  tail = tail->prev;
  tail->next = NULL;
  delete del;
}

int main()
{
		if(pil == 1){
		//push
		cout << "Menambah data" << endl;
		cout << "Masukan nama barang"
		pushBarang()
		goto awal;
		}
		else if(pil == 2)
		{
			//pop
			cout << "Data telah di hapus " << endl;
			perpus.pop();
		goto awal;
		}
		else if(pil == 3)
		{
			//lihat data
			perpus.display();
		goto awal;
		}else{
			exit(0);
		}	
}
