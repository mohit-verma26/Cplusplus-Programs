#include <stdio.h>
#include <iostream>

void update(int *a,int *b) {
    // Complete this function
    int aa=*a;
     *a=(*a)+(*b);
    *b=(aa)-(*b);
    if(*b<0)
    {
        *b=(*b)*(-1);
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

