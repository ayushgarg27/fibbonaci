#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    for(int i=1; i<=n; i++){
        printf("%d", a);
        printf(" ");
        int c = a + b;
        a = b;
        b = c;
    }
}