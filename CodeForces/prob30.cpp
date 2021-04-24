#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
typedef long long ll; 
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define F1R(i,a) FOR(i,1,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define M 1e9+7
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".txt").c_str(), "r", stdin); 
        freopen((name+"-23.txt").c_str(), "w", stdout);
    }
}
char ceasar(char ch, int key, int choice)
{
   if (choice==0){ //for encryption{
         if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if (ch > 'Z'){
               ch = ch - 'Z' + 'A' - 1;
            }
        }
   }
   else if (choice == 1) { //for decryption
         if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') {
               ch = ch + 'Z' - 'A' + 1;
            }
         }
      }
   return ch;
}
void solve(){
	char c[8][8];
	bool white[8][8]={0}, black[8][8]={0};
	vpi kings;
	for(int i=0; i<8; i++)
	for(int j=0; j<8; j++)
	{
		cin>>c[i][j];
		if(c[i][j]=='k' || c[i][j]=='K')
		{
			kings.pb(mp(i, j));
			if(c[i][j]=='K')
			{
				if(i-1>=0 && j-1>=0)
				black[i-1][j-1]=1; //top-left
				
				if(i-1>=0 && j+1<8)
				black[i-1][j+1]=1; //top-right
				
				if(i-1>=0)
				black[i-1][j]=1; //up
				
				if(i+1<8)
				black[i+1][j]=1; //down
				
				if(j-1>=0)
				black[i][j-1]=1; // left
				
				if(j+1<8)
				black[i][j+1]=1; //right
				
				if(i+1<8 && j-1>=0)
				black[i+1][j-1]=1; //down-left
				
				if(i+1<8 && j+1<8)
				black[i+1][j+1]=1; //down right
			}
			
			else
			{
				if(i-1>=0 && j-1>=0)
				white[i-1][j-1]=1; //top-left
				
				if(i-1>=0 && j+1<8)
				white[i-1][j+1]=1; //top-right
				
				if(i-1>=0)
				white[i-1][j]=1; //up
				
				if(i+1<8)
				white[i+1][j]=1; //down
				
				if(j-1>=0)
				white[i][j-1]=1; // left
				
				if(j+1<8)
				white[i][j+1]=1; //right
				
				if(i+1<8 && j-1>=0)
				white[i+1][j-1]=1; //down-left
				
				if(i+1<8 && j+1<8)
				white[i+1][j+1]=1; //down right
				
			}
		}
		else if(c[i][j]=='p' || c[i][j]=='P')
		{
			if(c[i][j]=='P')
			{
				if(i-1>=0 && j-1>=0)
				black[i-1][j-1]=1;
				if(i-1>=0 && j+1<8)
				black[i-1][j+1]=1;
				
				white[i][j]=1; // block
			}
			else
			{
				if(i+1<8 && j-1>=0)
				white[i+1][j-1]=1;
				if(i+1<8 && j+1<8)
				white[i+1][j+1]=1;
				
				black[i][j]=1;// block
			}
			
		}
		else if(c[i][j]=='R' || c[i][j]=='r')
		{
			if(c[i][j]=='R')
			{
				int temp=i;
				while(temp<8 && c[temp][j]=='.')
				{
					temp++;
					black[temp][j]=1;
				}
				temp=i;
				while(temp>=0 && c[temp][j]=='.')
				{
					temp--;
					black[temp][j]=1;
				}
				int t=j;
				while(t>=0 && c[i][t]=='.')
				{
					t--;
					black[i][t]=1;
				}
				while(t<8 && c[i][t]=='.')
				{
					t++;
					black[i][t]=1;
				}
				white[i][j]=1;
			}
			else
			{
				int temp=i;
				while(temp<8 && c[temp][j]=='.')
				{
					temp++;
					white[temp][j]=1;
				}
				temp=i;
				while(temp>=0 && c[temp][j]=='.')
				{
					temp--;
					white[temp][j]=1;
				}
				int t=j;
				while(t>=0 && c[i][t]=='.')
				{
					t--;
					white[i][t]=1;
				}
				while(t<8 && c[i][t]=='.')
				{
					t++;
					white[i][t]=1;
				}
				black[i][j]=1;
			}
		}
		else if(c[i][j]=='N' || c[i][j]=='n')
		{
			if(c[i][j]=='n')
			{
				if(i+2<8)
				{
					if(j+1<8)
					white[i+2][j+1]=1;
					if(j-1>=0)
					white[i+2][j-1]=1;
				}
				if(i-2>=0)
				{
					if(j+1<8)
					white[i-2][j+1]=1;
					if(j-1>=0)
					white[i-2][j-1]=1;
				}
				if(j+2<8)
				{
					if(i+1<8)
					white[i+1][j+2]=1;
					if(i-1>=0)
					white[i-1][j+2]=1;
				}
				if(j-2>=0)
				{
					if(i+1<8)
					white[i+1][j-2]=1;
					if(i-1>=0)
					white[i-1][j-2]=1;
				}
				black[i][j]=1;
			}
			else
			{
				if(i+2<8)
				{
					if(j+1<8)
					black[i+2][j+1]=1;
					if(j-1>=0)
					black[i+2][j-1]=1;
				}
				if(i-2>=0)
				{
					if(j+1<8)
					black[i-2][j+1]=1;
					if(j-1>=0)
					black[i-2][j-1]=1;
				}
				if(j+2<8)
				{
					if(i+1<8)
					black[i+1][j+2]=1;
					if(i-1>=0)
					black[i-1][j+2]=1;
				}
				if(j-2>=0)
				{
					if(i+1<8)
					black[i+1][j-2]=1;
					if(i-1>=0)
					black[i-1][j-2]=1;
				}
				white[i][j]=1;
			}
		}
		else if(c[i][j]=='B' || c[i][j]=='b')
		{
			if(c[i][j]=='B')
			{
				int t1=i, t2=j;
				while(t1+1<8 && t2+1<8  && (c[t1+1][t2+1]=='.' || c[t1+1][t2+1]=='k'))
				{
					t1++;
					t2++;
					black[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1+1<8 && t2-1>=0  && (c[t1+1][t2-1]=='.' || c[t1+1][t2-1]=='k'))
				{
					t1++;
					t2--;
					black[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1-1>=0 && t2-1>=0 && (c[t1-1][t2-1]=='.' || c[t1-1][t2-1]=='k'))
				{
					t1--;
					t2--;
					black[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1-1>=0 && t2+1>=0 && (c[t1-1][t2+1]=='.' || c[t1-1][t2+1]=='k'))
				{
					t1--;
					t2++;
					black[t1][t2]=1;
				}
				white[i][j]=1;
			}
			else
			{
				int t1=i, t2=j;
				while(t1+1<8 && t2+1<8 && (c[t1+1][t2+1]=='.' || c[t1+1][t2+1]=='k'))
				{
					t1++;
					t2++;
					white[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1+1<8 && t2-1>=0 && (c[t1+1][t2-1]=='.' || c[t1+1][t2-1]=='k'))
				{
					t1++;
					t2--;
					white[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1-1>=0 && t2-1>=0 && (c[t1-1][t2-1]=='.' || c[t1-1][t2-1]=='k'))
				{
					t1--;
					t2--;
					white[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1-1>=0 && t2+1>=0 && (c[t1-1][t2+1]=='.' || c[t1-1][t2+1]=='k'))
				{
					t1--;
					t2++;
					white[t1][t2]=1;
				}
				black[i][j]=1;
			}
		}
		if(c[i][j]=='Q' || c[i][j]=='q')
		{
			if(c[i][j]=='Q')
			{
				int t1=i, t2=j;
				while(t1+1<8 && t2+1<8 )
				{
					t1++;
					t2++;
					black[t1][t2]=true;
				}
				t1=i, t2=j;
				while(t1+1<8 && t2-1>=0)
				{
					t1++;
					t2--;
					black[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1-1>=0 && t2-1>=0)
				{
					t1--;
					t2--;
					black[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1-1>=0 && t2+1>=0)
				{
					t1--;
					t2++;
					black[t1][t2]=1;
				}
				int temp=i;
				while(temp<8 && c[temp][j]=='.')
				{
					temp++;
					black[temp][j]=1;
				}
				temp=i;
				while(temp>=0 && c[temp][j]=='.')
				{
					temp--;
					black[temp][j]=1;
				}
				int t=j;
				while(t>=0 && c[i][t]=='.')
				{
					t--;
					black[i][t]=1;
				}
				while(t<8 && c[i][t]=='.')
				{
					t++;
					black[i][t]=1;
				}
				white[i][j]=1;
			}
			else
			{
				int t1=i, t2=j;
				while(t1+1<8 && t2+1<8 && c[t1+1][t2+1]!='.')
				{
					t1++;
					t2++;
					white[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1+1<8 && t2-1>=0 && c[t1+1][t2-1]!='.')
				{
					t1++;
					t2--;
					white[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1-1>=0 && t2-1>=0 && c[t1-1][t2-1]!='.')
				{
					t1--;
					t2--;
					white[t1][t2]=1;
				}
				t1=i, t2=j;
				while(t1-1>=0 && t2+1>=0 && c[t1-1][t2+1]!='.')
				{
					t1--;
					t2++;
					white[t1][t2]=1;
				}
				int temp=i;
				while(temp<8 && (c[i][t]=='.' )
				{
					temp++;
					white[temp][j]=1;
				}
				temp=i;
				while(temp>=0 && (c[i][t]=='.')
				{
					temp--;
					white[temp][j]=1;
				}
				int t=j;
				while(t>=0 && (c[i][t]=='.' )
				{
					t--;
					white[i][t]=1;
				}
				while(t<8 && (c[i][t]=='.' || c[i][t]=='K'))
				{
					t++;
					white[i][t]=1;
				}
				black[i][j]=1;
			}
		}
	}
	for(pi k: kings)
	{
		int i=k.f, j=k.s;
		if(c[k.f][k.s]=='K')
		{
			if(white[i][j]){
				if(i-1 >=0 && j-1>=0 && white[i-1][j-1])
				{
					if(i-1>=0 && j+1<8 && white[i-1][j+1])
					{
						if(i-1>=0 && white[i-1][j])
						{
							if(i+1>=0 && white[i+1][j])
							{
								if(j-1>=0 && white[i][j-1])
								{
									if(j+1<8 && white[i][j+1])
									{
										if(i+1<8 && j-1>=0 && white[i+1][j-1])
										{
											if(i+1<8 && j+1<8 && white[i+1][j+1])
											{
												cout<<"CHECKMATE WHITE"<<endl;
												return ;
											}
										}

									}
								}
							}
						}
					}
				}	

			}
		}
		else
		{
			if(black[i][j]){
				if(i-1 >=0 && j-1>=0 && black[i-1][j-1])
				{
					if(i-1>=0 && j+1<8 && black[i-1][j+1])
					{
						if(i-1>=0 && black[i-1][j])
						{
							if(i+1>=0 && black[i+1][j])
							{
								if(j-1>=0 && black[i][j-1])
								{
									if(j+1<8 && black[i][j+1])
									{
										if(i+1<8 && j-1>=0 && black[i+1][j-1])
										{
											if(i+1<8 && j+1<8 && black[i+1][j+1])
											{
												cout<<"CHECKMATE BLACK"<<endl;
												return ;
											}
										}

									}
								}
							}
						}
					}
				}	

			}
		}
	}
	for(int i=0; i<8; i++){
	for(int j=0; j<8; j++)
	{
		cout<<white[i][j]<<' ';
	}
	cout<<endl;
	}
	cout<<endl;
	for(int i=0; i<8; i++){
	for(int j=0; j<8; j++)
	{
		cout<<black[i][j]<<' ';
	}
	cout<<endl;
}
	cout<<endl;
	cout<<"NO CHECKMATE"<<endl;
}
int main() {
    FIO;
	int t; cin>>t;
	string dummy;
	getline(cin, dummy);
	while(t--)
	{
		solve();
	}
}

