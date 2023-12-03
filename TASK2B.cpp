#include<iostream>
using namespace std;
int redcarsnum(int[][5]);
main()
{
    int cars[5][5]={{10,7,12,10,4},{18,11,15,17,2},{23,19,12,16,2},{7,12,0,16,2},{3,5,6,2,1}};
    int redCars=redcarsnum(cars);
    cout << redCars;
}
int redcarsnum(int cars[][5])
{
    int redCars=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==0)
            {
                redCars=redCars+cars[i][j];
                break;
            }
        }
    }
    return redCars;
}