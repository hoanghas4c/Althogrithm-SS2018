#include <iostream>  // in - out
#include <fstream>  // read - write file

using namespace std;

// Khai bao canh la 1 kieu struct
typedef struct edge
{
	int a;  // diem dau
	int b;  // diem cuoi
};


// Doc du lieu tu file: ? diem, ? canh
void input(int &n, int &m, edge e[])
{
	ifstream f("DULIEU.INP");
	f >> n; // doc so diem
	cout << "So diem la: " << n << endl;
	
	// doc so canh
	for (int i = 1; true; i++)
	{
		f >> e[i].a >> e[i].b;
		if ( e[i].a == 0 && e[i].b == 0 ) break;
		m++;
	}
	cout << "So canh la: " << m << endl;
}


// ban dau, coi tat ca cac diem deu la diem nut
void banDau(int n, int d[])
{
	for (int i = 1; i <= n; i++)

		d[i] = i;
}

int timDiemNut(int x, int d[])
{
	while( d[x] != x )
		x = d[x];
		
	return x;
}

int gopNhom(int a, int b, int d[])
{
	int dinhNhomA = timDiemNut(a, d);  // diem nut cua diem dau
	int dinhNhomB = timDiemNut(b, d);  // diem nut cua diem cuoi
	
	if (dinhNhomA == dinhNhomB) return 0;

	if (dinhNhomA < dinhNhomB)
		d[dinhNhomB] = dinhNhomA;
	else
		d[dinhNhomA] = dinhNhomB;
	
	return 1;
}


// Liet ke cac nhom lien thong & thanh phan cua moi nhom
void list(int n, int d[])
{
	for (int i = 1; i <= n; i++)
	{
		if (d[i] == i)
		{
			cout << "Nhom " << i << ": ";
			for (int j = i + 1; j <= n; j++)
			{
				if(timDiemNut(j, d) == i)
					cout << j << " ";
			}
			cout << endl;
		}
	}
}

// tim thanh phan lien thong
void timTPLT(int n, int d[], int m, edge e[])
{
	banDau(n, d);
	int soTPLT = n;
	for (int i = 1; i <= m; i++)
		soTPLT -= gopNhom(e[i].a, e[i].b, d);
	cout << "--> So TPLT la: " << soTPLT << endl;

	list(n, d);
}



int main()
{
	int point = 0;
	edge e[100];
	int d[100]; // danh dau diem quan trong
	
	int n = 0, m = 0; // so dinh & so canh
	
	input(n, m, e);
	
	timTPLT(n, d, m, e);

	return 0;
}
