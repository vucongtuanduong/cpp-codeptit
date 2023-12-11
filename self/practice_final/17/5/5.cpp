#include <bits/stdc++.h>
using namespace std;
class Customer;
class Invoice;
class Invoice{
    public:
        int id;
        Customer customer;
        double amount;
        friend istream &operator >> (istream &in, Invoice &a) {
            string idString;
            getline(in, idString);
            stringstream ss(idString);
            string temp;
            string idTemp;
            while (ss >> temp) {
                idTemp = temp;
            }
            a.id = stoi(idTemp);
            
            string amountString, temp2, amountTemp, amountTemp2;
            getline(in, amountString);
            stringstream ss1(amountString);
            while (ss1 >> temp2) {
                amountTemp2 = amountTemp;
                amountTemp = temp2;
                
            }
            a.amount = stof(amountTemp2);
            cout << "a.amount: " << a.amount << endl;
            // stringstream ss2(amountTemp2);
            // string temp3;
            // string decimal, integer;
            // vector<string> v;
            // while (getline(ss2, temp3, '.')) {
            //     v.push_back(temp3);
            // }
            // decimal = v[1];
            // integer = v[0];
            // int phannguyen = stoi(integer);

            return in;
        }
};
class Customer{
    public:
        int id;
        string name = "";
        int discount;
        friend istream &operator >> (istream &in, Customer &a) {
            string rac;
            getline(in, rac);
            string idString;
            getline(in, idString);
            stringstream ss(idString);
            string temp, idTemp;
            while (ss >> temp) {
                idTemp= temp;
            }
            a.id = stoi(idTemp);

            string nameString;
            getline(in, nameString);
            stringstream ss1(nameString);
            string temp1;
            bool ok = false;
            while (ss1 >> temp1) {
                if (temp1 == ":") {
                    ok = true;
                }
                if (ok == true) {
                    a.name += temp1 + " ";
                }
            }
            a.name.pop_back();
            
            string disString, disTemp;
            getline(in, disString);
            string temp2;
            stringstream ss2(disString);
            while (ss2 >> temp2) {
                disTemp = temp2;
            }
            a.discount = stoi(disTemp);

            Invoice x;
            in >> x;
            a.customer = x;
            return in;
        }
        friend ostream &operator << (ostream &out, Customer a) {
		
            out << "Customer ID : " << a.id << endl;
            out << "Full Name : " << a.name << endl;
            out << a.customer;    
            out << "--------------------\n";        
            return out;
    	}
};

void testCase() {
    int n;
    cin >> n;
    cin.ignore();
    Customer *dskh = new Customer[n];
    for (int i = 0; i < n; i++) {
        cin >> dskh[i];
    }
    for (int i = 0; i < n; i++) {
        cout  << dskh[i];
    }

}
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testCase();
}