#include<iostream>
using namespace std;
void printCars(int[][5]);
main()
{
    int cars[5][5]={{10,7,12,10,4},{18,11,15,17,2},{23,19,12,16,2},{7,12,0,16,2},{3,5,6,2,1}};
    printCars(cars);
}
void printCars(int cars[][5])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==1 && j==3)
            {
                cout << cars[i][j] << "\t";
            }
        }
    }
}