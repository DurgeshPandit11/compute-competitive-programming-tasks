#include<iostream>
using namespace std;

int main()
{
    int n, i, j, temp;
    cin >> n;
    
    int a[n], b[n];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // if array length is 1, no combination exists 
    if(n == 1)
    {
        cout << "-1";
        return 0;
    }
    
    for(i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    
    // Sorting the array
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < n; j++)
        {
            if(b[j] < b[j - 1])
            {
                temp = b[j];
                b[j] = b[j - 1];
                b[j - 1] = temp;
            }
        }
    }
    
   
    // Making lexicographically smallest combination 
    for(i = 0; i < n; i++)
    {
        if(a[i] == b[i])
        {
             if(i + 1 < n)
             {
                 temp = b[i];
                 b[i] = b[i + 1];
                 b[i + 1] = temp;
             }
             else
             {
                 temp = b[i];
                 b[i] = b[i - 1];
                 b[i - 1] = temp;
             }
        }
    }
    
    // Displaying the combination
    for(i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    
    return 0;
    
}
