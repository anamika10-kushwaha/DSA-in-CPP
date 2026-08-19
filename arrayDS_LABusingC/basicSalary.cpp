#include<iostream>
#include <cmath>
using namespace std;
int main(){
    float basicSal;char grade;
    cout<<"enter the basic salary=" ;
    cin>>basicSal;
    cout<<"enter the grade=";
    cin>>grade;
    float HRA=0.2*basicSal;//20
    float DA=0.5*basicSal;//50
    float PF=0.11*basicSal;//11
    int allow;
    if(grade='A'){
        allow=1700;//1700+170=1870-11=1859
    }
    else if(grade='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    float totalSalary=basicSal+HRA+DA+allow-PF;
    cout<<"total salary="<<round(totalSalary);
    cout<<endl;
    return 0;
}