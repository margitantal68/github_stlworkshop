//
// Created by Margit Antal on 17.03.2023.
//

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

void print_vector(const string &message, vector<int> &v) {
    cout << message << ": ";
    for (auto &e: v) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v{1, -6, -3, 5, 10, 100, -9};
    sort(v.begin(), v.end());
    print_vector("novekvo: ", v);
    sort(v.begin(), v.end(), [](const int& a, const int& b){
        return a > b;
    });
    print_vector("csokkeno: ", v);
    return 0;
}