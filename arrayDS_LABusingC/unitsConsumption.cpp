#include<iostream>
using namespace std;
int main(){
    int unitConsume,totalBill,bill,extraBill,charge;
    cout<<"enter the units of consumption=";
    cin>>unitConsume;//200
    if(unitConsume<=200){
        charge=0;
    }
    else if(unitConsume>=201 && unitConsume<=400){
        charge=unitConsume*6;
    }
    else if(unitConsume>=401 && unitConsume<=600){
        charge=unitConsume*7;
    }
    else if(unitConsume>=601){
        charge=unitConsume*8;
    }
    bill=220+charge;//220
    extraBill=0.05*bill;//11
    totalBill=bill+extraBill;
    cout<<"total bill="<<totalBill<<endl;//231
    return 0;
}