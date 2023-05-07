<h2><a href="https://leetcode.com/problems/find-the-longest-valid-obstacle-course-at-each-position/">1964. Find the Longest Valid Obstacle Course at Each Position</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You want to build some obstacle courses. You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">obstacles</code> of length <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">obstacles[i]</code> describes the height of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> obstacle.</p>

<p style="user-select: auto;">For every index <code style="user-select: auto;">i</code> between <code style="user-select: auto;">0</code> and <code style="user-select: auto;">n - 1</code> (<strong style="user-select: auto;">inclusive</strong>), find the length of the <strong style="user-select: auto;">longest obstacle course</strong> in <code style="user-select: auto;">obstacles</code> such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">You choose any number of obstacles between <code style="user-select: auto;">0</code> and <code style="user-select: auto;">i</code> <strong style="user-select: auto;">inclusive</strong>.</li>
	<li style="user-select: auto;">You must include the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> obstacle in the course.</li>
	<li style="user-select: auto;">You must put the chosen obstacles in the <strong style="user-select: auto;">same order</strong> as they appear in <code style="user-select: auto;">obstacles</code>.</li>
	<li style="user-select: auto;">Every obstacle (except the first) is <strong style="user-select: auto;">taller</strong> than or the <strong style="user-select: auto;">same height</strong> as the obstacle immediately before it.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array</em> <code style="user-select: auto;">ans</code> <em style="user-select: auto;">of length</em> <code style="user-select: auto;">n</code>, <em style="user-select: auto;">where</em> <code style="user-select: auto;">ans[i]</code> <em style="user-select: auto;">is the length of the <strong style="user-select: auto;">longest obstacle course</strong> for index</em> <code style="user-select: auto;">i</code><em style="user-select: auto;"> as described above</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> obstacles = [1,2,3,2]
<strong style="user-select: auto;">Output:</strong> [1,2,3,3]
<strong style="user-select: auto;">Explanation:</strong> The longest valid obstacle course at each position is:
- i = 0: [<u style="user-select: auto;">1</u>], [1] has length 1.
- i = 1: [<u style="user-select: auto;">1</u>,<u style="user-select: auto;">2</u>], [1,2] has length 2.
- i = 2: [<u style="user-select: auto;">1</u>,<u style="user-select: auto;">2</u>,<u style="user-select: auto;">3</u>], [1,2,3] has length 3.
- i = 3: [<u style="user-select: auto;">1</u>,<u style="user-select: auto;">2</u>,3,<u style="user-select: auto;">2</u>], [1,2,2] has length 3.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> obstacles = [2,2,1]
<strong style="user-select: auto;">Output:</strong> [1,2,1]
<strong style="user-select: auto;">Explanation: </strong>The longest valid obstacle course at each position is:
- i = 0: [<u style="user-select: auto;">2</u>], [2] has length 1.
- i = 1: [<u style="user-select: auto;">2</u>,<u style="user-select: auto;">2</u>], [2,2] has length 2.
- i = 2: [2,2,<u style="user-select: auto;">1</u>], [1] has length 1.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> obstacles = [3,1,5,6,4,2]
<strong style="user-select: auto;">Output:</strong> [1,1,2,3,2,2]
<strong style="user-select: auto;">Explanation:</strong> The longest valid obstacle course at each position is:
- i = 0: [<u style="user-select: auto;">3</u>], [3] has length 1.
- i = 1: [3,<u style="user-select: auto;">1</u>], [1] has length 1.
- i = 2: [<u style="user-select: auto;">3</u>,1,<u style="user-select: auto;">5</u>], [3,5] has length 2. [1,5] is also valid.
- i = 3: [<u style="user-select: auto;">3</u>,1,<u style="user-select: auto;">5</u>,<u style="user-select: auto;">6</u>], [3,5,6] has length 3. [1,5,6] is also valid.
- i = 4: [<u style="user-select: auto;">3</u>,1,5,6,<u style="user-select: auto;">4</u>], [3,4] has length 2. [1,4] is also valid.
- i = 5: [3,<u style="user-select: auto;">1</u>,5,6,4,<u style="user-select: auto;">2</u>], [1,2] has length 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == obstacles.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= obstacles[i] &lt;= 10<sup style="user-select: auto;">7</sup></code></li>
</ul>
</div>