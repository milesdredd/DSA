#include<iostream>
#include<vector>
using namespace std;
int howManyPrime(int n){
	int primes = 1;
	vector<bool> prime(n+1,true);
	prime[0]=prime[1]=false;

	for(int i = 2; i*i < n ; i++){
		if (prime[i]==true){
			primes++;
			for ( int t = i*i;t < n; t+=i){
				prime[t]=false;
			}
		}
	}

	return primes;

}

int main(){

		
	int n ;
	cout<< "till what : ";
	cin >> n;
	int ans = howManyPrime(n);
	cout<<"total "<<ans<<" prime numbers within "<<n<< endl;



	cout<< endl;
	return 0;
}
