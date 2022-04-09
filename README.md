<h1 align='center'><u><b> Majority Element</b> </u></h1>

<h2> <u>Problem Link:</u> https://leetcode.com/problems/majority-element/</h2>

<h1 ><u> Idea Used: </u></h1>

## We use Moore-Voting Algorithm. Here Simply we update winner and votes,i.e if an element matches with current winner we increment vote else decrement it. Now if the vote count is 0, then the current winner should be current element with vote count as 1.

<h1 ><u> Time and Space Analysis </u></h1>

## Time-Complexity: O(N)

## Space-Compexity: O(1)
