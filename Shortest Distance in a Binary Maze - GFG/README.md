# Shortest Distance in a Binary Maze
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a <strong>n * m</strong>&nbsp;matrix <strong>grid</strong> where each element can either be <strong>0</strong> or <strong>1</strong>. You&nbsp;need to find the shortest distance&nbsp;between a given source cell to a destination cell. The path can only be created out of a cell if its value is 1.</span></p>

<p><span style="font-size:18px">If the path is not possible between source cell and destination cell, then return <strong>-1</strong>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">grid[][] = {{1, 1, 1, 1},
            {1, 1, 0, 1},
            {1, 1, 1, 1},
            {1, 1, 0, 0},
            {1, 0, 0, 1}}</span>
<span style="font-size:18px">source = {0, 1}</span>
<span style="font-size:18px">destination = {2, 2}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">3</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">1 <strong>1</strong> 1 1
1 <strong>1</strong> 0 1
1 <strong>1</strong> <strong>1</strong> 1
1 1 0 0
1 0 0 1
The highlighted part in the matrix denotes the 
shortest path from source to destination cell.</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">grid[][] = {{1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1},
            {1, 1, 1, 1, 0},
            {1, 0, 1, 0, 1}}</span>
<span style="font-size:18px">source = {0, 0}</span>
<span style="font-size:18px">destination = {3, 4}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">-1</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">The path is not possible between source and</span>&nbsp;
<span style="font-size:18px">destination, hence return -1.</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">You don't need to read or print anything. Your task is to complete the function <strong>shortestPath()&nbsp;</strong>which takes the a 2D integer array&nbsp;<strong>grid</strong>, <strong>source</strong> cell and <strong>destination</strong> cell&nbsp;as an input parameters and returns the shortest distance between source and destination cell.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n * m)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(n * m)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<ul>
	<li><span style="font-size:18px">1 ≤ n, m ≤ 500</span></li>
	<li><span style="font-size:18px">grid[i][j] == 0 or grid[i][j] == 1</span></li>
	<li><span style="font-size:18px">The source and destination cells are always inside the given matrix.</span></li>
	<li><span style="font-size:18px">The source and destination cells always contain 1.</span></li>
</ul>
 <p></p>
            </div>