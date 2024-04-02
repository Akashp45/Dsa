#include<iostream>
using namespace std;

int division(int divident, int divisor){
    int s = 0;
    int e = divident;
    int ans;
    int mid = s + (e -s)/2;

    while(s<=e){
        if(mid * divisor <= divident){
            ans = mid;
            s = mid+1;
        }else{
            e = mid -1;
        }
        mid = s + (e -s)/2;
    }
    return ans;
}

int main(){

    int divident = -36;
    int divisor = 7;

    int ans = division(abs(divident), abs(divisor));

    // now we need to deside sign
    if((divident >0 && divisor < 0)  || (divident < 0 && divisor > 0)){
        ans = -ans;
    }

    cout << "division is: "<< ans;

    
    return 0;
}