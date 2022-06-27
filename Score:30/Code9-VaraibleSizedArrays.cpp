// Input Format
// The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and  q(the number of queries).
// Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i] .
// Each of the q subsequent lines contains two space-separated integers describing the respective values of  i(an index in array a ) and  j(an index in the array referenced by a[i]) for a query.


// Output Format
// For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i] . There should be a total of q lines of output.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,s=0;
    cin >>x>>y;
    int*arr[x];
     
    while(x--){
    int n;
    cin >>n;
    arr[s]=new int[n];
    
    for(int i=0;i<n;i++)
    cin >> arr[s][i];
    s++;
    }

    while(y--){
    int a,b;
    cin >>a>>b;
    cout<<arr[a][b]<<endl;
    }
    return 0;
}


// Sample Input
// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3

// Sample Output
// 5
// 9