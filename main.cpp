/**
* Created and managed by M Faizan Khan
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/**
 * Its a function 1 which consist of x^2
 */
double f1(double a){
    return a*a;
}

/**
 * Its a function 1 which consist of x^3
 */

double f2(double a){
    return a*a*a;
}

/**
 * function of
 *
 * if(x<1) return 1;
 * if(x>=1 && x<=4)  retrun x;
 * if(x>4) retrun 4;
 *
 */
double f3(double a){
    if(a<1){
        return 1;
    }else if(a<=4)
    {
        return a;
    }else
        return 4;
}


/**
* Mid point rule
*
* It consist of a , b , n
* where a is lower bound , b is upper bound and n you know waht is n
*
* first I calculate h = (b-a)/n
*
* then for every xk* =  ( funct( a +  h*k + h/2  ) )     //this one is precisely for midpoint
*
*/


double Midpoint(double (*foo)(double),double a, double b, int n){
    double h = (b-a)/n;
    double total = 0;

    for(int k=0;k<n ; k++){
        double temp =  (*foo)( a+ (h*k) + h/2);
        total+= temp ;
    }
    //cout<<total<<endl<<h<<endl;
    return (h * total);
}



int main()
{
    double a=0,b;
    int n;

    //Write english here
    cin>>a>>b;

    //write english here
    cin>>n;

    //For f1
    cout<<Midpoint(&f1,a,b,n)<<endl;

    //For f2
    cout<<Midpoint(&f2,a,b,n)<<endl;

    //For f3
    cout<<Midpoint(&f3,a,b,n)<<endl;

    //For sine
    cout<<Midpoint(&sin,a,b,n)<<endl;

    return 0;
}
