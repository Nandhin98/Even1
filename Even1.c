#include <bits/stdc++.h> 
  
using namespace std; 
bool isProductEven(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
  
        if ((arr[i] & 1) == 0) 
            return true; 
 
    return false; 
} 

int main() 
{ 
    int arr[] = { 2, 4, 3, 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    if (isProductEven(arr, n)) 
        cout << "Even"; 
    else
        cout << "Odd"; 
    return 0; 
} 
