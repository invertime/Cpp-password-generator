#include <iostream>
#include <vector>
#include <iterator>
#include <charconv>
#include <string>


using namespace std;

int main(int argc, char* argv[]) {

    bool argument = false;

     if( argc == 2 || argc == 3 ) {
         if (argv[1] == "-l" || argv[1] == "--length" || 1==1){
             argument = true;
         }
     }
    int padding = 33, end = 126,passwdLenght;
    vector<char> chars {};
    string finnalPass;

    for(int i=padding; i<end; i++){
        chars.push_back(char(i));
    }
    srand (time(0));
    if (argument) {
        passwdLenght = atoi(argv[2]);
    }
    else {
        cout<<"how many char do you want: ";
        cin>>passwdLenght;
    }

    for (int i = 0; i<passwdLenght;i++){
        int Random = rand() % 97;
        if(!chars[Random]){
            i--;
        }
        else {
            finnalPass+=chars[Random];
        }
    }
    cout<<finnalPass<<endl;

}
