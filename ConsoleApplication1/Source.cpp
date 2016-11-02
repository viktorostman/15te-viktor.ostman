#include <iostream>
#include <windows.h>
#include <string>
#include <time.h>

using namespace std;

void rockpaperscissor();
void numberguess();
void calculator();

string proginput;

int main() {
	while (true) {
		if (proginput == "rockpaperscissor" || proginput == "1") { rockpaperscissor(); }
		else if (proginput == "numberguess" || proginput == "2") { numberguess(); }
		else if (proginput == "calculator" || proginput == "3") { calculator(); }
		system("cls");
		cout << "what program would you like to try?" << endl << "1 rockpaperscissor, 2 numberguess or 3 calculator" << endl << ">";
		getline(cin, proginput);
	}
}

void rockpaperscissor() {

	boolean rspceckinput(string x);
	string rpsbot();
	int rpsstringtoint(string x);
	string rpswinorlose(int x, int y);
	string rpsinput;

	system("cls");
	cout << "starting rockpaperscissors" << endl;
	Sleep(1000);
	while (proginput == "1" || proginput == "rockpaperscissor") {
		system("cls");
		cout << "lets play!" << endl << "1 rock, 2 paper or 3 scissor?" << endl << ">";
		getline(cin, rpsinput);

		if (rspceckinput(rpsinput)) { rpsinput = rpsstringtoint(rpsinput); }
		if (rspceckinput(rpsinput)) { break; }

		else { cout << rpsinput << " is not a valid choice" << endl; }
		Sleep(3000);
	}
}

void numberguess() {
	system("cls");
	cout << "starting numberguess" << endl;
	while (proginput == "numberguess" || proginput == "2") {
		cout << "numguess" << endl;
	}

}

void calculator() {
	system("cls");
	cout << "starting calculator" << endl;
	while (proginput == "calculator" || proginput == "3") {
		cout << "calc" << endl;
	}
}

boolean rspceckinput(string x) {
	if (x == "rock" || x == "paper" || x == "scissor") { return true; }
	return false;
}
string rpsbot() {
	srand(time(NULL));
	int x = (rand() % 2);
	if (x == 0) { return "rock"; }
	if (x == 1) { return "paper"; }
	if (x == 2) { return "scissor"; }
}
int rpsstringtoint(string x) {

	if (x == "rock") { return 1; }
	else if (x == "paper") { return 2; }
	else { return 3; }
}
string rpswinorlose(int x, int y) {
	if ((y == x - 1) || (x == 1 && y == 3)) { return "win"; }
	else if (y == x) { return "draw"; }
	else { return "lose"; }
}