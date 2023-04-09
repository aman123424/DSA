//Question Link => https://www.codingninjas.com/codestudio/problems/count-palindrome-words-in-a-sentence_975378?leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string word){
	int s = 0;
	int e = word.size() - 1;

	while(s<=e){
		if(word[s] != word[e]){
			return false;
		}
		s++;
		e--;
	}

	return true;
}

int countNumberOfPalindromeWords(string s)
{
	//Your code goes here
	if(s.size() == 0){
		return 0;
	}

	string word;

	for(int j = 0; j < s.size(); j++){
		s[j] = tolower(s[j]);
	}
	
	int count = 0;
	int i = 0;
	while(i < s.size()){
          if (s[i] == ' ') {
			  if(isPallindrome(word)){
				  count++;
			  }
			  while(s[i] == ' '){
					i++;
				}
			  word.clear();
          } else {
			  word.push_back(s[i]);
			  i++;
		  }
        }

		if(isPallindrome(word)){
			count++;
		}

		return count;
}