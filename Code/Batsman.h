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
//b(n,nm,ni,runs,sr,avg,hs,fif,hun,bp)
class Batsman{
	public:
	string name;
	ll nom,noi,totruns,highscore,fifties,hundreds,baseprice,rank;
	float batstrikerate,bataverage;
	Batsman(){	}
	Batsman(string n,ll nm,ll ni,ll runs,float sr,float avg,ll hs,ll fif,ll hun,ll r,ll bp){
		name=n;
		nom=nm;
		noi=ni;
		totruns=runs;
		batstrikerate=sr;
		bataverage=avg;
		highscore=hs;
		fifties=fif;
		hundreds=hun;
		rank=r;
		baseprice=bp;
	}
	string retname() {return name;}
	void print(){
		d2("Name: ",name);
		d2("No of Matches: ",nom);
		d2("No of Innings: ",noi);
		d2("Total Runs: ",totruns);
		d2("Strikerate: ",batstrikerate);
		d2("Average: ",bataverage);
		d2("Highest Score: ",highscore);
		d2("No of fifties: ",fifties);
		d2("No of hundreds: ",hundreds);
		d2("Base Price: ",baseprice);
	}
	ll retrank(){
		return rank;
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
	float retbatsr(){
		return batstrikerate;
	}
	float retbatavg(){
		return bataverage;
	}
};
