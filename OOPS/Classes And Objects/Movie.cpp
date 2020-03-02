#include<bits/stdc++.h>
using namespace std;

class Artist
{
public:
  string type;
  string name;
  string gender;

  Artist(string t,string n,string g):type(t),name(n),gender(g)
  {

  }
};

class Movie
{
public:
  string title;
  int budget;
  Artist *artists;
  int count;

  Movie(string t1,int b):title(t1),budget(b)
  {

  }

  bool addArtists(Artist &arr)
  {
    int i;
    for(i=0;i<count;i++)
    {
      if(artists[i].name == arr.name && artists[i].type == arr.type)
      {
        return false;
      }
    }
    artists[count] = arr;
    count++;
    return true;
  }

  bool replace(Artist &arr)
  {
    int i;
    for(i=0;i<=count;i++)
    {
      if(arr.name != artists[i].name && artists[i].type == arr.type)
      {
        artists[i].name = arr.name;
        return true;
      }
    }
    return false;
  }


  void yettoassignedartistspost()
  {
      int i,flag=0;
      for(i=0;i<count;i++)
      {
        if(artists[i].type == "Actor"|| artists[i].type == "Actress"|| artists[i].type == "Director" ||artists[i].type == "Musician" ||artists[i].type == "Singer")
        {

        }
      }
      if(flag>=5)
      {
        cout<<"Not required"<<endl;
      }
      else
      {
        cout<<"Required"<<endl;
      }
  }

  void display()
  {
    cout<<title<<endl;
    cout<<budget<<endl;
    int i;
    for(i=0;i<count;i++)
    {
      cout<<artists[i].type<<endl;
      cout<<artists[i].name<<endl;
      cout<<artists[i].gender<<endl;
    }
  }

};

int main()
{
  Artist a1("Actor","Bale","M");
  Artist a2("Actress","Kate Perry","F");
  Artist a3("Director","Nolan","M");
  Artist a4("Singer","Anne","F");
  Artist a5("Musician","Hans Zimmer","M");

  Artist artistArr[]={a1,a2,a3,a4,a5};

  Movie holly("Tenet",1400);
  holly.artists = artistArr;
  holly.count = 5;

  holly.yettoassignedartistspost();

  //adding artist
  Artist a6("Actor","Affleck","F");
  bool ans;
  ans = holly.addArtists(a6);
  if(ans)
  {
    cout<<"new artists added"<<endl;
  }
  else
  {
    cout<<"new artists not added"<<endl;
  }

  //replacing artist
  Artist a7("Actress","Susan","F");
  bool ans1;
  ans1 = holly.replace(a7);
  if(ans1)
  {
    cout<<"replaced"<<endl;
  }
  else
  {
    cout<<"not replaced"<<endl;
  }
  holly.display();
  return 0;
}
