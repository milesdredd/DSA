#include<iostream>
#include<vector>

using namespace std;

void find (const vector<vector<int>>& matrix,int target){
	int row = matrix.size();
	int col = matrix[0].size();

	int start = 0;
	int end = (row * col)-1;
	
	
	while ( start<= end ){
		int mid = start + ( end - start ) /2 ;
		int element = matrix[mid/col][mid%col];
		if ( element == target){
			cout << "Present at row " << 1+(mid / col) << " and col " << 1+(mid % col) << "\n";
            return;
		}
		if (element < target){
			start = mid + 1;
		}
		else{
			end = mid -1;

		}
		mid = start + (end - start)/2;
	}
}


int main(){

	
	vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };


	//printing 
	for ( int i = 0 ;i < matrix.size() ;i++){
		for (int j = 0 ; j < matrix[0].size() ; j++){
			cout<< matrix[i][j]<< "\t ";
		}
		cout<< endl;
	}
	//Binary searching
	int num;
	cout<< " find ? : ";

	cin >> num;
	find(matrix,num); 



	cout<< endl;
	return 0;
}
