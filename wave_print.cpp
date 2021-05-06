// Sample Input: 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Output Format: All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).
// Sample Output: 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END
// =====Solution=====
#include <iostream>
using namespace std;
int main() {
    int nRow,nCol;
    std::cin >> nRow >> nCol;
    
    int a[nRow][nCol];
    for (int i = 0; i < nRow; i++) {
        for (int j = 0; j < nCol; j++) {
            std::cin >> a[i][j];
        }
    }
    
    for (int j = 0; j < nCol; j++) {
        if(j&1){
            for (int i = nRow-1; i >= 0; i--) {
                std::cout << a[i][j] << ", ";
            }
        }else{
            for (int i = 0; i < nRow; i++) {
                std::cout << a[i][j] << ", ";
            }
        }
    }
    std::cout << "END" << std::endl;
}