#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);
    string nums [9] = {"one","two","three","four","five","six","seven","eight","nine"};
    int n = stoi(ltrim(rtrim(n_temp)));
 
    (n >= 1 && n <= 9)? cout << nums[n - 1]: cout << "Greater than 9";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
