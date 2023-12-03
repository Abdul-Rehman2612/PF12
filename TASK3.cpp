#include<iostream>
using namespace std;
int nissanCarsnum(int[][5]);
main()
{
    int cars[5][5]={{10,7,12,10,4},{18,11,15,17,2},{23,19,12,16,2},{7,12,0,16,2},{3,5,6,2,1}};
    int nissanCars=nissanCarsnum(cars);
    cout << nissanCars;
}
int nissanCarsnum(int cars[][5])
{
    int nissanCars=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==2)
            {
                nissanCars=nissanCars+cars[i][j];
            }
        }
    }
    return nissanCars;
}