//while 문
#include <stdio.h>
int main(){
    int i = 0, sum = 0;
    while (i < 2){
        i++;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

//do while 문
#include <stdio.h>
int main(){
    int i = 1, sum = 0;
    do{
        sum = sum + i;
        i++;
    } while(i<0);
    printf("%d\n", sum);
    return 0;
}

//for 문
#include <stdio.h>
int main(){
    int i, sum = 0;
    for(i=1; i<3; i++){
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}

//이중 for 문
#include <stdio.h>
int main(){
    int i, j;
    for(i=1; i<3; i++){
        for(j=1; j<3; j++){
            printf("%d\n", i * 10 + j);
        }
    }
    return 0;
}

//break 문
#include <stdio.h>
int main(){
    int i = 1;
    while(i<5){
        i++;
        if(i==3)
            break;
        printf("%d", i);
    }
    printf("%d", i);
    return 0;
}

//continue 문
#include <stdio.h>
int main(){
    int i = 1;
    while(i<5){
        i++;
        if(i==3)
            continue;
        printf("%d", i);
    }
    printf("%d", i);
    return 0;
}