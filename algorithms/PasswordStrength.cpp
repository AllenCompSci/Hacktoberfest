#include <iostream>

using namespace std;

class PasswordStrength
{
    private:
        string password;
    public:

        friend istream& operator>>(istream& fin, PasswordStrength& pass)
        {
            fin >> pass.password;
            return fin;
        }

        void strength()
        {
              bool hasLetter = false;
              bool hasDigit = false;
              bool hasUpperCase = false;
              bool hasLowerCase = false;
              bool hasMuchLetter = false;


              if(this->password.length()>=8)
                  hasMuchLetter = true;

              for(int i=0; i<this->password.length(); i++)
              {
                    if (isupper(this->password[i]))
                    {
                        hasUpperCase = true;
                    }
                    if (islower(this->password[i]))
                    {
                        hasLowerCase = true;
                    }
                    if (isalpha(this->password[i]))
                    {
                        hasLetter = true;
                    }
                    if(isdigit(this->password[i]))
                    {
                        hasDigit = true;
                    }
              }

              if(hasLetter && hasDigit && hasUpperCase && hasLowerCase && hasMuchLetter)
                    cout<<"Very Strong\n";
              else if(hasLetter && hasDigit && (hasUpperCase || hasLowerCase) && hasMuchLetter)
                    cout<<"Strong\n";
              else if(hasLetter && hasDigit && hasUpperCase==false && hasLowerCase==false && hasMuchLetter)
                    cout<<"Good\n";
              else if(hasLetter && hasDigit && password.length()==false && hasUpperCase==false && hasLowerCase==false)
                    cout<<"Weak\n";
              else if((hasLetter==false && hasDigit) || (hasLetter && hasDigit==false) && password.length()==false && hasUpperCase==false && hasLowerCase==false)
                    cout<<"Very Weak\n";
              else
                    cout<<"Weak\n";


        }

};

int main()
{
    PasswordStrength pass;
    cin>>pass;
    pass.strength();
    return 0;
}
