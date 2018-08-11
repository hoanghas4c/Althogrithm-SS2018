	/*************************************

		Cac thao tac tren do thi
	  Find Union: Tim va gop
	  Init
  *************************************/
  // Dat moi truong
  #include <iostream>
  #include <fstream>
  #include <windows.h>
  // #include <time.h>
  
	using namespace std;
	
	const char * fn = "GR8.INP";
	const int MN = 200;
	const int COM = 0; // canh Ordinary Edge
	const int SPAN = 1; // Spanning Edge
	const int BRIDGE = 2; // Cau
	
	typedef struct Edge {
										 int x;  // dinh dau
										 int y;  // dinh cuoi
										 int type; // COM = 0, SPAN = 1, BRIDGE = 2
	                };
	                
  Edge e[MN];  // m canh e [][][][][][][][][]
	int n; // so dinh
	int m; // so canh
	int d[MN]; // d[i] = j   (i) bam (j)
	// i la nhom truong <=> d[i] = i
	
	// Moi em la 1 nhom
	void Init() {
		for (int i = 1; i <= n; ++i) d[i] = i;
	}
	
	// Hien thi canh i
	void Print(int i) {
		 cout << "\n " << i << ". " << e[i].x << "-" << e[i].y << ": ";
		 switch(e[i].type) {
				case COM: cout << " Ordinary."; break;
				case SPAN: cout << " Span."; break;
				case BRIDGE: cout << " Bridge."; break;
		 }  // end of switch
	}
	
	void Read() {
		  ifstream f(fn); // Mo file
			 f >> n; // so dinh
			 cout << "\n Number of Vertices: " << n;
			 m = 0;  // so canh

			 for (int i = 1; true; ++i) {
				 // f >> e[i].x >> e[i].y;
				 f >> e[i].x >> e[i].y;
				 if (e[i].x == 0 && e[i].y == 0) break;
				 e[i].type = COM;
				 // cout << "\n " << i << ". " << e[i].x << " - " << e[i].y;
				 ++m; // Them 1 canh
				 cout << "\n " << e[i].x << " - " << e[i].y;
			 }
			 // ????
			 cout << "\n So canh: " << m;
		 f.close();
	}
	
	// Tim nhom =truong cua a
	int Find(int a) {
		int nt = a;
		 while (d[nt]  != nt)  nt = d[nt];
		 d[a] = nt;
		 return nt;
	}
	
	// Gop 2 nhom chua a va nhom chua b
	int Union(int a, int b) {
		int nta = Find(a);
		int ntb = Find(b);
		if (nta == ntb) return 0;
		if (nta < ntb) d[ntb] = nta;
		else d[nta] = ntb;
		return 1;
	}
	
	// Them tham bien de TT linh hoat
	// Tinh so TPLT neu bo canh k
	int SoTPLT(int k = 0) {
		 Init();
		 int s = n, i;
		 for (i = 1; i < k; ++i)
				 s -= Union(e[i].x, e[i].y);
		 for (i = k+1; i <= m; ++i)
				 s -= Union(e[i].x, e[i].y);
     return s;
	}
	
	// Liet ke tung TPLT
	// NT: nv1 nv2 ...
	void List() {
		for (int i = 1; i <= n; ++i)
			 if (d[i] == i) {
					// Gap nhom truong i
					cout << "\n Nhom " << i << ": ";
					for (int j = i+1; j <= n; ++j)
						 if (Find(j) == i) cout << " " << j;
			 }
		
	}
	

	// Liet ke cac canh cua cay khung
	// Kruskal + canh, ko tao cycle
	// Spanning Tree

	void SpanTree() {
		 Read();
		 Init();
		 int c = 0;
		 for (int i = 1; i <= m; ++i) {
		    if (Union(e[i].x, e[i].y) != 0) {
		    	e[i].type = SPAN;
				  Print(i); // Hien thi canh i
				   ++c;
		    }
		 }

		 cout << "\n Total " << c << " spanning edge(s).";
	}

	
	// Liet ke cac cau trong yeu
	// Cau TY thuoc cay khung
	// Giao cua moi cay khung
	void ImpBridges() {
		 SpanTree(); // Tim cay khung
		 // Duyet cac canh khung tim cau
		 int i, c = 0;
		 for (i = 1; i <= m; ++i)
				if (e[i].type == SPAN) {
					 // Print(i);
					 // La cau ?: Bo canh i -> tang TPLT
					if (SoTPLT(i) > 1) {
						 (e[i].type = BRIDGE);
						 ++c; // them 1 cau TY
						 Print(i);
					}
				}
		 cout << "\n Total: " << c << " Important bridge(s).";
  }  // StarBridge
	
	// Tim canh co trong moi cay khung = cau
	//  Giao cua cac khung
	
	main() {
		  // Read();
		 // cout << endl << SoTPLT();
		//	Thi95();
		//  SpanTree();
		// for (int i = 1; i <= m; ++i)
			 // if (e[i].type == SPAN) cout << "\n " << e[i].x << " - " << e[i].y;
		ImpBridges();
		//---------------------------------------------
		 cout << endl << " T H E   E N D . ";
		 
	  return 0;       
	}


