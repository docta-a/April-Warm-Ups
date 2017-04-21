#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//declation
void color();
int main() {

	srand(time(NULL));
	while (true) {
		color();//function call
		system("pause");

	}
}
/////////defintions
void color() {
	int color = rand() % 100 + 1;
	cout << "Welcome to the color game, what color will you get today?" << endl;
	if (color > 25)
		system("color 1A");
	cout << endl;
	if (color < 26)
		system("color 2B");
	cout << endl;
	if (color > 50)
		system("color 4D");
	cout << endl;
}
