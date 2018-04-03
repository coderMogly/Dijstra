//graph class fuction implementation 
// author Anirudh Yadav




#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <list>
#include <bits/stdc++.h>
#include "graph.h"
#include "edge.h"
#include "vertex.h"
#include "operator.h"

using namespace std;


/////////operator overloading


///////////////////////////functions for graph class
edge* graph::get_edge(vertex& v1, vertex& v2){
	list <edge>::iterator it;
	for(it = E_list.begin();it!= E_list.end();++it){
		if((it->v1==v1 && it->v2==v2)||(it->v1==v2&&it->v2==v1)){
			return &(*it);
		}
	}
}
void graph::update_parent(vertex& node, vertex& parent){
	vertex* temp = get_vertex(parent.ver);
	list <vertex>::iterator it;
	for(it = V_list.begin(); it!=V_list.end();++it){
		if(*it == node){
			it->parent = temp;
		}
	}
}

int graph::total_vertex(){
	return V_list.size();
}

int graph::total_edge(){
	return E_list.size();
}

bool graph::is_adjacent(vertex& v1, vertex& v2){
	list <edge>::iterator it;
	for(it = E_list.begin();it!=E_list.end();++it){
		if((it->v1==v1 && it->v2==v2)||(it->v1==v2 && it->v2==v1)){
			return true;
		}
	}
	return false; 
}

list <vertex> graph::nieghbours(vertex& a){
	list <vertex> N_vertex_list;
	list <vertex>::iterator it;
	for(it = V_list.begin();it!=V_list.end();++it){
		bool temp = graph::is_adjacent(*it, a);
		if(temp){
			N_vertex_list.push_back(*it);
		}
	}
	return N_vertex_list;
}



void graph::add_vertex(vertex& a){
	V_list.push_back(a);
}


void graph::add_edge(edge& a){
	E_list.push_back(a);
}

void graph::set_vertex_value(vertex& a, int& cost){
	list <vertex>::iterator it;
	for(it = V_list.begin(); it != V_list.end(); ++it){
		if(*it == a){
			it->cost = cost;
		}
	}
}

void graph::set_edge_value(edge& e, int& cost){
	list <edge>::iterator it;
	for(it = E_list.begin();it!= E_list.end();++it){
		if(*it==e){
			it->cost = cost;
			return;
		}
	}
	cout<< "this vertex does not exist"<< endl; 
}

void graph::print_graph(){
	list <vertex> :: iterator it;
	for(it=V_list.begin();it!=V_list.end();++it){
		cout<<"vertex   "<<it->ver<<endl;
	}
	list <edge>::iterator id;
	for(id=E_list.begin();id!=E_list.end();++id){
		cout<<"edge   ("<<id->v1.ver<<","<<id->v2.ver<<")  cost "<<id->cost<<endl;
	}
}
vertex* graph::get_vertex(int& a){
	list <vertex>::iterator it;
	for(it = V_list.begin();it!= V_list.end();++it){
		if(it->ver == a){
			return &*it;
		}
	}
}
int graph::get_vertex_value(vertex& a){
	list <vertex>::iterator it;
	for(it = V_list.begin();it!=V_list.end();++it){
		if(*it==a){
			return it->cost;
		} 
	}
	cout<<"Vertex not present in the graph"<<endl;
}
int graph::get_edge_value(edge& e){
	list <edge>::iterator it;
	for(it = E_list.begin();it!=E_list.end();++it){
		if(*it==e){
			return it->cost;
		} 
	}
	cout<<"Vertex not present in the graph"<<endl;	
}

