#include "logic.h"

int main() {
	int matrix[SIZE][SIZE];
	int size;

	cout << "Imput size of square matrix: ";
	cin >> size;

	init(matrix, size, 0, 100);
	cout << "Matrix:\n" << convert(matrix, size);

	cout << "Sum matrix elements up main diagonale: "
		 << sum_elements_down_main_deagonale(matrix, size) << endl;


	system("pause");
		
	return 0;
}