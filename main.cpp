//
// Created by 李冬阳 on 2023/5/10.
//
#include <iostream>
using namespace std;
class CVehicle{
protected:
int max_speed;
int speed;
int weight;
public:
    CVehicle(int a,int b,int c){
        max_speed=a;
        speed=b;
        weight=c;
    }
    void display(){
        cout<<max_speed<<" "<<speed<<" "<<weight<<endl;
    }
};
class CBicycle:virtual public CVehicle{
protected:
    int height;
public:
    CBicycle(int a,int b,int c,int d): CVehicle(a,b,c){
        height=d;
    }
    void display(){
        cout<<max_speed<<" "<<speed<<" "<<weight<<" "<<height<<endl;
    }

};
class CMotocar:virtual public CVehicle{
protected:
    int seat_num;
public:
    CMotocar(int a,int b,int c,int d): CVehicle(a,b,c){
        seat_num=d;
    }
    void display(){
        cout<<max_speed<<" "<<speed<<" "<<weight<<" "<<seat_num<<endl;
    }
};
class  CMotocycle:public CBicycle,public CMotocar{
public:
    CMotocycle(int a,int b,int c,int d,int e): CVehicle(a,b,c), CBicycle(a,b,c,d), CMotocar(a,b,c,e){}
    void display(){
        cout<<max_speed<<" "<<speed<<" "<<weight<<" "<<height<<" "<<seat_num<<endl;
    }
};
int main(){
CVehicle A(1,2,3);
A.display();
CBicycle B(1,2,3,4);
B.display();
CMotocar C(1,2,3,5);
C.display();
CMotocycle D(1,2,3,4,5);
D.display();
}
