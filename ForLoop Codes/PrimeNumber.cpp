#include <iostream>
using namespace std;

int main() {
   
int number;
cout<<"Enter number : ";
cin>>number;

for(int i = 2;i<number;i++){
  
       if(number%i==0){
           cout<<"Not Prime For : "<<i<<endl;
           break;
       }else{
           cout<<"Prime Number";
           break;
       }
  

}
    return 0;
}