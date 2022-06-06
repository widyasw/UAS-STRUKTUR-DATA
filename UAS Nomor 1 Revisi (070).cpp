#include<iostream>
#define Max 100

using namespace std;

int adjMat[Max][Max];

 // Inisialisasi matriks ke nol
void initializeMat(int v)
{
	for(int i = 0; i < v; i++)
	{ 
	    for(int j = 0; j < v; j++ )
	    { 
	    adjMat[i][j] =0;
		}
	}
}

 // Menambahkan edges
void addEdge(int u, int v, int w)
{
	adjMat[u][v] = w;
	adjMat[v][u] = w;
}

// Mencetak matriks
void displayMat(int v)
{
	for (int i = 1; i <= v; i++)
	{
		cout << "\t";
		
		for (int j = 1; j <= v; j++)
		{
			cout << adjMat[i][j] <<"\t";
		}
		
		cout << endl;
	}
}

int main()
{
	int vertice = 4;
	
	initializeMat(vertice);
	
	addEdge(1,2,5);
	addEdge(2,3,1);
	addEdge(4,1,3);
	addEdge(2,4,1);
	addEdge(3,1,1);
	
	displayMat(vertice);
	
	return 0;
}

