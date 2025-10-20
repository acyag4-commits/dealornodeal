#include "/public/read.h"
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <set>
using namespace std;
void die() {
	cout << "You dun goofed.\n";
	exit(0);
}

int main() {
	cout << "Hello World" << endl;
	This is equivalent to string filename;
	cout << "Please enter a filename\n";
	cin >> filename;//1) opening file
	//But on one line instead of three, because I'm cool like that

	string filename = read("Please enter a filename:\n");
	//Next...
	//Do you remember how to open a file?
	std::ifstream infile(filename) { // so this code tells us that if there is a file, open it, but if not then the stream will fail!! :(
		if (!infile) {
			die();
		}
	}
	//How to check to see if the file opened successfully?
	//How do you store data in a vector?
	//How do you average values across a vector?
}
// so kyle in the README it tell that we need to use a vector of ints of size N
// so the file will have the # of briefcases( or N) and we gotta write the amount of dollars (N)
// So....
int N;
infile >> N;
if (!infile || N < 2) {
	die();
}
// this should be our vector for step 2 in the README :)
vector<int> briefcases(N);
for (int i = 0; i < N; ++i) {
	infile >> briefcases[i];
	if (!infile || briefcases[i] <= 0) {
		die();
	}
}
// okie dokie kyle now since we have our vector taken care of , ow we need to do step #3
// But step 3 hase part to it, but it basically seems that we need to write an infinite loop
while (true) {
	string Inputstr = read("please enter a briefcase to open:\n");  // so kyle im not exactly sure if im doing the infinite loop right but u might wanna double check me on this plz :)
}
int userChoice;
int offer;
while {
userChoice = stoi(Inputstr);
} catch () {
	die();
}
// kyle, this code is basically if the user will accept the deal, but accroding to the READEME it says that the range of the int will be form 0 to N-1
if (userChoice == -1) {
	cout << "You Won" << offer << endl;
	return 0;
}
if (userChoice < 0 || userChoice >= N);
die();
}
opened[userChoice] = true;
// this is what i have so far :), i tried compiling it and ive only got i little error :)
cout << " That briefcase held X dollars" << endl ;
int sum = 0;
int userCount = 0;
for (int i = 0; < i < N ; i++) {
	if (!opened[i] {
	sum += briefcases[i]
		userCount++;
	}
}

// now we calculate the average value left in the cases accoring to the README
offer = sum / count;
cout << "I will offer ou X dollars to walks away.\n" << endl;
return 0;
}
// kyle this comment here is just to see if our "push" and "pull" is working properly :) 



