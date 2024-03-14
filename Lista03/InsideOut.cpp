#include <iostream>
using namespace std;

int len(string i){
    int c =0;
    for(int x: i){
        c++;
    }
    return c;
}

int main() {
    int lop;
    cin>>lop;
    cin.ignore();
for(int f = 0;f<lop;f++){
   char word[101];
   cin.getline(word,101);
   int word_size = len(word);
   char first_half[51];
   char second_half[51];
   int k = 0;
   int j =0;
   for (int i = word_size - 1; i >= 0; i--) {
        second_half[j] = word[i];
        j++;
        if (j == word_size / 2) 
            break;
    }
   for(int i = (word_size/2) - 1;i>=0;i--){
       first_half[k] = word[i];
       k++;
       
   }
   for(int p =0;first_half[p]!='\0';p++){
       cout << first_half[p];
   }
   for(int h =0;first_half[h]!='\0';h++){
       cout << second_half[h];
   }
   
   for (int i = 0; i < 51; i++) {
            first_half[i] = '\0';
            second_half[i] = '\0';
        }
   k=0;
   j=0;
    }

    return 0;
}