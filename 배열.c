//1차원 배열
#include <stdio.h>
int main(){
    int a[3] = {1, 2};
    int i;
    for(i=0; i<3; i++){
        printf("%d\n", a[i]);
    }   
    return 0;
}

//2차원 배열
#include <stdio.h>
int main(){
    int a[2][3] = {1, 2, 3, 4};
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
    }
    return 0;
}