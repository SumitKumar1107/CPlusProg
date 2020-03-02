#include<bits/stdc++.h>

using namespace std;

class point
{
public:
  double x,y;

  point(double a,double b):x(a),y(b)
  {

  }

  void display(string n)
  {
    cout<<n <<" x : "<<x<<" y : "<<y<<endl;
  }

  double getdistance(point p)
  {
    double sqr = pow(p.x-x,2)+pow(p.y-y,2);
    double dist = sqrt(sqr);

    return dist;
  }

  void set(double x,double y)
  {
    this->x = x;
    this->y = y;
  }
};

class line
{
public:
  double magn;
  point p1,p2;
  line():p1(0,0),p2(0,0)
  {

  }
  line(point a,point b):p1(a),p2(b)
  {

  }
  void display(string n)
  {
    calc();
    cout<<n<<" magnitude "<<magn<<endl;
    p1.display("p1");
    p2.display("p2");
  }
  void calc()
  {
    magn=p1.getdistance(p2);
  }
};

int main()
{
  point p1(6,7),p2(11,9);
  p1.display("sumit");
  p2.display("amit");

  line aline;
  aline.display("line");

  aline.p1 = p1;
  aline.p2 = p2;
  aline.display("line1s");

  p1.x = 10;
  p1.display("shobhit");
  aline.p1.x = 10;
  aline.display("line2s");

  line bline(p1,p1);
  bline.display("line3s");

  bline.p1.set(10,23);
  bline.display("line4s");


  point p3(10,40);
  point *ptr1;
  ptr1 = &p3;
  cout<<" "<<ptr1->x<<endl;

  point *ptr2;
  ptr2 = new point(15,30);
  cout<<" "<<ptr2->x<<endl;

  ptr1 = ptr2;
  cout<<" "<<ptr1->x<<endl;
  cout<<" "<<ptr2->x<<endl;

  point *ptr4;
  ptr4 = new point(150,300);
  ptr4 = &p3;

  ptr1 = ptr4;
  cout<<" "<<ptr1->x<<endl;
  cout<<" "<<ptr4->x<<endl;

  ptr4 = ptr2;
  cout<<" "<<ptr2->x<<endl;
  cout<<" "<<ptr4->x<<endl;
}
