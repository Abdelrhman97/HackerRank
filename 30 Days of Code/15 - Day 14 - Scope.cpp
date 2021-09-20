#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference (vector<int>items)
    {
        elements = items; 
        
    }
    
    void computeDifference ()
    {
        int n = elements.size(); 
        int min = elements[0]; 
        int max = elements[0];
        
        for (auto n : elements)
        {
            if (n < min)
            {
                min = n; 
            }
            else if (n > max)
            {
                max = n;    
            }
        }
        
        maximumDifference = max - min;
    }
    

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
