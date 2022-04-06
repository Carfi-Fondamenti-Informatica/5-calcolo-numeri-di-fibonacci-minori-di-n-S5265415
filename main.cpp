#include <iostream>
using namespace std;

int main() {
    int n;
    int a=1,b=0,c;
    std::cin>>n;
    std::cout<<"1"<< std::endl;
    while(n>=(a+b)){
        c= a+b;
        std::cout<<c<<std::endl;
        b=a;
        a=c;
    }
   return 0;
}
