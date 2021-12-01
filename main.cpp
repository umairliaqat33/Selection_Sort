#include <iostream>
using namespace std;
#define size 7


int main(){
    int i=0;
    int a[size]={45,9,8,11,4,4,8};
    int los;
    int smallest;
    int j;
    int s;
    while(i<size){
        smallest=a[i];
        los=i;
        j=i+1;
        while (j<size){
            if(a[j]<smallest){
                smallest=a[j];
                los=j;
            }
            j++;
        }
        s=a[i];
        a[i]=a[los];
        a[los]=s;
        i++;
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
}