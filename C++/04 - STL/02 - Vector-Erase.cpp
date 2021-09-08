#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, item, x, a, b; 
    vector<int> nums; 
    
   cin >> n; 
   
   for (int i = 0; i < n; i++)
   {
       cin >> item;
       nums.push_back(item); 
   }
   
   cin >> x; 
   cin >> a >> b; 
   
   nums.erase(nums.begin()+x-1);
   nums.erase(nums.begin()+a-1,nums.begin()+b-1);
   
   n = nums.size(); 
   
   cout << n << endl; 
   
   for (int i = 0; i < n; i++)
   {
       cout << nums[i] << " "; 
   }
 
    
    return 0;
}
