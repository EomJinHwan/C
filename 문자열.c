//1차원 배열과 문자열
#include <stdio.h>
int main(){
    char a[8] = "Hello";
    printf("%s\n", a);
    printf("%s\n", a+1);
    a[3] = '\0';
    printf("%s\n", a+1);
    printf("%s]n", a+4);
    return 0;
}

//2차원 배열과 문자열
#include <stdio.h>
int main(){
    char a[2][8] = {"Hello", "Soojebi"};
    printf("%s\n", a[0]);
    printf("%s\n", a[1]);
    printf("%s\n", a[1]+3);
    a[1][4] = '\0';
    printf("%s\n", a[1]+2);
    return 0;
}

//문자열 함수
//strcat
#include <stdio.h>
#include <string.h>
int main(){
    char a[20] = "Hello";
    char b[10] = "Soojebi";
    char c[20] = "Hello";
    strcat(a, b);
    printf("%s %s\n", a, b);
    strncat(c, b, 3);
    printf("%s %s", c, b);
    return 0;
}

//strcpy
#include <stdio.h>
#include <string.h>
int main(){
    char a[20] = "Hello";
    char b[10] = "Soojebi";
    char c[20] = "Hello";
    strcpy(a, b);
    printf("%s %s\n", a, b);
    strncpy(c, b, 3);
    printf("%s %s", c, b);
    return 0;
}

//strcmp
#include <stdio.h>
#include <string.h>
int main(){
    char a[10] = "HelloA";
    char b[10] = "HelloB";
    int c = strcmp(a, b);
    printf("%d\n", c);
    c = strncmp (a, b, 3);
    printf("%d", c);
    return 0;    
}

//strlen
#include <stdio.h>
#include <string.h>
int main(){
    char a[20] = "Hello";
    int c = strlen(a);
    printf("%d", c);
    return 0;  
}

//strrev
#include <stdio.h>
#include <string.h>
int main(){
    char a[20] = "Hello";
    strrev(a);
    printf("%s", a);
    return 0;   
}

//strchr
#include <stdio.h>
#include <string.h>
int main(){
    char a[20] = "Hello";
    char* p = strchr(a, 'l');
    printf("%s", p);
    return 0;    
}