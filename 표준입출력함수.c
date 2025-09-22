#include <stdio.h>
int main(){
    printf("Hello C World");
    return 0;
}

//이스케이프 문자 이용 출력
#include <stdio.h>
int main(){
    printf("Hello\tC\nWorld");
    return 0;
}

//포맷 스트링 이용 출력
#include <stdio.h>
int main(){
    int a = 4, c = 5;
    char b = 'A';
    printf("a는 %d, b는 %c \n", a, b);
    printf("%d", a + c);
    return 0;
}

//포맷 스티링 상세 출력
#include <stdio.h>
int main(){
    float a = 1.234;
    int b = 10;
    printf("%.2f\n", a);
    printf("%5.1f\n", a);
    printf("%05.1f\n", a);
    printf("%-05.1f\n", a);
    printf("%5d\n", b);
    printf("%05d\n", b);
    printf("%-5d\n", b);
    printf("%-05d\n", b);
    return 0;
}

//scanf 함수
#include <stdio.h>
int main(){
    int a;
    char b;
    scanf("%d %c", &a, &b);
    printf("a는 %d, b는 %c 입니다", a, b);
    return 0;
}

//gets 함수
#include <stdio.h>
int main(){
    char a[10];
    gets(a);
    printf("%s", a);
    return 0;
}