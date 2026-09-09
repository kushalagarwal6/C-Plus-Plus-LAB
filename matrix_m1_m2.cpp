#include <iostream>
using namespace std;

void addition(int A[][10], int B[][10], int r, int c)
{
    int C[10][10];

    cout << "Addition of matrices:\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void subtraction(int A[][10], int B[][10], int r, int c)
{
    int C[10][10];

    cout << "Subtraction of matrices:\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplication(int A[][10], int B[][10], int r1, int c1, int r2, int c2)
{
    int C[10][10] = {0};

    if (c1 != r2)
    {
        cout << "Matrix multiplication is not possible.\n";
        return;
    }

    cout << "Multiplication of matrices:\n";

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int A[][10], int r, int c)
{
    cout << "Transpose of matrix:\n";

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int M1[10][10], M2[10][10];
    int r1, c1, r2, c2;
    int choice;

    cout << "Enter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> M1[i][j];
        }
    }

    cout << "Enter rows and columns of Matrix 2: ";
    cin >> r2 >> c2;

    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> M2[i][j];
        }
    }

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Transpose\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (r1 == r2 && c1 == c2)
                    addition(M1, M2, r1, c1);
                else
                    cout << "Addition is not possible.\n";
                break;

            case 2:
                if (r1 == r2 && c1 == c2)
                    subtraction(M1, M2, r1, c1);
                else
                    cout << "Subtraction is not possible.\n";
                break;

            case 3:
                multiplication(M1, M2, r1, c1, r2, c2);
                break;

            case 4:
                cout << "\nTranspose of Matrix 1:\n";
                transpose(M1, r1, c1);

                cout << "\nTranspose of Matrix 2:\n";
                transpose(M2, r2, c2);
                break;

            case 5:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (choice != 5);

    return 0;
}
