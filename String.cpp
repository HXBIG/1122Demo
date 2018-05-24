

Class String{

const Strinf& operator=(const String&s1)
{
  if(this!=&s1)
  {
    this.len=s1.len;
    delete this.rep;
    this.rep=new char[this.len+1];
    strcpy(this.rep,s1.rep);
  }
  return *this;
}

 friend String operator+(const String&s1,const String&s2)
  {
     int len=s1.len+s2.len;
     char*str=new char[len+1];
     strcpy(str,s1.rep);
     strcat(str,s2.rep);
     String s(str);
     delete [] str;
     return s;
  }
 
 const String& operator+=(const&Strings1)
 {
    this.len+=s1.len;
    char*str=this.rep;
    this.rep=new char[this.len+1];
    strcpy(this.rep,str);
    strcat(this.rep,s1.rep);
    delete [] str;
    return *this;  
 }
 
};
