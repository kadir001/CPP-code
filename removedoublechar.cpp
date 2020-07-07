#include<iostream>
 #include<string> 
 #include<map>
  using namespace std; 
  //define function protoTypes
 string removeDuplicateUsingBruteForceMethod(string);
  string removeDuplicateUsingSortingMethod(string); 
  string removeDuplicateUsingHashMapMethod(string); 
  //main program 
  int main() { string string1,string2,string3; 
  //using brute force method
   string1 = removeDuplicateUsingBruteForceMethod("afaddedee"); 
   cout<< "\n using brute force method:"<<string1<<endl; 
   //first sort the string and then remove duplicate /*lets say we used any sorting technique and sort the string and pass it to below function */ 
   string2 = removeDuplicateUsingSortingMethod("aadddeeef");
   cout<<"using sorting and then remove duplicate: "<<string2<<endl; 
   //using Hash map 
   string3= removeDuplicateUsingHashMapMethod("afaddedee"); 
   cout<<"using Hash Map: "<<string3<<endl; 
   return 0; } 
   string removeDuplicateUsingBruteForceMethod(string str) { 
   	int stringLength = str.length() - 1; 
   	for (int i = 0; i < stringLength; i++) { 
   		for (int j = i + 1; j < stringLength;) {
   			 if (str[i] == str[j]) { //if two conjugative char are same then replace the first char with last char of string and reduce the length of string 
   			 str[j] = str[--stringLength]; } 
   			 else { //or increase j j++; } } } 
   			 //remove the elements from the end of the string 
   			 str = str.substr(0, stringLength); 
   			 return str; } 
   			 string removeDuplicateUsingSortingMethod(string str) { 
   			 	int current = 0, last = 0; //create two index iterator 
   			 	for (; str[current]; current++) { 
   			 		if (str[last] != str[current]) { 
   			 			//if last and current is not equal then increase last and store current on it 
   			 			str[++last] = str[current]; } } //remove extra elements from end of the string str = str.substr(0, last + 1); return str; } string removeDuplicateUsingHashMapMethod(string str) { map<char, int> ht; //define hash map int stringLength = str.length(); //get the length of string for (int i = 0; i < stringLength - 1; i++) { if (ht.find(str[i]) == ht.end()) { //if string char is not in hash then store it to hash map ht[str[i]] = 1; } } map<char, int>::iterator dis; //create hash map iterator string temp = ""; //temp string for (dis = ht.begin(); dis != ht.end(); dis++) { temp += dis->first; //form string using hash values } 
return temp; }