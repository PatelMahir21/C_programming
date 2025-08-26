// HINTS
//1) use divison operator
//2) if any int/10 last digit is removed but only in computers ex. 19325/10 = 1932

#include<stdio.h>
int main(){
    int n;
    int i=0;
    printf("Enter No. :");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        i++;
    }
        printf("No. of digits are %d.",i);

    
    return 0;
}