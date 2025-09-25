//포인터
#include <stdio.h>
int main(){
    int a = 10;
    int* b = &a;
    printf("%d %d %d ", a, *b, *(&a));
    return 0;
}

//1차원 포인터
#include <stdio.h>
int main(){
    int a[3] = {1, 2};
    int *p = a;
    printf("%d %d %d\n", a[0], a[1], a[2]);
    printf("%d %d %d\n", *a, *(a+1), *(a+2));
    printf("%d %d %d\n", *p, *(p+1), *(p+2));
    printf("%d %d %d\n", p[0], p[1], p[2]);
    return 0;
}

//2차원 포인터
#include <stdio.h>
int main(){
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int *p = a[1];
    printf("%d %d %d\n", *a[0], *a[1], *a[2]);
    printf("%d %d %d\n", **a, **(a+1), **(a+2));
    printf("%d %d %d\n", *p, *(p+1));
    printf("%d %d %d\n", p[0], p[1]);
    return 0;   
}

//포인터 배열
#include <stdio.h>
int main(){
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int *p[3] = {a[2], a[0], a[1]};
    printf("%d %d %d\n", a[0][0], a[1][0],a[2][0]);
    printf("%d %d %d\n", *a[0], *a[1], *a[2]);
    printf("%d %d %d\n", p[1][0], p[2][0], p[3][0]);
    printf("%d %d %d\n", *p[1], *p[2], *p[3]);
    return 0;
}

//2차원 포인터
#include <stdio.h>
int main(){
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int (*p)[2] = a;
    int (*q)[2] = a+1;
    int *r = a[1];
    int **s = &r;
    printf("%d %d %d\n", a[0][0], a[0][1], a[1][0]);
    printf("%d %d %d\n", p[0][0], p[0][1], p[1][0]);   
    printf("%d %d %d\n", q[0][0], q[0][1], q[1][0]);
    printf("%d %d %d\n", r[-1], r[0], r[1]) ;
    printf("%d %d %d\n", (*(s-1)), (*(*s)), (*(*s)+1));
    return 0;
}