#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10];
    int r1, c1, r2, c2;

    // Get dimensions of both matrices
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Matrix multiplication rule: Columns of 1st must equal Rows of 2nd
    if (c1 != r2)
    {
        cout << "Matrices cannot be multiplied!" << endl;
        return 0;
    }

    // 1. Input elements for Matrix A
    cout << endl << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }

    // 2. Input elements for Matrix B
    cout << endl << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }

    // 3. Perform Matrix Multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mult[i][j] = 0; // Reset accumulator for result cell [i][j]
            for (int k = 0; k < c1; k++)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 4. Display Result Matrix
    cout << endl << "Output Matrix:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}