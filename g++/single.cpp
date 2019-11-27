#include <iostream>

using namespace std;

void twitter_splitter(string message) {
    string local = message;
    string split = "";
    int i = 1;
    while(local.length() > 0) {

        // get current message length
        int curr_msg_length = local.length();
        // ternary operator assigns how much to write
        int substr_length = (curr_msg_length > 140) ? 140 : curr_msg_length;
        // get substring of letters based on length left
        split = local.substr(0, substr_length);
        // print message
        cout << "Message part " << i << ": " << endl << split << endl << endl;
        // update reference string
        local = local.substr(substr_length);
        //increment count variable
        i++;
    }
}
    



int main(int arcg, char **argv, char **envp) {
   
   string message;

   //get message from user
   cout << "Please enter a message to split: ";
   getline(cin, message); 
   cout << endl;

   //call our function
   twitter_splitter(message);

    return 0;

}
