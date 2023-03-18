#include <iostream>
#include <fstream>
#include <set>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int readNumber(const string &line) {
    istringstream iss(line);
    int number;
    iss >> number;
    return number;
}

int main() {
    string line;
    getline(cin, line);
    int numTestCases = readNumber(line);

    for (int k = 0; k < numTestCases; ++k) {

        getline(cin, line);
        int numAccounts = readNumber(line);

        vector<string> accounts;
        for (int i = 0; i < numAccounts; ++i) {
            string line;
            getline(cin, line);
            accounts.emplace_back(line);
        }
        sort(accounts.begin(), accounts.end());

        int counter = 1;
        string account = accounts[0];
        for (int i = 1; i < accounts.size(); ++i) {
            if (accounts[i] == account) {
                ++counter;
            } else {
                cout << account << " " << counter << endl;
                account = accounts[i];
                counter = 1;
            }
        }
        cout << account << " " << counter << endl;
        cout << endl;
        // skip new line
        getline(cin, line);
    }
    return 0;
}


