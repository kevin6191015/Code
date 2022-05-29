#include<bits/stdc++.h>
using namespace std;

struct Point{
	int X;
	int Y;
}point[501];

struct Edge{
	int a;
	int b;
	double len;
}edge[501*501];

int fathers[501];
int nofe;

bool cmp(Edge A,Edge B){
	return A.len<B.len;
}

int find(int x){//find root
	if(fathers[x]==x){return x;}
	return fathers[x]=find(fathers[x]);
}

bool unite(Edge E , vector <double> &LenofE){//union two min spanning tree 
	int fx=find(E.a);
	int fy=find(E.b);
	if(fx!=fy){
		fathers[fx]=fy;//make same root
		LenofE.push_back(E.len);//record edge length
		return true;
	}
	return false;
}

 int main(){
 int cases;
 int S,P;
 cin>>cases;
 while(cases--){
 	cin>>S>>P;
 	for(int i=0;i<P;i++){
 		cin>>point[i].X>>point[i].Y;
 		fathers[i]=i;//initial disjoint set
 	}
 	nofe=0;
 	for(int i=0;i<P;i++){
 		for(int j=i+1;j<P;j++){
 			double l=sqrt(pow(point[i].X-point[j].X,2)+pow(point[i].Y-point[j].Y,2));
 			edge[nofe++]={i,j,l};
 		}
 	
 	}
 	sort(edge,edge+nofe,cmp);	//from bigger to smaller
 	
 	vector<double>LenOfEdge;
 	
 	for(int i=0,nofE=0;nofE!=P-1;i++){
 		if(unite(edge[i],LenOfEdge))nofE++;
 	
 	}
 
 	printf("%.2f\n",LenOfEdge[P-S-1]);
 }
 
 }
