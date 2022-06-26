// Input Format
// The first line of the input contains N,where N is the number of integers.The next line contains N space-separated integers.

// Output Format
// Print the N integers of the array in the reverse order, space-separated on a single line.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout <<a[i]<<" "; 
    }
    return 0;
}


// Sample Input
// 4
// 1 4 3 2

// Sample Output
// 2 3 4 1