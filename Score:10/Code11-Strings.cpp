// Input Format

// You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

// Output Format

// In the first line print two space-separated integers, representing the length of a and b respectively.
// In the second line print the string produced by concatenating a and b (a+b).
// In the third line print two strings separated by a space, a' and b'. a' and b' are the same as a and b, respectively, except that their first characters are swapped.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a+b<<"\n";
    string temp=a;
    a[0]=b[0];
    b[0]=temp[0];
    cout<<a<<" "<<b;
    return 0;
}


// Sample Input
// abcd
// ef

// Sample Output
// 4 2
// abcdef
// ebcd af