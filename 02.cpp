#include<bits/stdc++.h>
using namespace std;

int main(){
    float theta1 = 65.0;
    int m1 = 3;
    float lembda1 = 530;
    int m2 = 2;
    float lembda2 = 700;
    float theta2 = 0;

    float value1 = ((m2*lembda2)/(m1*lembda1));
    float angle1 = (sin(theta1*(3.1416/180)));
    float value2 = angle1*value1;
    theta2 = ((asin(value2))*(180/3.1416));
    printf("The second-order bright spot for red light(of wavelength 700nm) will be at %f degree angle.\n", theta2);
    return 0;
}
