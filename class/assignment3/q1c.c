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
    return -1;
}



int main(){
    int r ;
    printf("enter the range to print non-Fibonacci till range ");
    scanf("%d",&r);

    for(int i = 1 ; i <= r ; i++ ){
        if (IsFibo(i)==-1)printf("%d ",i);

    }
    printf("\n");

}
