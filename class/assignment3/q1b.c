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
    printf("b) Enter \"n\" for the nth fibonacci term : ");
    scanf("%d", &r);
    int fibo ;
    int nth= 1;
    if (r == 0 ) printf(" The 0\'th fibonacci is : 0");
    for (int i = 1; nth <= r ; i++ ) {
        fibo = IsFibo(i);
        if(fibo){
            nth++;
        }
        if ( nth == r){
            printf("the %dth fibonacci term is : %d\n\n",r,fibo);
            break;
        }
    }


}
