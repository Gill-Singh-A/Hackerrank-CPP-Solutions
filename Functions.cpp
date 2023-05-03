#include <iostream>
#include <cstdio>

using namespace std;


int max_of_four(int a, int b, int c, int d) {
    int g[5] = {a, b, c, d, 0};
    for(int i = 0; i < 5; i++)
        if( g[4] < g[i] )
            g[4] = g[i];
    return g[4];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
