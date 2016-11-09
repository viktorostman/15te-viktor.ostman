#include <iostream>
#include <windows.h>
#include <string>
#include <time.h>

using namespace std;

void rockpaperscissor();
void numberguess();
void calculator();

string proginput;

//rockpaperscissor rates
int rpswin = 0;
int rpslose = 0;
int guesswin = 0;

int main() {
	while (true) {
		if (proginput == "" ){
			system("cls");
			cout << "what program would you like to try?" << endl << "1 rockpaperscissor, 2 numberguess or 3 calculator" << endl << ">";
			getline(cin, proginput);
		}
		else if (proginput == "rockpaperscissor" || proginput == "1") { rockpaperscissor(); }
		else if (proginput == "numberguess" || proginput == "2") { numberguess(); }
		else if (proginput == "calculator" || proginput == "3") { calculator(); }
		else if (proginput != "" ){
			cout << proginput << " is not valid" << endl;
			Sleep(1000);
		}
	}
}

void rockpaperscissor() {

	string rpsbot();
	string rpswinorlose(string a, string b);
	string rpsinput;

	system("cls");
	cout << "starting rockpaperscissors" << endl;
	Sleep(1000);
	while (proginput == "1" || proginput == "rockpaperscissor") {
		system("cls");
		cout << "lets play!, you have won " << rpswin << " times and lost "<< rpslose << " times" << endl;
		cout << "1 rock, 2 paper or 3 scissor?" << endl;
		cout << ">";
		getline(cin, rpsinput);

		if ((rpsinput != "1" && rpsinput != "2" && rpsinput != "3") && 
			(rpsinput != "rock" && rpsinput != "paper" && rpsinput != "scissor")) {
			cout << rpsinput << " is not a valid choice, returning to main" << endl;
			Sleep(2000); 
			break; 
		}

		else if (rpsinput == "1") {
			rpsinput = "rock";
		}
		else if (rpsinput == "2") {
			rpsinput = "paper";
		}
		else if (rpsinput == "3") {
			rpsinput = "scissor";
		}

		system("cls");
		Sleep(1000);
		cout << "you choose " << rpsinput << endl;
		cout << 3 << endl;
		Sleep(1000);
		cout << 2 << endl;
		Sleep(1000);
		cout << 1 << endl;
		Sleep(2000);

		string stringbot = rpsbot();
		cout << "computer choose " << stringbot << endl << "..." << endl;
		Sleep(1000);
		cout << "its a " << rpswinorlose(rpsinput, stringbot) << endl;
		if (rpswinorlose(rpsinput, stringbot) == "win") { rpswin = rpswin + 1; }
		else if (rpswinorlose(rpsinput, stringbot) == "lose") { rpslose = rpslose + 1; }
		Sleep(1000);
	}
}

void numberguess() {

	int guessinput;

	system("cls");
	cout << "starting numberguess" << endl;
	Sleep(1000);
	while (proginput == "numberguess" || proginput == "2") {
	system("cls");
	cout << "wellcome to numberguess...." << endl << "guess the number between 1 to 1 000 000" << endl << ">";
	cin >> guessinput;
	if (guessinput > 0 && guessinput < 1000001) {
		cout << "win win win" << endl;
		Sleep(99999999999999999);
	}
	else { 
		cout << guessinput << " not valid, returning to main" << endl;
		Sleep(2000);
		break;
		proginput = "" ;
	}
	}

}

void calculator() {
	system("cls");
	cout << "starting calculator" << endl;
	while (proginput == "calculator" || proginput == "3") {
		cout << "calc" << endl;
	}
}

string rpsbot() {
	srand(time(NULL));
	int x = (rand() % 2);
	if (x == 0) { return "rock"; }
	if (x == 1) { return "paper"; }
	if (x == 2) { return "scissor"; }
}

string rpswinorlose(string a, string b) {

	int y;
	if (b == "rock") { y = 1; }
	else if (b == "paper") { y = 2; }
	else if (b == "scissor") { y = 3; }

	int x;
	if (a == "rock") { x = 1; }
	else if (a == "paper") { x = 2; }
	else if (a == "scissor") { x = 3; }

	if ((y == x - 1) || (x == 1 && y == 3)) { return "win"; }
	else if (y == x) { return "draw"; }
	else { return "lose"; }
}