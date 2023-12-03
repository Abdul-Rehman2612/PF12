#include<iostream>
using namespace std;
int printSum(int[][3],int);
main()
{
    int size;
    cout << "Enter row size: ";
    cin >> size;

    cout << "Enter the elements of the matrix: " << endl;
    int element[size][3];
    int i=0;
    while(i<size)
    {
        for(int j=0;j<3;j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]:";
            cin >> element[i][j];
        }
        i++;
    }
    int sum=printSum(element,size);
    cout << "The sum of elements in the matrix is: " <<sum;
}
int printSum(int element[][3],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+element[i][j];
        }
        cout << endl;
    }
    return sum;
}