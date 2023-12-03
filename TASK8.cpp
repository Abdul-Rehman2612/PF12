#include<iostream>
#include<conio.h>
using namespace std;
void swapColumn(int[][5],int size);
main()
{
    int size;
    cout << "Enter row size: ";
    cin >> size;

    cout << "Enter the elements of the matrix: " << endl;
    int elements[size][5];
    int i=0;
    while(i<size)
    {
        for(int j=0;j<5;j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]:";
            cin >> elements[i][j];
        }
        i++;
    }
    cout << endl;
    cout << "Original Matrix: " << endl;
    swapColumn(elements,size);
}
void swapColumn(int elements[][5],int size)
{
    int swapElement[size];
    int tempElement[size];
    int sum=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout << elements[i][j] << " ";
        }
        cout << endl;
    }
    
    int swapColumnindex=0;
    for(int i=0;i<5;i++)
    {
        int sumCol=0;
        for(int j=0;j<size;j++)
        {
            sumCol=sumCol+elements[j][i];
            if(i==0)
            {
                tempElement[j]=elements[j][i];
            }
        }
        if(sum<sumCol)
        {
            swapColumnindex=i;
            sum=sumCol;
            for(int k=0;k<size;k++)
            {
                swapElement[k]=elements[k][i];
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        elements[i][0]=swapElement[i];
        elements[i][swapColumnindex]=tempElement[i];
    }
    cout << endl << "Matrix after largest column moved to first: " << endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout << elements[i][j] << " ";
        }
        cout << endl;
    }
}
