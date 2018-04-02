//vertex class function implementation
// author Anirudh Yadav

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <list>
#include <bits/stdc++.h>
#include "vertex.h"
using namespace std;



bool operator==(vertex a, vertex b){
	if(a.ver==b.ver){
		return true;
	}else{
		return false;
	}
}
bool operator<(vertex a, vertex b){
	if(a.cost<b.cost){
		return true;
	}else{
		return false;
	}
}
bool operator>(vertex a, vertex b){
	if(a.cost>b.cost){
		return true;
	}else{
		return false;
	}
}
bool operator<=(vertex a, vertex b){
	if(a.cost<=b.cost){
		return true;
	}else{
		return false;
	}
}
bool operator>=(vertex a, vertex b){
	if(a.cost>=b.cost){
		return true;
	}else{
		return false;
	}
}
bool operator!=(vertex a, vertex b){
	if(a.ver==b.ver){
		return false;
	}else{
		return true;
	}
}