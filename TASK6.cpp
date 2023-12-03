#include<iostream>
using namespace std;
string battelShip(string[5][5],string);
main()
{
    string attack[5][5]={
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "."},
        };
    string coordinates;
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): " ;
    cin >> coordinates;
    cout << "Result: " <<battelShip(attack,coordinates);
}
string battelShip(string element[5][5],string coordinates)
{
    int i=coordinates[0]-'A';
    int j=coordinates[1]-'1';
    if(element[i][j]==".")
    {
        return "splash";
    }
    else if(element[i][j]=="*")
    {
        return "BOOM";
    }
}