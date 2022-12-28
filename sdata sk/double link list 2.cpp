#include <iostream>
using namespace std;

struct DataUser {
	
	DataUser *prev, *next;
};
string nama, username, email, password;
DataUser *head, *tail, *next, *cur, *newNode, *del;
void create(){
	int n;
	cout << "Masukkan jumlah data : ";
	cin >> n;
		for(int i = 0; i < n; i++){
		cout << "Data ke-" << i+1 << endl;
		cout << "Nama user : "; cin >> nama;
		cout << "User name : "; cin >> username ;
		cout << "Email user: "; cin >> email;
		cout << "Password user : "; cin >> password;
	}
	head =  new DataUser;
	head->nama = data[0];
	head->username = data[1];
	head->email = data[2];
	head->password = data[3];
	head->prev = NULL;
	head->next = NULL;
	tail = head;
}


void print(){
	if(head == NULL){
		cout << "Double link list belum di buat ";
	}else{
		cur = head;
		while(cur != NULL)
		{
		//print
		cout << "Nama user : " << cur->nama << endl;
		cout << "User name : " << cur->username << endl;
		cout << "Email user: " << cur->email << endl;
		cout << "Password user : " << cur->password << "\n" << endl;
		
		cur = next;
		}
	}
}


int main()
{	

	
	for(int i = 0; i < n; i++){
		cout << "Data ke-" << i+1 << endl;
		cout << "Nama user : "; cin >> nama;
		cout << "User name : "; cin >> username ;
		cout << "Email user: "; cin >> email;
		cout << "Password user : "; cin >> password;
	}
	//string newData[4] = {"yunus", "wyunus", "yunus@gmail.com", "mudah kok"};
	//create(newData);
	create(newData);
	print();
}
