//close_set class defination
// author Anirudh Yadav




#ifndef CLOSESET_H
#define CLOSESET_H

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <list>
#include <bits/stdc++.h>
#include "vertex.h"
#include "edge.h"
#include "open_set.h"
#include "graph.h"

using namespace std;


class closed_set{
	public:
		void insert(vertex& a);		// insert a vertex in the list
		bool contains(vertex&);		// check if the list contains vertex
		int size();					// returns the size of list
		vertex return_top();		// returns the last inserted vertex
	private:
		list <vertex> CS;
};

#endif