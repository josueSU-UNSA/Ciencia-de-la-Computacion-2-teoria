#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
struct Inner{int i;};
const int NUM_INNER=5;
/*
class Value{
    private:
        Inner *array_;
    public:
        ~Value(){delete[]array_;}
        Value(const Value &val):array_(new Inner[NUM_INNER]){
            for(int i=0;i<NUM_INNER;++i)
                array_[i]=val.array_[i];
        }
        Value &operator=(const Value &val){
            for(int i=0;i<NUM_INNER;i++)
                array_[i]=val.array_[i];
            return *this;
        }
};*/
class Value{
    private:
        Inner *array_;
    public:
        Value():array_(new Inner[NUM_INNER]){}
        ~Value(){delete[] array_;}
        Value(const Value &val)=delete;
        Value &operator=(const Value &val)=delete;
        Value (Value &&val) noexcept: array_(val.array_){
            val.array_=nullptr;
        }
        Value &operator=(Value &&val)noexcept{
            swap(array_.val.array_);
        }
};
int main(){
    vector<int>v1(5,12);
    vector<int>v2=v1;
    v2[3]=6;
    v2[4]=9;
    cout<<v1[3]<<" "<<v1[4]<<endl;
    int i=5;
    int j=i;
    j+=20;
    //cout<<i<<endl;
    getch();
    return 0;
}