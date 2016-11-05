#include <bits/stdc++.h>
using namespace std;

int main(){
	int capacity[99];   //capacity of each course in enum

	for(int i=0;i<99;i++){
		if(i==0 || i==1 || i==2 || i==3 || i==24 || i==30 || i==36 
			|| i==47 || i==55 || i==56 || i==57 || i==58 || i==59 || i==60 
				|| i==63 || i==81 || i==91 || i==92 ) {
			capacity[i]=2;
		}
		else
			capacity[i]=1;
	}

	map <int, vector<int> > preference;
	map <int, vector<int> >::iterator it;
	int numberOfStuds;
	string bakwaas;

	getline(cin,bakwaas);
	cout<<bakwaas<<endl;
	
	cin>>numberOfStuds;
	int i=numberOfStuds;
	while(i--){
		int dr,temp,tmp;
		vector<int> list;

		cin>>dr;
		cin>>temp;
		while(temp--){
			cin>>tmp;
			list.push_back(tmp);
		}
		preference.insert(make_pair(dr,list));
	}

	it = preference.begin();
	int j=0;
	while(it!=preference.end()){
		vector <int> list;
		int n;

		list = it->second;
		n = list.size();

		int ii;
		int flag=0;
		for(ii=0;ii<n;ii++){
			if(capacity[list.at(ii)]){
				capacity[list.at(ii)]--;
				break;
			}
			if(ii==n-1){
				flag=1;
			}
		}
		j++;
		if(flag)
			cout<<"DR : "<<j<<" is NOT allocated any project."<<endl;
		cout<<"DR : "<<j<<" is allocated project number #"<<list.at(ii)<<endl;
		it++;
	}

	return 0;
}