#include <bits/stdc++.h>
using namespace std;

void generateChoices()
{
    int dr,num,i,number,flag,nstu;
    string option;

    ofstream fout;
    ifstream fin;
    fout.open("choices.txt");
    fin.open("choicesActual.txt");

    fin>>nstu;
    fout<<nstu<<endl;

    while(nstu--){
	    fin>>dr;
	    fin>>num;
	    fout<<dr<<" "<<num<<" ";
	    for(i=0;i<num;i++){
	        flag=0;
	        fin>>option;
	    	number = 99; // number of projects
	    	flag=0;
	           if(!option.compare("AB1") || flag) { flag=1; number-- ;}
	           if(!option.compare("AB2") || flag) { flag=1; number-- ;}
	           if(!option.compare("AD1") || flag) { flag=1; number-- ;}
	           if(!option.compare("AD2") || flag) { flag=1; number-- ;}
	           if(!option.compare("AD3") || flag) { flag=1; number-- ;}
	           if(!option.compare("AG1") || flag) { flag=1; number-- ;}
	           if(!option.compare("AG2") || flag) { flag=1; number-- ;}
	           if(!option.compare("AG3") || flag) { flag=1; number-- ;}
	           if(!option.compare("AM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("AM2") || flag) { flag=1; number-- ;}
	           if(!option.compare("AM3") || flag) { flag=1; number-- ;}
	           if(!option.compare("AM4") || flag) { flag=1; number-- ;}
	           if(!option.compare("AM5") || flag) { flag=1; number-- ;}
	           if(!option.compare("BM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("BM2") || flag) { flag=1; number-- ;}
	           if(!option.compare("BM3") || flag) { flag=1; number-- ;}
	           if(!option.compare("BM4") || flag) { flag=1; number-- ;}
	           if(!option.compare("BM5") || flag) { flag=1; number-- ;}
	           if(!option.compare("BM6") || flag) { flag=1; number-- ;}
	           if(!option.compare("BM7") || flag) { flag=1; number-- ;}
	           if(!option.compare("BM8") || flag) { flag=1; number-- ;}
	           if(!option.compare("BM9") || flag) { flag=1; number-- ;}
	           if(!option.compare("CM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("CM2") || flag) { flag=1; number-- ;}
	           if(!option.compare("DM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("DM2") || flag) { flag=1; number-- ;}
	           if(!option.compare("DRC1") || flag) { flag=1; number-- ;}
	           if(!option.compare("DRC2") || flag) { flag=1; number-- ;}
	           if(!option.compare("DRC3") || flag) { flag=1; number-- ;}
	           if(!option.compare("DRC4") || flag) { flag=1; number-- ;}
	           if(!option.compare("DSM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("JM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("JM2") || flag) { flag=1; number-- ;}
	           if(!option.compare("JM3") || flag) { flag=1; number-- ;}
	           if(!option.compare("JM4") || flag) { flag=1; number-- ;}
	           if(!option.compare("KSR1") || flag) { flag=1; number-- ;}
	           if(!option.compare("KSR2") || flag) { flag=1; number-- ;}
	           if(!option.compare("NG1") || flag) { flag=1; number-- ;}
	           if(!option.compare("NG2") || flag) { flag=1; number-- ;}
	           if(!option.compare("NG3") || flag) { flag=1; number-- ;}
	           if(!option.compare("NG4") || flag) { flag=1; number-- ;}
	           if(!option.compare("NG5") || flag) { flag=1; number-- ;}
	           if(!option.compare("NG6") || flag) { flag=1; number-- ;}
	           if(!option.compare("PB1") || flag) { flag=1; number-- ;}
	           if(!option.compare("PB2") || flag) { flag=1; number-- ;}
	           if(!option.compare("PB3") || flag) { flag=1; number-- ;}
	           if(!option.compare("PB4") || flag) { flag=1; number-- ;}
	           if(!option.compare("PDG1") || flag) { flag=1; number-- ;}
	           if(!option.compare("PG1") || flag) { flag=1; number-- ;}
	           if(!option.compare("PG2") || flag) { flag=1; number-- ;}
	           if(!option.compare("PG3") || flag) { flag=1; number-- ;}
	           if(!option.compare("PG4") || flag) { flag=1; number-- ;}
	           if(!option.compare("PM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("PPD1") || flag) { flag=1; number-- ;}
	           if(!option.compare("PPD2") || flag) { flag=1; number-- ;}
	           if(!option.compare("PPD3") || flag) { flag=1; number-- ;}
	           if(!option.compare("PPD4") || flag) { flag=1; number-- ;}
	           if(!option.compare("PrM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("PrM2") || flag) { flag=1; number-- ;}
	           if(!option.compare("PrM3") || flag) { flag=1; number-- ;}
	           if(!option.compare("PrM4") || flag) { flag=1; number-- ;}
	           if(!option.compare("RgM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("RgM2") || flag) { flag=1; number-- ;}
	           if(!option.compare("RgM3") || flag) { flag=1; number-- ;}
	           if(!option.compare("RM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("RM2") || flag) { flag=1; number-- ;}
	           if(!option.compare("RSC1") || flag) { flag=1; number-- ;}
	           if(!option.compare("RSC2") || flag) { flag=1; number-- ;}
	           if(!option.compare("SB1") || flag) { flag=1; number-- ;}
	           if(!option.compare("SB2") || flag) { flag=1; number-- ;}
	           if(!option.compare("SB3") || flag) { flag=1; number-- ;}
	           if(!option.compare("SB4") || flag) { flag=1; number-- ;}
	           if(!option.compare("SC1") || flag) { flag=1; number-- ;}
	           if(!option.compare("SC2") || flag) { flag=1; number-- ;}
	           if(!option.compare("SC3") || flag) { flag=1; number-- ;}
	           if(!option.compare("SC4") || flag) { flag=1; number-- ;}
	           if(!option.compare("SD1") || flag) { flag=1; number-- ;}
	           if(!option.compare("SD2") || flag) { flag=1; number-- ;}
	           if(!option.compare("SD3") || flag) { flag=1; number-- ;}
	           if(!option.compare("SD4") || flag) { flag=1; number-- ;}
	           if(!option.compare("SD5") || flag) { flag=1; number-- ;}
	           if(!option.compare("SKG1") || flag) { flag=1; number-- ;}
	           if(!option.compare("SKG2") || flag) { flag=1; number-- ;}
	           if(!option.compare("SKG3") || flag) { flag=1; number-- ;}
	           if(!option.compare("SM1") || flag) { flag=1; number-- ;}
	           if(!option.compare("SM2") || flag) { flag=1; number-- ;}
	           if(!option.compare("SM3") || flag) { flag=1; number-- ;}
	           if(!option.compare("SPP1") || flag) { flag=1; number-- ;}
	           if(!option.compare("SPP2") || flag) { flag=1; number-- ;}
	           if(!option.compare("SPP3") || flag) { flag=1; number-- ;}
	           if(!option.compare("SPP4") || flag) { flag=1; number-- ;}
	           if(!option.compare("SS1") || flag) { flag=1; number-- ;}
	           if(!option.compare("SS2") || flag) { flag=1; number-- ;}
	           if(!option.compare("SS3") || flag) { flag=1; number-- ;}
	           if(!option.compare("SS4") || flag) { flag=1; number-- ;}
	           if(!option.compare("SSL1") || flag) { flag=1; number-- ;}
	           if(!option.compare("SSL2") || flag) { flag=1; number-- ;}
	           if(!option.compare("SSL3") || flag) { flag=1; number-- ;}
	           if(!option.compare("SSL4") || flag) { flag=1; number-- ;}
	        fout<<number<<" ";
	    }
	    fout<<endl;
	}	
    fout.close();
    fin.close();
   // return 0;
}

string projects[] = {
 				"AB1",
	       		"AB2",
	            "AD1",
	            "AD2",
	            "AD3",
	            "AG1",
	            "AG2",
	            "AG3",
	            "AM1",
	            "AM2",
	            "AM3",
	            "AM4",
	            "AM5",
	            "BM1",
	            "BM2",
	            "BM3",
	            "BM4",
	            "BM5",
	            "BM6",
	            "BM7",
	            "BM8",
	            "BM9",
	            "CM1",
	            "CM2",
	            "DM1",
	            "DM2",
	            "DRC1",
	            "DRC2",
	            "DRC3",
	            "DRC4",
	            "DSM1",
	            "JM1",
	            "JM2",
	            "JM3",
	            "JM4",
	            "KSR1",
	            "KSR2",
	            "NG1",
	            "NG2",
	            "NG3",
	            "NG4",
	            "NG5",
	            "NG6",
	            "PB1",
	            "PB2",
	            "PB3",
	            "PB4",
	            "PDG1",
	            "PG1",
	            "PG2",
	            "PG3",
	            "PG4",
	            "PM1",
	            "PPD1",
	            "PPD2",
	            "PPD3",
	            "PPD4",
	            "PrM1",
	            "PrM2",
	            "PrM3",
	            "PrM4",
	            "RgM1",
	            "RgM2",
	            "RgM3",
	            "RM1",
	            "RM2",
	            "RSC1",
	            "RSC2",
	            "SB1",
	            "SB2",
	            "SB3",
	            "SB4",
	            "SC1",
	            "SC2",
	            "SC3",
	            "SC4",
	            "SD1",
	            "SD2",
	            "SD3",
	            "SD4",
	            "SD5",
	            "SKG1",
	            "SKG2",
	            "SKG3",
	            "SM1",
	            "SM2",
	            "SM3",
	            "SPP1",
	            "SPP2",
	            "SPP3",
	            "SPP4",
	            "SS1",
	            "SS2",
	            "SS3",
	            "SS4",
	            "SSL1",
	            "SSL2",
	            "SSL3",
	            "SSL4",
 };

int main(){

	generateChoices();

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

	ifstream fin("choices.txt");
	ofstream fout("finalAllocation.txt");

	fin>>numberOfStuds;
	int i=numberOfStuds;
	while(i--){
		int dr,temp,tmp;
		vector<int> list;

		fin>>dr;
		fin>>temp;
		while(temp--){
			fin>>tmp;
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
		if(list.empty()){
			j++;
			if(j<10)
				fout<<"DR: 0"<<j<<"  ** NOT filled."<<endl;
			else
				fout<<"DR: "<<j<<"  ** NOT filled."<<endl;
			it++;
			continue;
		}
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
		if(j<10){
			if(flag)
				fout<<"DR: 0"<<j<<"  == NOT allocated."<<endl;
			else
				fout<<"DR: 0"<<j<<"  -- Allocated -- \t: "<<projects[list.at(ii)]<<endl;
		}
		else{
			if(flag)
				fout<<"DR: "<<j<<"  == NOT allocated."<<endl;
			else
				fout<<"DR: "<<j<<"  -- Allocated -- \t: "<<projects[list.at(ii)]<<endl;
		}	
		it++;
	}
	fin.close();
	fout.close();

	ofstream fo("projectsLeft.txt");
	fo<<"Seats left in various projects : \n";
	for(int i=0;i<99;i++){
		if(projects[i].length()==4)
			fo<<projects[i]<<" : "<<capacity[i]<<endl;
		else
			fo<<projects[i]<<"  : "<<capacity[i]<<endl;
	}
	fo.close();
	return 0;
}