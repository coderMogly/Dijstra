//edge class function implementation
// author Anirudh Yadav

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <list>
#include <bits/stdc++.h>
#include "edge.h"
#include "vertex.h"
using namespace std;



bool operator==(edge a, edge b){
	if((a.v1==b.v1 && a.v2==b.v2)||(a.v2==b.v1 && a.v1==b.v2)){
		return true;
	}else{
		return false;
	}
}
bool operator<(edge a, edge b){
	if(a.cost<b.cost){
		return true;
	}else{
		return false;
	}
}
bool operator>(edge a, edge b){
	if(a.cost>b.cost){
		return true;
	}else{
		return false;
	}
}
bool operator<=(edge a, edge b){
	if(a.cost<=b.cost){
		return true;
	}else{
		return false;
	}
}
bool operator>=(edge a, edge b){
	if(a.cost>=b.cost){
		return true;
	}else{
		return false;
	}
}