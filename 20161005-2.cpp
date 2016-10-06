#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,m;
	cout<<"輸入衣服件數 ";
	cin>>a;
	m=a*95;
	if(m>300){
		cout<<setprecision(2)<<fixed<<m*0.85;
	}
	else cout<<m;
	
}
