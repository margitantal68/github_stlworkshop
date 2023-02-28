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
            accounts.push_back(line);
        }
        // Process input

        // skip new line
        getline(cin, line);
    }
    return 0;
}


