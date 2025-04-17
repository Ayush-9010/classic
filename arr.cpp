#include<iostream>

using namespace std;

int main(){
    //array example
    int marks[] = {23, 45, 56, 89};
    int mathMarks[4];
    mathMarks[0] = 6516;  
    mathMarks[1] = 784;
    mathMarks[2] = 765;
    mathMarks[3] = 5384;    

    cout<<"This are math marks:"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    //You can change the value of array
    marks[2] = 222;
    cout<<"These are marks:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    return 0;
}