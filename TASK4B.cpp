#include<iostream>
using namespace std;
int converter(int[][5],string [],string);
int colorIndex(string colorCars[],string color);
main()
{
    string color;
    int cars[5][5]={{10,7,12,10,4},{18,11,15,17,2},{23,19,12,16,2},{7,12,0,16,2},{3,5,6,2,1}};
    string colorCars[5]={"Red","Black","Brown","Blue","Gray"};
    cout << "Enter the color of cars your want to check: ";
    cin >> color;
    int num=converter(cars,colorCars,color);
    cout << num;
}
int converter(int cars[][5],string colorCars[],string color)
{
    int idx=colorIndex(colorCars,color);
    int carSum=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==idx)
            {
                carSum=carSum+cars[i][j];
            }
        }
    }
    return carSum;
}
int colorIndex(string colorCars[],string color)
{
    for(int i=0;i<5;i++)
    {
        if(colorCars[i]==color)
        {
            return i;
        }
    }
}