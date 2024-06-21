#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[10]={2,3,4};
	cout<<"address of first memory block is"<< arr <<endl;
	cout<< arr[0]<< endl;
	cout<<"address of first memory block is"<< &arr[0] <<endl;
	cout<< "4th"<< *arr<<endl;
}
