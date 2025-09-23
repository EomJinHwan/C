//if 문
#include <stdio.h>
int main(){
    int x = 5;
    if(x % 3 == 0)
        printf("1");
    else if(x % 3 == 1)
        printf("2");
    else
        printf("3");
    return 0;
}

//switch 문
#include <stdio.h>
int main(){
    int score = 101;
    switch (score/10)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;    
    default:
        printf("F");
    }
    return 0;
}