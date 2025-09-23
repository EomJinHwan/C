//증감 연산자
#include <stdio.h>
int main(){
    int x = 3, y = 3;
    printf("%d", x++);
    printf("%d", x);
    printf("%d", ++y);
    printf("%d", y);
    return 0;
}

#include <stdio.h>
int main(){
    int x = 3, y = 3;
    int z = x++ + ++y;
    printf("%d %d %d", x, y, z);
    return 0;
}

#include <stdio.h>
int main(){
    int x = 3, y = 3;
    x++;
    ++y;
    printf("%d %d", x, y);
    return 0;
}

//산술 연산자
#include <stdio.h>
int main(){
    int x = 3, y = 2;
    float z = 2.0;
    printf("%d %d\n", x%y, y%x);
    printf("%d %.2f", x/y, x/z);
    return 0;
}

//시프트 연산자
#include <stdio.h>
int main(){
    int x = 11;
    printf("%d", x<<3);
    printf("%d", x>>1);
    return 0;
}

//관계 연산자
#include <stdio.h>
int main(){
    printf("%d\n", 3 == 3);
    prinf("%d\n", 3 != 3);
    return 0;
}

//비트 연산자
#include <stdio.h>
int main(){
    printf("%d", 12 & 10);
    printf("%d", 12 | 10);
    printf("%d", 12 ^ 10);
    printf("%d", ~12);
    return 0;
}

//논리 연산자
#include <stdio.h>
int main(){
    int x = 5, y = 3;
    printf("%d", x > 5 && y >= 3);
    printf("%d", x> 5 || y >= 3);
    return 0;   
}

//삼항 연산자
#include <stdio.h>
int main(){
    int a = 26, b = 91;
    int x = a < b ? a : b;
    printf("%d", x);
    return 0;   
}

//대입 연산자
#include <stdio.h>
int main(){
    int a = 17;
    a += 1;
    a -= 2;
    a *= 3;
    a /= 4;
    a %= 5;
    printf("%d", a);
    return 0;   
}