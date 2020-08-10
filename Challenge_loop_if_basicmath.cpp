#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    cout<<"Sa Was Dee Krabbbb Cho Rom Khon Chob WHee\n";

    int num1,num2,square_sum=0;
    cin>>num1>>num2;

    if(num1<num2){
        for(int i=num1;i<=num2;i++){
            cout<<i<<" ";
            square_sum+=i*i;
        }
    }else{
        for(int i=num1;i>=num2;i--){
            cout<<i<<" ";
            square_sum+=i*i;
        }
    }
    cout<<endl;

    float diff=abs(num1-num2)+1,xbar,sd;

    (num1<num2)?xbar=num1+0.5*(diff-1):xbar=num2+0.5*(diff-1);
    cout<<"Average = "<<xbar<<endl;

    cout<<setprecision(3);
    cout<<"SD = "<<sqrt((square_sum)/diff-xbar*xbar)<<endl;

    return 0;

}
