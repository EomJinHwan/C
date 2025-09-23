//사용자 정의 함수
#include <stdio.h>
char fn(int num){
    if(num %2 == 0)
        return 'Y';
    else
        return 'N';
}
int main(){
    char a = fn(5);
    _Pragma("%c\n", a);
    return 0;
}

//값 전달
#include <stdio.h>
int fn(int n){
    n = 7;
    return n;
}
int main(){
    int n = 5;
    fn(n);
    printf("%d", n);
    return 0;
}

//주소 전달
#include <stdio.h>
void fn(int* m){
    *m = 7;
}
int main(){
    int n = 5;
    int o[3] = {1, 2, 3};
    int i;
    fn(&n);
    fn(&o[1]);
    printf("%d\n", n);
    for(i=0; i<3; i++){
        printf("%d", o[i]);
    }
    return 0;
}

//재귀 함수
#include <stdio.h>
int fn(int n){
    if(n<=1){
        return 1;
    } else {
        return n*fn(n-1);
    }
}
int main(){
    printf("%d", fn(3));
    return 0;
}

//수학 함수
//sqrt
#include <stdio.h>
#include <math.h>
int main(){
    double a;
    a = sqrt(5.1);
    printf("%.2f", a);
    return 0;
}

//ceil
#include <stdio.h>
#include <math.h>
int main(){
    double a = 1.1;
    printf("%.2f", ceil(a));
    return 0;
}

//floor
#include <stdio.h>
#include <math.h>
int main(){
    double a = 1.1;
    printf("%.2f", floor(a));
    return 0;
}

//유틸리티 함수
//rand, srand, time
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a;
    int i;
    srand(time(NULL));
    for(i=0; i<6; i++){
        a = rand()%45+1;
        printf("%d ",a);
    }
    return 0;
} 

//atoi
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *a = "1";
    int num = atoi(a);
    printf("%d", num);
    return 0;
}

//atof
#include <stdio.h>
#include <stdlib.h>
int main(){
    char *str_num = "1.0";
    int num = atoi(str_num);
    printf("%.2f", num);
    return 0;
}

//itoa
#include <stdio.h>
#include <stdlib.h>
int main(){
    char buffer[4] = {NULL};
    int num = 123;
    itoa(num, buffer, 10);
    printf("%s", buffer);
    return 0;
}

//문자 관리 함수
#include <stdio.h>
#include <ctype.h>
int main(){
    char s[5] = "Sf 2";
    int i;
    for(i=0; i<4; i++){
        printf("%d ", isalpha(s[i]));
        printf("%d ", isupper(s[i]));
        printf("%d ", islower(s[i]));
        printf("%d ", isdigit(s[i]));
        printf("%d ", isxdigit(s[i]));
        printf("%d ", isalnum(s[i]));
        printf("\n");
    }
    printf("%c", tolower(s[0]));
    printf("%c", toupper(s[1]));

    return 0;
}