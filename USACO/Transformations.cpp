/*
	ID: theredh1
	LANG: C++
	PROG: transform
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

template <class T>
struct matrix{
	int N;
	vector< vector<T> > mymatrix;
	
	matrix(int n):N(n){
		mymatrix.resize(N,vector<T>(N));
	}
	
	matrix(const matrix &t){
	//	cout<<"copy constructor called"<<endl;
		N=t.N;
                mymatrix.resize(N,vector<T>(N));
                for(int i=0; i<N; ++i)
                        for(int j=0; j<N; ++j)
                                mymatrix[i][j]=t.mymatrix[i][j];
		
	}//copy constructor never used in this program	


	matrix(const vector< vector<T> > &t){
	//	cout<<"converting constructor called"<<endl;
		N=t[0].size();
		mymatrix.resize(N,vector<T>(N));
		for(int i=0; i<N; ++i){
			for(int j=0; j<N; ++j){
				mymatrix[i][j]=t[i][j];
			}
		}
	}//converting constructor
	
	bool operator == (const matrix &t) {
	//	cout<<"judge called"<<endl;
		for(int i=0;i<N;++i)
			for(int j=0;j<N;++j)
				if(mymatrix[i][j] != t.mymatrix[i][j]) return false;
		return true;
	}
	
	vector< vector<T> > trans(int mode){
	//	cout<<"transform function called"<<endl;
                vector< vector<T> > temp(N, vector<T>(N));
		
                for(int i=0;i<N;++i)
                        for(int j=0;j<N;++j)
                                switch(mode){
                                        case 1:
                                                temp[i][j]=mymatrix[N-1-j][i];break;
                                        case 2:
                                                temp[i][j]=mymatrix[N-1-i][N-1-j];break;
                                        case 3:
                                                temp[i][j]=mymatrix[j][N-1-i];break;
                                        case 4:
                                                temp[i][j]=mymatrix[i][N-1-j];break;
                                }
		return temp;
	}

	void print(){
		for(int i=0;i<N;++i){
     			for(int j=0;j<N;++j)
				cout<<mymatrix[i][j]<<" ";
			cout<<endl;
		}
	
	}
};


int main(){
	ofstream fou("transform.out");	ifstream fin("transform.in");
	
	string line;	fin>>line;	int N=atoi(line.c_str());
	
	matrix<char> m1(N), m2(N);
	for(int i=0; i<N; ++i){
		fin>>line;
		for(int j=0; j<N; ++j)
			m1.mymatrix[i][j]=line[j];
	}
        for(int i=0; i<N; ++i){
                fin>>line;
                for(int j=0; j<N; ++j)
                        m2.mymatrix[i][j]=line[j];
        }

	if(m2==m1.trans(1))  fou<<1;
	else{
		if(m2==m1.trans(2)) fou<<2;
		else{
			if(m2==m1.trans(3)) fou<<3;
			else{
				if(m2==m1.trans(4)) fou<<4;
				else{
					if(m2.trans(3)==m1.trans(4) || m2.trans(2)==m1.trans(4) || m2.trans(1)==m1.trans(4))	fou<<5;
					else{
						if(m2==m1) fou<<6;
						else fou<<7;
					}
				}
			}
		}
	}

	fou<<endl;
	return 0;
}


