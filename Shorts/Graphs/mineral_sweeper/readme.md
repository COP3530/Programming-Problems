## Problem Statement
You are given a `vector<string>`. For each non-hash symbol character in the input, update the value from `'0'` to the number of hash symbols (`'#'`) adjacent to that tile. Tiles are adjacent if they are next to each other horizontally, vertically, or diagonally.
&nbsp;
### Example 1:
>> **Input:** \
>> `4` \
>> `"00#0"` \
>> `"0##0"` \
>> `"#000"` \
>> `"#0##"` \
>> **Output:** \
>> `"13#2"` \
>> `"2##2"` \
>> `"#543"` \
>> `"#3##"` \
>> **Explanation:** \
>> The input gives the number of strings in the graph followed by each string on a separate line. \
>> Every `'0'` entry has been updated to the number of neighboring `'#'` entries.
>> For example, the third row second column entry is `'5'` in the output because it has 5 neighboring hash symbols:
>> up, up-right, down-right, down-left, and left.

### Difficulty
Shorts (&lt;10 minutes)

### Author
Andrew Penton

### Date Created
04/06/2023