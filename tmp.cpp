#include<iostream>
using namespace std;

int main(){
    int h;
    while(scanf("%d", &h) != EOF){
        int space_num = (h-1) * 2;
        int col_num = space_num + h;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < col_num; j++){
                if(j < space_num){
                    printf(" ");
                }else{
                    printf("*");
                }
            }
            space_num -= 2;
            printf("\n");
        }
    }
    return 0;
}