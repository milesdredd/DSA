#include<stdio.h>
int IsFibo(int n ){
    for(int i = 0,j=1;i<=n;j+=i){
        if (n== i ) return i;
        else if (n == j ) return j;
        else {
            i = i + j ;
            if (n == i ) return i;
        }
    }
    return 0;
}



int main(){

    int r ;
    printf("Range to print fibonacci till : ");
    scanf("%d",&r);
    printf( " a) Fibonacci series upto : %d\n\n", r);
    printf("0");
    for (int i = 1; i<=r ; i++){
        int fibo= IsFibo(i);
        if (fibo) {
            printf(", %d",fibo);
            }
    }
    printf("\n");
    
    







    return 0;
}
