

#include<iostream>


void rotate2(int**matrix,int N){
//    if(matrix.size() == 0 || matrix[0].size() != matrix.size()) return false;
    int n =  N;
    std::cout<<n/2;
    for(int  layer = 0;layer<n/2;layer++){
        int first = layer;
        int last = n-1-layer;
        for(int i = first; i< last;i++){

            int offset = i - first;
//            save top
            int top = matrix[first][i];
//            left ->top
            matrix[first][i] = matrix[last - offset][first];
//            bottom to left
            matrix[last-offset][first] = matrix[last][last-offset];
//            right to the bottom
            matrix[last][last-offset]  = matrix[i][last];
//            top to the right
            matrix[i][last] = top;

        }
    }
}



void printMatrix( int ** matrix, int N) {
    for ( int i = 0; i < N; ++i ) {
        for( int j = 0; j < N; ++j ) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


int main() {
    int N;
    std::cout << "Enter N for NxN matrix:";
    std::cin >> N;
    int ** matrix = new int*[N];
    for ( int i = 0; i < N; ++i ) {
        matrix[i] = new int[N];
    }

    for ( int i = 0; i < N; ++i) {
        for ( int j = 0; j < N; ++j ) {
            std::cin >> matrix[i][j];
        }
    }

//    std::cout << "Rotated matrix by 90 (clockwise):\n";
//    rotate1(matrix, N);
//    printMatrix(matrix, N);

    std::cout << "Rotated matrix again by 90(anticlockwise):\n";
    rotate2(matrix, N);
    printMatrix(matrix, N);
    return 0;
}