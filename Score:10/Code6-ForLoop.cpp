// Input Format

// You will be given two positive integers,  and  (), separated by a newline.

// Output Format

// For each integer  in the inclusive interval :

// If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if  and it is an even number, then print "even".
// Else if  and it is an odd number, then print "odd".

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(i<=9){
            switch(i){
                case 1:cout <<"one\n";
                break;
                case 2:cout <<"two\n";
                break;
                case 3:cout <<"three\n";
                break;
                case 4:cout <<"four\n";
                break;
                case 5:cout <<"five\n";
                break;
                case 7:cout <<"seven\n";
                break;
                case 8:cout <<"eight\n";
                break;
                case 9:cout <<"nine\n";
                break;
                case 6:cout <<"six\n";
                break;
            }
        }
        else{
            if (i%2==0){
                cout<<"even\n";
            }
            else{
                cout<<"odd\n";
            }
        }
    return 0;
}

// Sample Input
// 8
// 11

// Sample Output
// eight
// nine
// even
// odd