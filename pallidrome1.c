#include<stdio.h>
void main(){
int n,r;
int rev=0;
printf("Enter a no.: ");
scanf("%d",&n);
int temp=n;
while(n!=0){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}

if(temp==rev){
    printf("%d is a palindrome no.",rev);
}
else{
    printf("Not a pallidrome");
}
}