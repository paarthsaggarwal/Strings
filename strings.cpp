# include <iostream> 

using namespace std;

int main()

{
    string phrase = "Hello Bob";
    phrase[0] = 'D';
    cout << phrase << endl;
    
    string bye = "Bye Bob";
    cout << bye.length() << endl;

    string dumb = "You are dumb Bob";
    cout << dumb[5] << endl;

    string strong = "You are very strong Bob";
    cout << strong.find("Bob", 0) << endl;

    string bully = "Stop bullying Bob";
    cout << bully.substr(0, 4) << endl;

    string neverasked = "I never asked Bob";
    string variable;
    variable = neverasked.substr(5,3);
    cout << variable;
   
    return 0;
}