#include<bits/stdc++.h>
using namespace std;
int main(){
	int age =43;
//	if(age>18){
//		cout<<"not eligible for job";
//		
	if(age>=18 && age<=54){
		cout<<"eligible for job";
	}else if(age>=54 && age<=76){
		cout<<"eligible for job,but retirnment soon";
		
	}if(age>=80){
	cout<<"retirnment time";
}
}
