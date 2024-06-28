#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    switch (n)
    {
        case 5000:
            printf("Joty\n");
            break;
        case 2000:
            printf("Farhan\n");
            break;
        default:
            printf("Sami\n");
            break;
    }
    return 0;
}
