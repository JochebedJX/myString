#include<iostream>
#include<string.h>

class myString{
  private:
    char* _str;

  public:
    myString()
      :_str(new char[1])
    {
      _str[0]='\0';
    }
    myString(const char* s)
      :_str(new char[strlen(s)+1])
    {
      strcpy(_str,s);
    }
    myString(size_t n, char c)
      :_str(new char[n+1])
    {
      size_t i=0;
      for(i=0;i<n;i++)
      {
        _str[i]=c;
      }
      _str[i]='\0';
    }
    myString(const myString& s)
      : _str(new char[strlen(s._str)+1])
    {
      strcpy(_str, s._str);
    }
    myString(const myString& s, size_t n)
      :_str(new char[n+1])
    {
      size_t i=0;
      for(i=0;i<n;i++)
      {
        _str[i]=s._str[i];
      }
      _str[i]='\0';
    }

    ~myString()
    {

    }
};
int main()
{

  return 0;

    }

    ~myString()
    {

    }
};
int main()
{

  return 0;
}
