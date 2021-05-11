#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
int sizeofstring(string s) {
	int i = 0;
    while (s[i])
        i++;
    return i;
}
void convertOpposite(string& str)
{
    int ln = sizeofstring(str);

    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}
int countVowels(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
    {
    	char c = toupper(str[i]); 
    	if ( c =='A'){
        	++count;
        	break;
		}
	}for (int i=0; i<str.length(); i++)
    {
    	char c = toupper(str[i]); 
    	if ( c =='E'){
        	++count;
        	break;
		}
	}
	for (int i=0; i<str.length(); i++)
    {
    	char c = toupper(str[i]); 
    	if ( c =='O'){
        	++count;
        	break;
		}
	}
	for (int i=0; i<str.length(); i++)
    {
    	char c = toupper(str[i]); 
    	if ( c =='I'){
        	++count;
        	break;
		}
	}
	for (int i=0; i<str.length(); i++)
    {
    	char c = toupper(str[i]); 
    	if ( c =='U'){
        	++count;
        	break;
		}
	}       
    return count;
}
void printDups(string str)
{
    map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
 
    for (auto it : count) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}
bool areAnagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    if (n1 != n2)
        return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
  
    return true;
}
bool validate(string s){
	int i;
	int it=0;
	for( i=0;i<s.length()-1;i++){
		if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
		{
			it++;
		}
	}
		if(it==s.length()-1){
			return true;
		}
		else 
		{
			return false;
		}
	
}
string reverse(string& s)
{
	int l=0,r=s.length()-1;
	while(l<r){
		swap(s[l],s[r]);
		l++;
		r--;
	}
	return s;
}
bool palindrome(string s){
	string s1=s;
	string s2 = reverse(s);
	if(s1==s2){
		return true;
	}
	else {
		return false;
	}
}
int main() { 
	string s;
	cout<<"Enter string 1:"<<"\n";
	cin>>s;
	
	cout<<"Size of String1:"<<sizeofstring(s)<<endl;
	convertOpposite(s);
	cout<<"Opposite case:"<<s<<endl;
	cout<<"Vowels:"<<countVowels(s)<<endl;
	cout<<"Validation:"<<validate(s)<<endl;
	reverse(s);
	cout<<"Reverse of string:"<<s<<endl;
	cout<<"Palindrome:"<<palindrome(s)<<endl;
	cout<<"Duplicates:"<<"\n";
	printDups(s);
	string s2;
	cout<<"Enter string 2:"<<"\n";
	cin>>s2;
	
	cout<<"IsAnagram:"<<areAnagram(s,s2);
	
	
	
	
}

