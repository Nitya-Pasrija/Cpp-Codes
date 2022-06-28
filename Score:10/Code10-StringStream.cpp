// Returns
// vector<int>: a vector of the parsed integers.
// Note You can learn to push elements onto a vector by solving the first problem in the STL chapter.

// Input Format
// There is one line of n integers separated by commas.

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector <int> out;
	stringstream ss(str);
    char ch;
    int temp;
    while(ss >> temp){
        out.push_back(temp);
        ss >> ch;
    }
    return out;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


// Sample Input
// 23,4,56

// Sample Output
// 23
// 4
// 56