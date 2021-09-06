#include<bits/stdc++.h>

using namespace std;

class Box 
{
    private:
    int l;
    int b; 
    int h; 
    
    public: 
    
    Box ()
    {
        l = 0; 
        b = 0; 
        h = 0; 
    }
    
    Box(int length,int breadth,int height)
    {
        l = length;
        b = breadth;
        h = height; 
    }
    
    Box(const  Box& B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    
    int getLength (void)
    {
        return l;
    }
    
    int getBreadth (void)
    {
        return b;
    }
    
    int getHeight (void)
    {
        return h;
    }
    
    long long CalculateVolume(void)
    {
        return ((long long)l * b * h);
    }
    
    friend bool operator < (Box& b1, Box& b2)
    {
        if((b1.l < b2.l) || (b1.l == b2.l && b1.b < b2.b) ||
            (b1.l == b2.l && b1.b == b2.b && b1.h <b2.h))
            {
                return(true);    
            }
            
        else
        {
            return(false);
        }
            
    }

    friend ostream& operator << (ostream& s,Box& b1)
    {
        s << b1.l << " " << b1.b << " " << b1.h;
        return s;
    }
    
};

