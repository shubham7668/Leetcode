<h2><a href="https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/">1639. Number of Ways to Form a Target String Given a Dictionary</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a list of strings of the <strong style="user-select: auto;">same length</strong> <code style="user-select: auto;">words</code> and a string <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">Your task is to form <code style="user-select: auto;">target</code> using the given <code style="user-select: auto;">words</code> under the following rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">target</code> should be formed from left to right.</li>
	<li style="user-select: auto;">To form the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> character (<strong style="user-select: auto;">0-indexed</strong>) of <code style="user-select: auto;">target</code>, you can choose the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> character of the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> string in <code style="user-select: auto;">words</code> if <code style="user-select: auto;">target[i] = words[j][k]</code>.</li>
	<li style="user-select: auto;">Once you use the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> character of the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> string of <code style="user-select: auto;">words</code>, you <strong style="user-select: auto;">can no longer</strong> use the <code style="user-select: auto;">x<sup style="user-select: auto;">th</sup></code> character of any string in <code style="user-select: auto;">words</code> where <code style="user-select: auto;">x &lt;= k</code>. In other words, all characters to the left of or at index <code style="user-select: auto;">k</code> become unusuable for every string.</li>
	<li style="user-select: auto;">Repeat the process until you form the string <code style="user-select: auto;">target</code>.</li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;">Notice</strong> that you can use <strong style="user-select: auto;">multiple characters</strong> from the <strong style="user-select: auto;">same string</strong> in <code style="user-select: auto;">words</code> provided the conditions above are met.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of ways to form <code style="user-select: auto;">target</code> from <code style="user-select: auto;">words</code></em>. Since the answer may be too large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["acca","bbbb","caca"], target = "aba"
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> There are 6 ways to form target.
"aba" -&gt; index 0 ("<u style="user-select: auto;">a</u>cca"), index 1 ("b<u style="user-select: auto;">b</u>bb"), index 3 ("cac<u style="user-select: auto;">a</u>")
"aba" -&gt; index 0 ("<u style="user-select: auto;">a</u>cca"), index 2 ("bb<u style="user-select: auto;">b</u>b"), index 3 ("cac<u style="user-select: auto;">a</u>")
"aba" -&gt; index 0 ("<u style="user-select: auto;">a</u>cca"), index 1 ("b<u style="user-select: auto;">b</u>bb"), index 3 ("acc<u style="user-select: auto;">a</u>")
"aba" -&gt; index 0 ("<u style="user-select: auto;">a</u>cca"), index 2 ("bb<u style="user-select: auto;">b</u>b"), index 3 ("acc<u style="user-select: auto;">a</u>")
"aba" -&gt; index 1 ("c<u style="user-select: auto;">a</u>ca"), index 2 ("bb<u style="user-select: auto;">b</u>b"), index 3 ("acc<u style="user-select: auto;">a</u>")
"aba" -&gt; index 1 ("c<u style="user-select: auto;">a</u>ca"), index 2 ("bb<u style="user-select: auto;">b</u>b"), index 3 ("cac<u style="user-select: auto;">a</u>")
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["abba","baab"], target = "bab"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> There are 4 ways to form target.
"bab" -&gt; index 0 ("<u style="user-select: auto;">b</u>aab"), index 1 ("b<u style="user-select: auto;">a</u>ab"), index 2 ("ab<u style="user-select: auto;">b</u>a")
"bab" -&gt; index 0 ("<u style="user-select: auto;">b</u>aab"), index 1 ("b<u style="user-select: auto;">a</u>ab"), index 3 ("baa<u style="user-select: auto;">b</u>")
"bab" -&gt; index 0 ("<u style="user-select: auto;">b</u>aab"), index 2 ("ba<u style="user-select: auto;">a</u>b"), index 3 ("baa<u style="user-select: auto;">b</u>")
"bab" -&gt; index 1 ("a<u style="user-select: auto;">b</u>ba"), index 2 ("ba<u style="user-select: auto;">a</u>b"), index 3 ("baa<u style="user-select: auto;">b</u>")
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length &lt;= 1000</code></li>
	<li style="user-select: auto;">All strings in <code style="user-select: auto;">words</code> have the same length.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> and <code style="user-select: auto;">target</code> contain only lowercase English letters.</li>
</ul>
</div>