#include <cstdio>
#include "adder.cpp"

int main(void) {
    int n, m;
    
    scanf("%d %d", &n, &m);
    printf("%d\n", n);
    
    adder(n, m);
    
    return 0;
}

