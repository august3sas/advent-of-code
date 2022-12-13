#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
class Elf{
    public:
        int calories=0;
        void addCalories(int x){calories+=x;}
        void resetElf(){calories=0;}
};
class Herd{
    public:
        vector<Elf>elves;
        void addElf(Elf e){elves.push_back(e);}
        int retrieveMax(){
        	int mx=0;
        	for(int i=0;i<elves.size();i++){
        		if(elves[i].calories>mx){
        		mx=elves[i].calories;
        		}
        	}
        	return mx;
}

};
int main()
{
	Herd GroupOfElves;
	Elf OneElf;
	string x="";
	vector<int>allcals;
	do{
		getline(cin,x);
		if(x!=""){int temp=stoi(x);OneElf.addCalories(temp);}
		else {GroupOfElves.addElf(OneElf);allcals.push_back(OneElf.calories);Elf newElf;OneElf=newElf;}
	}while(cin);//CTRL-D to END
	cout<<GroupOfElves.retrieveMax()<<endl;
	sort(allcals.begin(),allcals.end());
	cout<<allcals[allcals.size()-1]+allcals[allcals.size()-2]+allcals[allcals.size()-3];
	
}
