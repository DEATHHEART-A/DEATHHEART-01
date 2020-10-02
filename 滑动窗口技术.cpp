#include<iostream>
using namespace std;
int a[100005],s[10005];
int main(){
	int n,m;
	cin>>n>>m;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(s[a[i]]==0) cnt++;
		s[a[i]]++;
	}
	int ans=cnt;
	for(int i=m+1;i<=n;i++){
		if(s[a[i]]==0) cnt++;
		s[a[i]]++;
		s[a[i-m]]--;
		if(s[a[i-m]]==0) cnt--;
		ans=max(ans,cnt);
	}
	cout<<ans;
	return 0;
}
