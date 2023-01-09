// :::: Question 1 ::::
// Remove vowels from string

// problem statement:::
// https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446/1?fbclid=IwAR25-PTzc2bg5pvq_3AvFsxaCQ7kjDG3Rqj6GwAqzGCE4QVeN84vutb75nc

// :::: Solution ::::

string removeVowels(string s){
	    string ans = "";
	    for(char x: s){
	        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
	            continue;
	        }
	        else{
	            ans += x;
	        }
	            
	    }
	    return ans;
	}
