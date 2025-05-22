#include<stdio.h>

int main(){
    int ch;
    printf("Enter the character :");
    scanf("%c",&ch);
    int v[10]= {'a','e','i','o','u','A','E','I','O','U'};
    int w=0;
    for (int i = 0 ; i<10;i++){
        if ((int)ch== v[i]){

            w= 1;
            break;
        }
    }
    (w)? printf("\n it's Vowel \n"):printf("\n it's Consonant\n");


}
