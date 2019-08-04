#include<iostream>
using namespace std;

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF && (a != 0 && b != 0)){
        int res = 1;
        while(b){
            if(b % 2 == 1){
                res *= a;       // 如果是几次幂，则把当前的a^k乘到res上
                res %= 1000;
            }
            b /= 2;
            a *= a;
            a %= 1000;
        }
        printf("%d\n", res);
    }
    return 0;
}