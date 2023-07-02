class Solution {
public:
    int lengthOfLastWord(string s) {
    // Boolean value space states weather the initial spaces at the end of the list have been passed or not
		 bool space = false;
		 int charcount = 0;
    // Reverse through the list
      for (int i = s.size() - 1; i >= 0; i--) {
        // If a space is encountered and the initial spaces are passed, return character count, breaking the loop
  		 	if (s[i]==' ' && space) {
  				return charcount;
  			}
        // If the character is not a space, determine that the initial spaces are passed and add to the charcount
  			if (s[i] != ' ') {
  				charcount++;
  				space = true;
			  }
		 }
		return charcount;
    }
};
