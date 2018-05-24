//来自Avenger1-3的修改
//修改  类名错误
class MyString {
 public:
  const  string& operator = (const MyString& p1)
  {
      if(this!= &p1)
      {
         this.len = p1.len;
         delete [] this._rep;
         this._rep = new char[this.len+1];
         strcpy(this._rep,p1._rep);
      }
      return *this;
  }
  
  friend  MyString operator + (const MyString & p1)
  {
      int len = this._len+p1._len;
      char* str = new char[len+1];
      strcpy(str,this._rep);
      strcat(str,p1._rep);
      MyString p2(str);
      delete str;
      return p2;
  }
  
  friend  MyString operator += (const MyString & p1)
  {
      int len = this.len+p1._len;
      char* str = this._rep;
      this._rep = new char[len+1];
      strcpy(this._rep,str);
      strcat(this._rep,p1._rep);
      delete str;
      return *this;
  }

private:
char* _rep;
int _len;
};
