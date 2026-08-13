#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number of students: ";
    cin>>n;

    int b;
    cout<<"Enter total budget: ";
    cin>>b;
    
    int scholars[n];
    cout<<"Enter scholarship amount of each student : "<<endl;
    for(int i=0;i<n;i++){
        cin>>scholars[i];
    }

    sort(scholars, scholars + n);

    int count = 0;
    for (int i=0;i<n;i++){
        if( scholars[i]< b){
            b -= scholars[i];
            count ++;
        }
        else{
            break;
        }
    }

    cout<<"Max number of students : "<<count;

    return 0;
}





