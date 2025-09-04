#include <iostream>
#include <cmath>
using namespace std;

int diagonalDifference(int matrix[100][100],int rc)
{
    int primary = 0;
    int secondary = 0;

    for (int k = 0; k < rc; k++)
    {
        primary += matrix[k][k];
        secondary += matrix[k][rc - 1 - k];
    }

    return abs(primary - secondary);
}

int main()
{
    int rc;
    cout << "Enter the size of the square matrix";
    cin >> rc;
    while (rc < 2 || rc > 100)
    {
        cout << "Invalid size. Please enter the size again";
        cin >> rc;
    }

    int matrix[100][100];

    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            cout << "Enter the element of row " << i + 1 << " column " << j + 1 << endl;
            cin >> matrix[i][j];
            while (matrix[i][j] > 100 || matrix[i][j] < -100)
            {
                cout << "Invalid value for this elements. Please enter it again";
                cin >> matrix[i][j];
            }
        }
    }

    cout << "The diagonal difference for give matrix = " << diagonalDifference(matrix,rc);

    return 0;
}
