#include <iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		
		Mahasiswa(string nama, string b){
			this -> nama = nama;
			npm = b;
		}
};

int main(){
	Mahasiswa Mhs("Bila","2357");
	
	cout << "Nama: " << Mhs.nama << endl;
	cout << "npm: " << Mhs.npm;
}
