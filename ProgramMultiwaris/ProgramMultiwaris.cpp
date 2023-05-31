#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n;" << endl;
	}
	~orang() {
		cout << "orang yang dihapus\n" << endl;
	}
}; 

class manusia {
public:
	string JenisKelamin;

	manusia(string pJenisKelamin) :
		JenisKelamin(pJenisKelamin) {
		cout << "Manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "Manusia dihapus\n" << endl;
	}	
};

class pelajar : private manusia, public orang {
public:
	string sekolah;

	pelajar(string pNama, string pJenisKelamin, string pSekolah) :
		orang(pNama),
		manusia(pJenisKelamin),
		sekolah(pSekolah) {
		cout << "pelajar dibuat\n" << endl;
	}
	~pelajar() {
		cout << "Pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return "Hallo, nama saya" + nama + "dengan jenis kelamin"
			+ JenisKelamin + "dari sekolah" + sekolah + "\n\n";
	}
};

