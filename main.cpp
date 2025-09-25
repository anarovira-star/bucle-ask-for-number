#include <iostream>

using namespace std;
int main() {
	//Create two strings with the texts “even” and “odd”.
	string par = "par";
	string impar = "impar";

	//When the program starts, create an array of type boolean and calculate if the numbers from 0 to 9 are even or odd
	bool* lista = new bool[10];
	for (int i = 0;i < 10;i++) {
		if (i % 2 == 0) lista[i] = true;
		else lista[i] = false;
		cout << lista[i] << endl;
	}

	//Ask the user for a number to check in an infinite loop
	while (true) {
		int num;
		cout << "pon un num";
		cin >> num;
		cout << " el valor elegido es: " << num << endl;

		if (lista[num] == true)
			cout << "el num " << num << " es " << par << endl;
		else cout << "el num " << num << " es " << impar << endl;
	}

}
