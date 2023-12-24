
#include <iostream> // тестовый файл для проверки правильной работы кода, сваленного в одну кучу
using namespace std;
int max(int a, int b){
    if(a<b){return(b);}else{return(a);}
}
int main(){


int a = 20;
int b = 21;


cout<<"max is: "<<max(a,b)<<endl;

    return 0;
}

