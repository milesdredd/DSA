#include<iostream>
using namespace std;

void all_permutations(int *n, int s){
        for (int i = s-1 ; i>0; i--){
            if (n[i]>n[i-1]){
                int t = n[i-1];
                n[i-1]=n[i];
                n[i]=t;
                

                for (int i =0; i < s; i++){
                    cout << n[i] << " ";
                }
                cout<< endl;


                all_permutations(n,s);
            }
        }
}

int main(){

   int n[]={1,2,3,4,5};
   all_permutations(n,sizeof(n)/4);

   










return 0;
}
