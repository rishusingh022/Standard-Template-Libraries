// Problem Constraints: 1 <= N,M <= 30
// 0 <= A[i] <= 100
// Problem Description:
// Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.
// Input Format: First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.
// Sample Input: 3 3
// 3 30 38
// 44 52 54
// 57 60 69
// 62
// Output Format: Print 1 if the element is present in the matrix, else 0.
// Sample Output: 0
// =====Solution=====
#include <iostream>
using namespace std;

void matrixSearch(int **arr, int n , int m, int key) {
    for(int row = 0;row < n;) {
		for(int col=m-1;col>=0 and row < n;) {
			if(arr[row][col] == key) {
				cout<<1;
				return;
			} else if(arr[row][col] > key) {
				col--;
			} else {
				row++;
			}
		}
	}
    cout<<0;
    return ;
}

int main() {
    int n, m;
    cin>>n>>m;
    int **arr = new int*[n];
    for(int i=0;i<n;i++) {
        arr[i]=new int[m];
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    int key;
    cin>>key;
    matrixSearch(arr, n, m, key);
}
