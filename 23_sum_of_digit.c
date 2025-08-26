//HINT
//1)use % and / operators
//2)ex. 123--> 1+2+3 = 3+2+1
//3) any no%10 ans is last digit of this no ex. 123%10 = 3


#include<stdio.h>
int main(){
    int n;
    printf("Enter No. :");
    scanf("%d",&n);

    int i=0;
    int lastdigit=0;
    while (n!=0)
    {
         lastdigit=n%10;
         i=i+lastdigit;
         n=n/10;
    }
        printf("Sum of digits is %d.",i);

    
    return 0;
}