#include<iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    
    while(a % b != 0)
    {
        count++;
        a++;
    }
    cout << count;
}