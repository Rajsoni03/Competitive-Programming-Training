# Maximum Number of Words Found in Sentences - [Practice - LeetCode](https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/)

A sentence is a list of words that are separated by a single space with no leading or trailing spaces.<br>
You are given an array of strings sentences, where each sentences[i] represents a single sentence.<br><br>
Return the maximum number of words that appear in a single sentence.

Example:1
```
Input: 
sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]

Output: 
6

Explanation: 
- The first sentence, "alice and bob love leetcode", has 5 words in total.
- The second sentence, "i think so too", has 4 words in total.
- The third sentence, "this is great thanks very much", has 6 words in total.
Thus, the maximum number of words in a single sentence comes from the third sentence, which has 6 words.
```
Example:2
```
Input: 
sentences = ["please wait", "continue to fight", "continue to win"]

Output: 
3

Explanation: 
It is possible that multiple sentences contain the same number of words. 
In this example, the second and third sentences (underlined) have the same number of words.
```

## Solution 1 - Simple code

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int max_val = 0;
        
        for (int i = 0; i < n; i++){
            // word count = space count + 1
            int space_count = 1;
            int m = sentences[i].size();
            
            // calculate words on each string 
            for (int j = 0; j < m; j++){
                if (sentences[i][j] == ' '){
                    space_count++;
                }   
            }

            // update max words count
            if (max_val < space_count){
                max_val = space_count;
            }            
        }
        return max_val;
    }
};
```

## Solution 2 - Using STL count function 

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int max_val = 0;
        int word_count = 0;
        for (int i = 0; i < n; i++){
            word_count = count(sentences[i].begin(), sentences[i].end(), ' ') + 1; 
            max_val = max(max_val, word_count);
        }
        return max_val;
    }
};
```