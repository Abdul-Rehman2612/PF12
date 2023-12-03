#include<iostream>
using namespace std;
void identityMatrix(int[3][3]);
main()
{
    cout << "Enter the elements of the matrix: " << endl;
    int element[3][3];
    int i=0;
    while(i<3)
    {
        for(int j=0;j<3;j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> element[i][j];
        }
        i++;
    }
    identityMatrix(element);
}
void identityMatrix(int element[3][3])
{
    cout << "The matrix you entered is: " << endl;
    int count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << element[i][j] << "\t";
            if(i==j && element[i][j]==1)
            {
                count++;
            }
            else if(element[i][j]!=0 && i!=j)
            {
                count--;
            }
        }
        cout << endl;
    }
    if(count==3)
    {
        cout << "The entered matrix is an identity matrix.";
    }
    else
    {
        cout << "The entered matrix is NOT an identity matrix.";
    }
}