#include<bits/stdc++.h>
using namespace std;
#define PI 3.1416

int main()
{
    double lembda, m;
    double a[3];
    printf("Enter value of lembda: ");
    scanf("%lf", &lembda);
    if((lembda>=380)&&(lembda<=750))
    {
        printf("Enter value of m: ");
        scanf("%lf", &m);
        double value[3];
        for(int i=0; i<3; i++)
        {
            printf("Enter value of a[%d]: ", i+1);
            scanf("%lf", &a[i]);
            double multiply = ((m*lembda*0.000000001)/(a[i]*0.000001));
            double inverse = asin(multiply);
            double theta = ((inverse*180)/PI);
            value[i]= theta;
        }
        if((value[0]>value[1])&&(value[0]>value[2]))
        {
            cout <<"a[1] = "<<a[0] <<" bent the light most" << endl;
        }
        else if((value[1]>value[0])&&(value[1]>value[2]))
        {
            cout <<"a[2] = "<< a[1] <<" bent the light most" << endl;
        }
        else if((value[2]>value[0])&&(value[2]>value[1]))
        {
            cout <<"a[3] = "<< a[2] <<" bent the light most" << endl;
        }
    }
    else
    {
        cout << "Out of the range. Please enter a valid number." << endl;
    }
}
