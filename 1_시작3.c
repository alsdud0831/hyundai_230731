// 1_시작3.c
#include <stdio.h>

// * 표준 입출력 장치(버퍼링)
// 표준 입력 장치(키보드) - stdin
// 표준 출력 장치(모니터) - stdout
// 표준 에러 장치(모니터) - stderr : 버퍼링 X

// * printf -> stdout
// * scanf  <- stdin

int main(void)
{
    // printf("Hello");
    fprintf(stderr, "Hello");
    while (1) {
    }

    return 0;
}

#if 0
int main(void)
{
    int a;
    int b;
    int c;

    scanf("%d", &a);
    printf("%d\n", a);

    scanf("%d", &b);
    printf("%d\n", b);

    scanf("%d", &c);
    printf("%d\n", c);

    return 0;
}
#endif

#if 0
int main(void)
{
    printf("H");
    printf("E");
    printf("L");
    printf("L");
    printf("O");
    printf("\n");

    while (1) {
    }

    return 0;
}
#endif
