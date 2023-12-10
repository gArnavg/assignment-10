//Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter the numbers ";
    cin >> x >> y;
    int *ptrX, *ptrY;
    ptrX = &x;
    ptrY = &y;
    int prdct;
    int *ptrprdct = &prdct;
    *ptrprdct = (*ptrX) * (*ptrY);
    cout<<"The product is " << *ptrprdct << endl;
    return 0;
}