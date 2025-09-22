//변수선언
#include <stdio.h>
int main(){
    char a; //문자형 변수 선언
    int b = 4;  //정수형 변수 선언 후 4로 초기화
    float c, d; //float 실수형 변수 선언
    double e = 1.1, f = 2.4;    //double 실수형 변수 선언 후 각각 1.1, 2.4로 초기화
    return 0;
}

//전역 변수
#include <stdio.h>
int a = 5;  //블록 밖에 있으므로 전역 변수
void fn(){
    a = a + 3;
}
int main (){
    a = a + 5;
    fn();
    printf("%d", a);
    return 0;
}

//지역 변수
#include <stdio.h>
int main(){
    int a = 3, b = 4;   //전역 변수
    {
        int a = 5;
        printf("%d %d\n", a, b);    //지역 변수
    }
    printf("%d %d\n", a, b);
    return 0;
}

//static 변수
#include <stdio.h>
void fn(){
    static int a = 3;   //static 변수 
    a = a + 1;
    printf("$d\n", a);
}
int main(){
    fn();
    fn();
    return 0;
}