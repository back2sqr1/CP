/*
	ID: theredh1
	LANG: C++
	PROG: ariprog
*/
#include <fstream>
#include <iostream>

using namespace std;
void quicksort (int[], int ,int);
int pivotlist (int[], int,int);

ofstream out ("ariprog.out");  

int n;
int main () {
    ifstream in ("ariprog.in");       
                            
    bool array[125001] = {false}, noneF;
    int m, upper, upperdef, def, p; 
    int places[300000], pl = 0;
    noneF = true;
    
    in>>n>>m;
    
    for (int i = 0; i <= m; i++)
        for (int j = 0; j <= m; j++) {
            if (!array[i*i+j*j]) {
                places[pl] = i*i+j*j;   //Saving generated numbers
                pl++;
            }
            array[i*i+j*j] = true;
        }
    
    upper = 2*m*m;
    upperdef = upper/(n-1);
    
    quicksort (places, 0, pl-1);
    
    for ( def = 1; def<=upperdef; def++) // Loop to check for solutions
                                       // It looks for solutions in
                                       // correct order so you 
                                       // print the solution directly
                                       // without sorting first, thnx to who said:
                                       // Trade Memory for Speed !!
    {
        for ( p = 0; places[p]<=(upper-((n-2)*def)); p++) {
            bool is;
            is = true;
            int where;

            for (int c = (n-1); c>=0 ; c--)
                    if (!array[places[p]+c*def]) {
                        is = false;
                        where = (p+c*def);
                        break;
                    }
    
            if (is) {
                noneF = false;
                out<<places[p]<<" "<<def<<endl;
            }
        }
    }
    
    if (noneF)
        out<<"NONE"<<endl;
    
    return 0;
}

void quicksort (int array[], int start, int last) {
    int pivot;
    if (start < last) {
        pivot = pivotlist(array, start,last);
        quicksort (array, start,pivot-1);
        quicksort (array, pivot+1,last);
    }
}

int pivotlist(int array[], int f, int l) {
    int pivotpoint;
    int pivotvalue, temp;
    
    pivotvalue = array[f];
    pivotpoint = f;
    
    for (int i = f+1;i<=l; i++) {
       	if (array[i]<pivotvalue) {	
      	    pivotpoint++;
            temp = array[i];
            array[i] = array[pivotpoint];
            array[pivotpoint] = temp;
   	 }
   }
   temp = array[f];
   array[f] = array[pivotpoint];
   array[pivotpoint] = temp;
   
   return pivotpoint;
}

