#include<stdio.h>
#include<vector>
using namespace std;
int slargest(vector<int> a,int n){
    int largest=a[0];
    int sec=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            sec=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>sec){
            sec=a[i];
        }
    }
    return sec;
}
int ssmallest(vector<int> a,int n){
    int smallest=a[0];
    int sec=8000;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            sec=smallest;
            smallest=a[i];
        }
        else if(a[i]>smallest && a[i]<sec){
            sec=a[i];
        }
    }
    return sec;
}



vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slarge=slargest(a,n);
    int ssmall=ssmallest(a,n);
    return {slarge,ssmall};
}
