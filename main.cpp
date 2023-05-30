#include <iostream>
using namespace std;
class mm {
public:
	mm() { a = 4 + 300; cout << "mm\n"; }
	mm(int b) { a = b + 100; cout << "mmb\n"; }
	int a;
};
class nn :public mm {
public:
	nn() { a = 11; cout << "nn\n"; }
	nn(int b) { c = a; a = b; mm::mm(a); cout << "nnb\n"; }
	int c;

};
class oo :public nn {
public:
	oo() { f = 100; cout << "oo\n"; }
	oo(int b) { f = b; c = a; nn(f); }
	int f;
};
void main() {
	nn pp(5);
	cout << pp.a << endl << pp.c << endl;
	oo kk(20);
	cout << kk.a << " " << kk.c << " " << kk.f << endl;
}