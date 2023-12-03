#include<iostream>
#include<conio.h>
using namespace std;
int identicalRows(int[][3],int size);
main()
{
    int size;
    cout << "Enter the number of rows for the array: ";
    cin >> size;

    cout << "Enter the elements of the array: " << endl;
    int elements[size][3];
    int i=0;
    while(i<size)
    {
        for(int j=0;j<3;j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> elements[i][j];
        }
        i++;
    }
    cout << "The count of identical rows in the array is: " << identicalRows(elements,size);
    identicalRows(elements,size);
}
int identicalRows(int elements[][3],int size)
{
    int count=0;
    int totalCount=0;
    int tempRow[3]={elements[0][0],elements[0][1],elements[0][2]};
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(tempRow[0]==elements[j][0] && tempRow[1]==elements[j][1] && tempRow[2]==elements[j][2])
            {
                count++;
            }
        }
        if(count>0)
        {
            break;
        }
        else
        {
            for(int k=0;k<3;k++)
            {
                tempRow[k]=elements[i][k];
            }
        }
    }
    if(count==1)
    {
        count=0;
    }
    return count;
}
