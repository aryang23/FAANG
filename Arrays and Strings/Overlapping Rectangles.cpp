//Overlapping Rectangles
//By Aryan Grover(@aryang23)
#include<iostream>
#include<vector>
using namespace std;
bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2)
{
	if(rec1[2]<=rec2[0] or rec1[1]>=rec2[3] or rec1[0]>=rec2[2] or rec1[3]<=rec2[1])
	return false;
	return true;
}
int main()
{
	vector<int> r1,r2;
	int n;
	for(int i=0;i<4;i++)
	{
		cin>>n;
		r1.push_back(n);
	}
	for(int i=0;i<4;i++)
	{
		cin>>n;
		r2.push_back(n);
	}
	bool ans=isRectangleOverlap(r1,r2);
	if(ans)
	cout<<"1";
	else
	cout<<"0";
}
