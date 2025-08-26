#include <stdio.h>

int main() {
    int n;
    int a=0;

    printf("Enter number:");
    scanf("%d", &n);

    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            a=1;
            break;
        }
        
    }
    if (n==1)printf("1 Is neither prime nor coposite.\n");
    else if(a==1)printf("%d is not a prime no.\n",n);
    else printf("%d is a prime no.\n",n);
    
    return 0;
}
