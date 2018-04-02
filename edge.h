//edge class defination
// author Anirudh Yadav




#ifndef EDGE_H
#define EDGE_H

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <list>
#include <bits/stdc++.h>
#include "vertex.h"

using namespace std;

class edge{
	public:
		edge(vertex a, vertex b):v1(a),v2(b),cost(0){
		//	cout<< "a new edge is made ("<<a.ver<<b.ver<<")"<<cost<<endl; 
		};
		vertex v1, v2;
		int cost;
		//edge* next;
};

#endif