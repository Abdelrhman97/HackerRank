#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, itms;
    vector<int> nums;  
    cin >> n; 
    
    for (int i = 0; i < n; i++)
    {
        cin >> itms; 
        nums.push_back(itms); 
    }
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < n; i++)
    {
        cout << nums.at(i) << " ";
        
    }
    return 0;
}
