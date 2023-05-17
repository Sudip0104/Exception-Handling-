// Print the Maximum Value Among Addition,Substraction,Multiplication & Division
//of two numbers using Exception handling

#include<iostream>
using namespace std;

class solution{
    public:
          int maxValue(int A,int B){
            try{
                if(B==0){
                throw 0;
            }
            else{
                return max(A*B,max(A+B,max(A-B,A/B)));
            }
          }
          catch(int x){
            return 999999;
          }
};
};

int main(){
    int n;
    cout<<"Enter Value of n:"<<endl;
    cin>>n;
    while(n--){
        int A;
        int B;
        cout<<"Enter the Numbers:"<<endl;
        cin>>A>>B;
        solution obj;
        int ans= obj.maxValue(A,B);
        if(ans==999999){
            cout<<"infinity"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
