#include<bits/stdc++.h>
using namespace std;
//void print1(int n){
//	for(int i=0;i<n;i++){
//	
//		for(int j=0;j<n ;j++){
//		
//			cout<<"*";
//			
//		}
//		cout<<endl;
//	}
// 
//}
//int main(){
//	int n=5;
//	print1(n);
//}

//void print1(int n){
//	for(int i=0;i<n;i++){
//	
//		for(int j=0;j<=i ;j++){
//		
//			cout<<"*";
//			
//		}
//		cout<<endl;
//	}
// 
//}
//int main(){
//	int n=5;
//	print1(n);
//}

//void print1(int n){
//	for(int i=1;i<=n;i++){
//	
//		for(int j=1;j<=i ;j++){
//		
//			cout<<j<< " ";
//			
//		}
//		cout<<endl;
//	}
// 
//}
//int main(){
//	int n=5;
//	print1(n);
//}

//void print1(int n){
//	for(int i=1;i<=n;i++){
//	
//		for(int j=1;j<=i ;j++){
//		
//			cout<<i<< " ";
//			
//		}
//		cout<<endl;
//	}
// 
//}
//int main(){
//	int n=5;
//	print1(n);
//}
void print1(int n){
	for(int i=1;i<=n;i++){
	
		for(int j=1;j<=n-i+1;j++){
		
			cout<<"*";
			
		}
		cout<<endl;
	}
 
}
int main(){
	int n=5;
	print1(n);
}
