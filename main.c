#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int equal(int n, int s);

int main()
{
    setlocale(LC_ALL, "Rus");
    int N,S;
    printf("¬ведите числа N и S\n");
    scanf("%d%d", &N, &S);

    if (equal(N,S))
        printf("\ntrue");
    else printf("\nfalse");
    return 0;

}
int equal (int n, int s)
{
    if ((n==0 && !s==0) || (s==0 && !n==0) || (n<0 && s>=0) || (s<0 && n>=0)) return 0;

    if (n==s) return 1;
    else s-=n%10;
    n/=10;
    return equal(n,s);
}
