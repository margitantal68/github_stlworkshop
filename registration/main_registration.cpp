#include <set>
#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {
    map<string, int> names;
    int n;
    string line;
    getline(cin, line);
    istringstream iss(line);
    iss >> n;
    for (int i = 0; i < n; ++i) {
        string name;
        getline(cin, name);
        if (names.find(name) == names.end()) { // nem talalhato a name a names taroloban
            cout << "OK" << endl;
            names[name] = 1;
//            names.insert({name, 1});
        } else{
            int counter = names[ name ];

            stringstream oss(name);
            oss << name << counter;
            string newname;
            oss >> newname;
            cout << newname << endl;

            names[name]++; // novelem a kulcs elofordulasi szamat

        }
    }

    return 0;
}
