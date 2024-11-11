#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class Point{
	private:
	double x,y;
	public:
	Point(double x,double y){
		this->x = x;
		this->y = y;
	}
double Distance( Point p){
	return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}
};
int main(){
double a,b,c,d;
cin>>a>>b>>c>>d;
 Point A(a,b),B(c,d);
   cout<<setprecision(6)<<A.Distance(B)<<endl;
   return 0;
}