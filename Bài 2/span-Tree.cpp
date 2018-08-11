#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

const char * fn = "Gr8.inp";



void spanTree()
{
	ifstream f(fn);
	f >> n ; // so dinh
	int x, y;
	int c = 0; // so canh trong cay khung
	
	while( true )
	{
		f >>x >> y;
		if( x ==0 && y ==0)	break;
		if(Union(x,y) != 0)
		{
			cout << "\n" << x << "-" << y;
			++c;
		}
	}
	f.close();
	
	cout << "\n Total " << x << " spanning edge(s)." ;
}



// Tim canh co trong moi cay khung: Hay tim giao cua cac cay khung =  cau

void impBridges()
{
	spanTree(); // Tim cay khung
	// Duyet khung tim cau
	int i , c = 0 ;
	for( i = 1 ; i <= m ; i++)
	{
		if( e[i],type == SPAN )
		{
			//Print(i)
			// La cau ==> bo canh i --> Tang TPLT
			if( soTPLT(i) > 1)
			{
				(e[i],type = BRIDGE);
				++c;
				Print(i);
			}
		}
	}
	cout << " \n Total: " << c << " Important bridge(s). ";
}





int main()
{
	spanTree();
	return 0;
}

