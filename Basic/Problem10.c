#include <stdio.h>

int gcd(int n,int m){
    return  m == 0 ? n : gcd(m, n % m);
}

int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d\n",gcd(a,b));
}