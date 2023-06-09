#include<bits/stdc++.h>

using namespace std;

class Box
{
    private:
        long l, b, h;
    public:
        Box()
        {
            l = 0;
            b = 0;
            h = 0;
        }
        Box(const Box& B)
        {
            l = B.l;
            b = B.b;
            h = B.h;
        }
        Box(long length, long breadth, long height)
        {
            l = length;
            b = breadth;
            h = height;
        }
        long long CalculateVolume()
        {
            return l*b*h;
        }
        friend bool operator < (Box&A, Box& B)
        {
            if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) )
                return true;
            else
                return false;
    };
    
    friend ostream& operator << (ostream& output, const Box& B)
    {
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}