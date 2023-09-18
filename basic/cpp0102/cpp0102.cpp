#include <iostream>

using namespace std;
void testCase();
bool checkUpper(char c);
bool checkLower(char c);
int main () {
	int t;
	cin >> t;
	while (t--) {
		testCase();
		cout << endl;
	}
}
void testCase() {
	char c;
	cin >> c;
	if (checkUpper(c)) {
		c+= 32;
		cout << c;
		
	} else if (checkLower(c)){
		c -= 32;
		cout << c;
	}
}
bool checkUpper(char c) {
	if (c >= 'A' && c <= 'Z') {
		return true;
	} else {
		return false;
	}
}
bool checkLower(char c) {
	if (c >= 'a' && c <= 'z') {
		return true;
	} else {
		return false;
	}
}
