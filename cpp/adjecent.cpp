#include<iostream>
#include<string>
using namespace std;


void removeDuplicate(string &word){
	for (int i=0;i<word.length();){
		int same = 0;
		if (word[i]==word[i+1]){
			cout<< "FOUND 1\n";
			same++;
			for ( int r = i+2;word[i]==word[r];r++){
				same++;
				cout<<"found 1 more\n";
			}
			cout<<"erasing...\n";
			word.erase(i,same+1);
			i=0;
			cout<<"now it's "<<  word<< endl;
		}
		else {
			cout<<"ignoring "<<i<< " ... \n";
			i++;
		}
	}
}
			
			


int main(){
	string word ;
	cout<<"word :";
	cin >> word;
	removeDuplicate(word);

	cout<< word;

	cout<< endl;
	return 0;
}
