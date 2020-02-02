#include <iostream>

using namespace std;

class Deep{
private:
  int *data;
public:
  void set_data_values(int d){
    *data = d;
  }
  int get_data_value()
  {
    return *data;
  }
  //constructor
  Deep(int d);
  //copy constructor
  Deep(const Deep&source);
  //destructor
  ~Deep();
};

Deep::Deep(int d)
{
  data = new int;
  *data = d;
}

Deep::Deep(const Deep &source)
  :Deep(*source.data)
  {
    cout<<"copy constructor- deep copy"<<endl;
  }

Deep::~Deep()
{
  delete data;
  cout<<"destructor freeing data"<<endl;
}

void display_deep(Deep s)
{
  cout<<s.get_data_value()<<endl;
}

int main()
{
  Deep obj1 {100};
  display_deep(obj1);

  Deep obj2{obj1};

  obj2.set_data_values(1000);
  display_deep(obj2);
  return 0;
}
