<h2><a href="https://leetcode.com/problems/optimal-partition-of-string/">2405. Optimal Partition of String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>, partition the string into one or more <strong style="user-select: auto;">substrings</strong> such that the characters in each substring are <strong style="user-select: auto;">unique</strong>. That is, no letter appears in a single substring more than <strong style="user-select: auto;">once</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of substrings in such a partition.</em></p>

<p style="user-select: auto;">Note that each character should belong to exactly one substring in a partition.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abacaba"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>
Two possible partitions are ("a","ba","cab","a") and ("ab","a","ca","ba").
It can be shown that 4 is the minimum number of substrings needed.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ssssss"
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:
</strong>The only valid partition is ("s","s","s","s","s","s").
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of only English lowercase letters.</li>
</ul>
</div>