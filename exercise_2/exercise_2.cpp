#include <iostream>
using namespace std;
class bidangdatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujungsangkar
public:
	bidangdatar() { //constructor
		x = 0;
	}

	virtual void input() { //fungsi yang menerima input dan mengirim input melalui fungsi setx untuk disimpan di x
	}
	virtual float luas(int a){ return  0; } //fungsi untuk menghitung luas
		virtual float keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setx(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getx() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}

};
class lingkaran :public bidangdatar {
public:
	string jejari;

	lingkaran(string pjejari, string pluas, string pkeliling)
		bidangdatar(),
		jejari(pjejari) {
		cout << "lingkaran dibuat\n" << endl;
		~lingkaran() {
			cout << "lingkaran dihapus\n" << endl;
		}
	}
};