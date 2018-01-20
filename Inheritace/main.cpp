#include <iostream>
#include <string>

using namespace std;

class inHe {

public:
	inHe(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void virtual size(int size) = 0;


	void virtual printAll() const{
		cout << "Name is: " << name << " and age is: " << age << endl;
	}


protected:
	

private:
	string name;
    int age;
};

class inHeG :
	public inHe {

public:

	inHeG(string s, int a) : inHe(s, a) { }

	void size(int sizee) {
		this->sizee = sizee;
	}

	void printAll() {
		inHe::printAll();
		cout << "Bra Size is: " << sizee << endl;
	}

private:
	int sizee;

};
int main() {

	inHeG g1("Sonya", 24);
	
	g1.size(34);

	g1.printAll();

	cout << endl;

	cout << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Hit Enter exit" << endl;
	getchar();
}