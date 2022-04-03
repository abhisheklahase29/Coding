#include<iostream>
using namespace std;
class S1{
  int va1 ;
public:
 void getdata( int a){
   cout<<"Enter Value 1:- ";
   cin>>a;
   va1 = a;
 }
 void setdata(){
   cout<<"Value1 :- "<<va1 <<endl;
 }
 friend void swap(class S1 &,class S2 &);
};
class S2
{
 int va2;
 public:
  void getdata(int a){
    cout<<"Enter Value2:- ";
    cin>>a;
    va2 = a;
  }
  void setdata(){
    cout<<"Value2 :- "<<va2<<endl;
  }
  friend void swap(class S1 &,class S2 &);
};
 
void swap(class S1 &x, class S2 &y){
int temp = x.va1;
x.va1 = y.va2;
y.va2 = temp;
}

int main()
{
  S1 c1;
  S2 c2;
  c1.getdata(10);
  c2.getdata(20);
  swap(c1,c2);
  cout<<"Values After Swapping"<<endl;
  c1.setdata();
  c2.setdata();
  
}