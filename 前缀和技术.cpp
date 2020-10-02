#include<iostream>
using namespace std;
int a[100005],s[100005];
int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		s[i]=s[i-1]+a[i];
	} 
	cin>>m;
	int l,r;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<endl;
	}
	return 0;
} 
