#include<iostream>
using namespace std;

int main()
{
    string a, b;
    int n, sum_a = 0, sum_b = 0, extra;
    cin >> a >> b;
    
    for(int i = 0; i < a.length(); i++)
    {
        sum_a = sum_a + int(a[i]);
    }
    
    for(int i = 0; i < b.length(); i++)
    {
        sum_b = sum_b + int(b[i]);
    }
   
    extra = sum_b - sum_a;
    cout << char(extra);
    
    return 0;
    
}