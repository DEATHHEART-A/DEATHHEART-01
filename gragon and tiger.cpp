#include<iostream>
using namespace std;
	long long n,p1,s1,s2,m,a[200005];
int main(){
	long long ans=-1,sum1=0,sum2=0,min=1e19,tmp=0,t1=0,t2=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m>>p1>>s1>>s2;
	a[p1]+=s1;
	for(int i=1;i<=n;i++){
		if(i<m)sum1+=(m-i)*a[i];
		else if(i>m) sum2+=(i-m)*a[i];
	}
	for(int i=1;i<=n;i++){
		t1=sum1;
		t2=sum2;
		if(i<m) t1+=(m-i)*s2;
		else if(i>m) t2+=(i-m)*s2;
		tmp=(t1>t2?(t1-t2):(t2-t1));
		if(tmp<min){
			min=tmp;
			ans=i;
		}
	}
	cout<<ans;
	return 0;
}
 
