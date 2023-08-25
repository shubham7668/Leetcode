<h2><a href="https://leetcode.com/problems/interleaving-string/">97. Interleaving String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given strings <code style="user-select: auto;">s1</code>, <code style="user-select: auto;">s2</code>, and <code style="user-select: auto;">s3</code>, find whether <code style="user-select: auto;">s3</code> is formed by an <strong style="user-select: auto;">interleaving</strong> of <code style="user-select: auto;">s1</code> and <code style="user-select: auto;">s2</code>.</p>

<p style="user-select: auto;">An <strong style="user-select: auto;">interleaving</strong> of two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> is a configuration where <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> are divided into <code style="user-select: auto;">n</code> and <code style="user-select: auto;">m</code> <span data-keyword="substring-nonempty" style="user-select: auto;">substrings</span> respectively, such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">s = s<sub style="user-select: auto;">1</sub> + s<sub style="user-select: auto;">2</sub> + ... + s<sub style="user-select: auto;">n</sub></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">t = t<sub style="user-select: auto;">1</sub> + t<sub style="user-select: auto;">2</sub> + ... + t<sub style="user-select: auto;">m</sub></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">|n - m| &lt;= 1</code></li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">interleaving</strong> is <code style="user-select: auto;">s<sub style="user-select: auto;">1</sub> + t<sub style="user-select: auto;">1</sub> + s<sub style="user-select: auto;">2</sub> + t<sub style="user-select: auto;">2</sub> + s<sub style="user-select: auto;">3</sub> + t<sub style="user-select: auto;">3</sub> + ...</code> or <code style="user-select: auto;">t<sub style="user-select: auto;">1</sub> + s<sub style="user-select: auto;">1</sub> + t<sub style="user-select: auto;">2</sub> + s<sub style="user-select: auto;">2</sub> + t<sub style="user-select: auto;">3</sub> + s<sub style="user-select: auto;">3</sub> + ...</code></li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> <code style="user-select: auto;">a + b</code> is the concatenation of strings <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/02/interleave.jpg" style="width: 561px; height: 203px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> One way to obtain s3 is:
Split s1 into s1 = "aa" + "bc" + "c", and s2 into s2 = "dbbc" + "a".
Interleaving the two splits, we get "aa" + "dbbc" + "bc" + "a" + "c" = "aadbbcbcac".
Since s3 can be obtained by interleaving s1 and s2, we return true.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> Notice how it is impossible to interleave s2 with any other string to obtain s3.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "", s2 = "", s3 = ""
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= s1.length, s2.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= s3.length &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s1</code>, <code style="user-select: auto;">s2</code>, and <code style="user-select: auto;">s3</code> consist of lowercase English letters.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong> Could you solve it using only <code style="user-select: auto;">O(s2.length)</code> additional memory space?</p>
</div>