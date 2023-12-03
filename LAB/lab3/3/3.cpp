#include <bits/stdc++.h>
using namespace std;
class Person;
class Person{
	public:
		string name;
		string phoneNumber;
		string date;
		string lastName;
		string firstName;
		string middleName;
		void setLastName() {
			string s = this->name;
			string temp ;
			stringstream ss(s);
			while (ss >> temp) {
				this->lastName = temp;
			}
		}
		void setMiddleName() {
			string s = this->name;
			string s1 = this->lastName;
			int index = s.find(s1);
			s = s.substr(0, index - 1);
			stringstream ss(s);
			string temp;
			while (ss >> temp) {
				this->middleName = temp;
			}
			
		}
		void setFirstName() {
			string s = this->name;
			string s1 = this->middleName;
			int index = s.find(s1);
			this->firstName = s.substr(0, index - 1);
		}
	
};


bool cmp(Person a, Person b);
void testCase();
//explicit
bool cmp(Person a, Person b) {
	if (a.lastName == b.lastName) {
		return a.firstName < b.firstName;
	}
	return a.lastName < b.lastName;
}
void testCase() {
	string s;
	vector<string> data;
	string day;
	
	while (getline(cin, s)) {
		data.push_back(s);
	}
	int i = 0;
	vector<Person> sotay;
	while (i < data.size()) {
		
		if (data[i].find("Ngay") != -1) {
			day = data[i];
			day.erase(0, 5);
			i++;
		} else {
			Person a;
			a.name = data[i];
			i++;
			a.phoneNumber = data[i];
			i++;
			
			a.date = day;
			a.setLastName();
			a.setMiddleName();
			a.setFirstName();
			sotay.push_back(a);
		}
	}
	sort(sotay.begin(), sotay.end(), cmp);
	for (int i = 0; i < sotay.size(); i++) {
		cout << sotay[i].name << ": " << sotay[i].phoneNumber << " " << sotay[i].date << endl;
	}
	
}
int main () {

	freopen("SOTAY.txt", "r", stdin);
	freopen("DIENTHOAI.txt", "w", stdout);

	testCase();
}