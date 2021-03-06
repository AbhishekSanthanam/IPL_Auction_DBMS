#include<bits/stdc++.h>
#define ll long long int
#define pll pair<long long int,long long int>
#define dd double double
#define pb push_back
#define pob pop_back
#define ins insert
#define mp make_pair
#define ff first
#define ss second
#define For(i,x,y) for(size_t i=size_t(x);i<size_t(y);i++)
#define rfor(i,x,y) for(size_t i=size_t(x);i>=size_t(y);i--)
#define ms(a,x) memset(a, x, sizeof(a))
#define maxN 1000000000
#define d1(x) cout<<x<<endl
#define d2(x,y) cout<<x<<" "<<y<<endl
#define d3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl
#define pcout(x) cout<<fixed<<setprecision(10)<<x<<endl
using namespace std;
//b(n,nm,ni,runs,sr,avg,hs,fif,hun,wik,bosr,boavg,eco,bf,fowi,fiwi,bp);
class Allrounder{
	string name;
	ll nom,noi,totruns,highscore,fifties,hundreds,baseprice,rank;
	float batstrikerate,bataverage;
	string bestf;
	ll totwiks,fourwis,fivewis;
	float bowlstrikerate,bowlaverage,economy;
	public:
	Allrounder() { }
	Allrounder(string n,ll nm,ll ni,ll runs,float sr,float avg,ll hs,ll fif,ll hun,ll wik,float bosr,float boavg,float eco,string bf,ll fowi,ll fiwi,ll r,ll bp){
		name=n;
		nom=nm;
		noi=ni;
		totruns=runs;
		batstrikerate=sr;
		bataverage=avg;
		highscore=hs;
		fifties=fif;
		hundreds=hun;
		totwiks=wik;
		bowlstrikerate=bosr;
		bowlaverage=boavg;
		economy=eco;
		bestf=bf;
		fourwis=fowi;
		fivewis=fiwi;
		baseprice=bp;
		rank=r;
	}
	string retname() {return name;}
	void print(){
		d2("Name: ",name);
		d2("No of Matches: ",nom);
		d2("No of Innings: ",noi);
		d2("Total Runs: ",totruns);
		d2("Batting Strikerate: ",batstrikerate);
		d2("Batting Average: ",bataverage);
		d2("Highest Score: ",highscore);
		d2("No of fifties: ",fifties);
		d2("No of hundreds: ",hundreds);
		d2("Total Wickets: ",totwiks);
		d2("Bowling Strikerate: ",bowlstrikerate);
		d2("Bowling Average: ",bowlaverage);
		d2("Economy: ",economy);
		d2("Best figures: ",bestf);
		d2("No of 4wi: ",fourwis);
		d2("No of 5wi: ",fivewis);
		d2("Base Price: ",baseprice);
	}
	
	ll retrank(){
		return rank;
	}
	string retbf(){
		return bestf;
	}
	ll retnom(){
		return nom;
	}
	ll retnoi(){
		return noi;
	}
	ll rettotruns(){
		return totruns;
	}
	ll reths(){
		return highscore;
	}
	ll retfif(){
		return fifties;
	}
	ll rethun(){
		return hundreds;
	}
	ll retbp(){
		return baseprice;
	}
	ll rettotwiks(){
		return totwiks;
	} 
	ll retfourwis(){
		return fourwis;
	}
	ll retfivewis(){
		return fivewis;
	}
	float retbatsr(){
		return batstrikerate;
	}
	float retbatavg(){
		return bataverage;
	}
	float retbowlsr(){
		return bowlstrikerate;
	}
	float retbowlavg(){
		return bowlaverage;
	}
	float reteco(){
		return economy;
	}
};
