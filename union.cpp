#include <stdio.h>
union integer
{
    char c;
    short s;
    int i;
    long l;
};
 
int main()
{
	union integer u1,u2,u3,u4;
    char c1;
    short s1;
    int i1;
    long l1;
    printf("please Input: char short int long\n");
    scanf("%c %d %d %ld", &c1, &s1, &i1, &l1);
    u1.c = c1;
    u2.s = s1;
    u3.i = i1;
    u4.l = l1;
    printf("U1-> %c %d %d %ld\n", u1.c, u1.s, u1.i, u1.l);
    printf("U2-> %c %d %d %ld\n", u2.c, u2.s, u2.i, u2.l);
    printf("U3-> %c %d %d %ld\n", u3.c, u3.s, u3.i, u3.l);
    printf("U4-> %c %d %d %ld\n", u4.c, u4.s, u4.i, u4.l);
    return 0;
}