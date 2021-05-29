#include <stdio.h>
#include <windows.h>

void Hanoi(int n, char a,char b,char c);
void Move(int n, char a, char b);

int count;
int main()
{
    int n=5;
    printf("汉诺塔的层数:\n");
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}
void Hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        Move(n, a, c);
    }
    else
    {
        Hanoi(n - 1, a, c, b);
        Move(n, a, c);
        Hanoi(n - 1, b, a, c);
    }
}
void Move(int n, char a, char b)
{
    count++;
    printf("第%d次移动 Move %d: Move from %c to %c !\n",count,n,a,b);
}