#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    stringstream ss(str);
    char ch;
    int temp;
    vector<int> par;
    while (ss >> temp) {
        par.push_back(temp);
        ss >> ch;
    }
    return par;
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
