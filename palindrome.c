#include <stdio.h>
#include <string.h> 
int palindrome(int n){
   int originalInteger = n;
   int reversedInteger = 0;
   int remainder;
   while(n!=0)
   {
       remainder = n%10;
       reversedInteger = reversedInteger * 10 + remainder;
       n = n/10;
   }
   if (originalInteger == reversedInteger)
        return 1;
    else 
        return 0;
}


int main() {
	//code
    
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (palindrome(n) == 1)
        printf("Yes\n");
    else if (palindrome(n) == 0)
        printf("No\n");
	return 0;
}