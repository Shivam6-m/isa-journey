//First, imagine we have a matrix with 4 rows and 4 columns, filled column-wise from 1 to 16.
// We start with column 0. Since it’s even, we go top to bottom, picking 1, 2, 3, 4. Next, column 1 is odd, 
//so we go bottom to top, picking 8, 7, 6, 5. Then column 2 is even again, so top to bottom: 9, 10, 11, 12.
// Finally,
// column 3 is odd, so bottom to top: 16, 15, 14, 13. In this dry run, we’ve followed each step of the loop, 
//and we can confirm the final wave order is exactly what we expected!
#include <iostream>
#include <vector>
using namespace std;
vector<int> pickNWave(vector<vector<int>>& mat, int N){

 int rows = mat.size();
 int cols = mat[0].size();
 vector<int> ans;
 int count = 0;
 for(int col = 0; col < cols && count < N; col++)
    {
        // Even column =Top to Bottom
 if(col % 2 == 0){
    for(int row = 0; row < rows && count < N; row++){
         ans.push_back(mat[row][col]);
            count++;
            }
        }
     // Odd column = Bottom to Top
 else{
        
     for(int row = rows-1; row >= 0 && count < N; row--){
         ans.push_back(mat[row][col]);
         count++;
            }
        }
    }
    return ans;
}
int main(){
vector<vector<int>> mat = {
{1, 5, 9, 13},
{2, 6, 10,14},
 {3, 7, 11,15},
{4, 8, 12,16}
    };
int N;
cout << "Enter how many numbers you want: ";
 cin >> N;
vector<int> result = pickNWave(mat, N);
cout << "Picked Numbers: ";
 for(int x : result)
   cout << x << " ";
    return 0;
}