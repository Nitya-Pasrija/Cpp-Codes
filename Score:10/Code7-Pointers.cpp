// Returns
// The function is declared with a void return type, so there is no value to return. Modify the values in memory so that a contains their sum and b contains their absoluted difference.

// Input Format
// Input will contain two integers, a and b, separated by a newline.

#include <stdio.h>

void update(int *a,int *b) {
    int temp;
    if (*a>*b){
        temp=(*a-*b);
        *a=*a+*b;
        *b=temp;
    }    
    else{
        temp=(*b-*a);
        *a=*a+*b;
        *b=temp;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

// Sample Input
// 4
// 5

// Sample Output
// 9
// 1