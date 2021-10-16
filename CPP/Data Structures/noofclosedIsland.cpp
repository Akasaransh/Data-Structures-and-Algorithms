<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
  <meta http-equiv="Content-Style-Type" content="text/css">
  <title></title>
  <meta name="Generator" content="Cocoa HTML Writer">
  <meta name="CocoaVersion" content="2022.6">
  <style type="text/css">
    p.p1 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 20.8px; font: 13.0px Menlo; color: #491187; -webkit-text-stroke: #491187; background-color: #f5f7f9}
    p.p2 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 20.8px; font: 13.0px Menlo; color: #97007e; -webkit-text-stroke: #97007e; background-color: #f5f7f9}
    p.p3 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 20.8px; font: 13.0px Menlo; color: #1d262a; -webkit-text-stroke: #1d262a; background-color: #f5f7f9}
    p.p4 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 20.8px; font: 13.0px Menlo; color: #0c5a01; -webkit-text-stroke: #0c5a01; background-color: #f5f7f9}
    span.s1 {font-kerning: none; color: #97007e; -webkit-text-stroke: 0px #97007e}
    span.s2 {font-kerning: none; color: #1d262a; -webkit-text-stroke: 0px #1d262a}
    span.s3 {font-kerning: none}
    span.s4 {font-kerning: none; color: #1400c4; -webkit-text-stroke: 0px #1400c4}
  </style>
</head>
<body>
<p class="p1"><span class="s1">class</span><span class="s2"> </span><span class="s3">Solution</span><span class="s2"> {</span></p>
<p class="p2"><span class="s3">public</span><span class="s2">:</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">    </span></span><span class="s1">int</span><span class="s2"> </span><span class="s4">closedIsland</span><span class="s3">(vector&lt;vector&lt;</span><span class="s1">int</span><span class="s3">&gt;&gt;&amp; grid)</span><span class="s2"> {</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">int</span><span class="s3"> res = </span><span class="s4">0</span><span class="s3">;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">for</span><span class="s3"> (</span><span class="s1">int</span><span class="s3"> i = </span><span class="s4">0</span><span class="s3">; i &lt; grid.size(); i++){</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">            </span></span><span class="s1">for</span><span class="s3"> (</span><span class="s1">int</span><span class="s3"> j = </span><span class="s4">0</span><span class="s3">; j &lt; grid[</span><span class="s4">0</span><span class="s3">].size(); j++){</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">                </span></span><span class="s1">if</span><span class="s3"> (grid[i][j] == </span><span class="s4">0</span><span class="s3">){</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">                    </span>res += dfs(grid, i, j) ? </span><span class="s4">1</span><span class="s3"> : </span><span class="s4">0</span><span class="s3">;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">                </span>}</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">            </span>}</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span>}</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">return</span><span class="s3"> res;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">    </span>}</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">    </span></span><span class="s1">bool</span><span class="s2"> </span><span class="s4">dfs</span><span class="s3">(vector&lt;vector&lt;</span><span class="s1">int</span><span class="s3">&gt;&gt;&amp; g, </span><span class="s1">int</span><span class="s3"> i, </span><span class="s1">int</span><span class="s3"> j)</span><span class="s2">{</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">if</span><span class="s3"> (i &lt; </span><span class="s4">0</span><span class="s3"> || j &lt; </span><span class="s4">0</span><span class="s3"> || i &gt;= g.size() || j &gt;= g[</span><span class="s4">0</span><span class="s3">].size()){</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">            </span></span><span class="s1">return</span><span class="s3"> </span><span class="s1">false</span><span class="s3">;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span>}</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">if</span><span class="s3"> (g[i][j] == </span><span class="s4">1</span><span class="s3">){</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">            </span></span><span class="s1">return</span><span class="s3"> </span><span class="s1">true</span><span class="s3">;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span>}</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span>g[i][j] = </span><span class="s4">1</span><span class="s3">;</span></p>
<p class="p4"><span class="s2"><span class="Apple-converted-space">        </span></span><span class="s3">/* IMPORTANT <b>NOTE:</b><span class="Apple-converted-space"> </span></span></p>
<p class="p4"><span class="s3"><span class="Apple-converted-space">        </span>WHY I CANNOT USE `return dfs(g, i+1, j) &amp;&amp; dfs(g, i, j+1) &amp;&amp; dfs(g, i-1, j) &amp;&amp; dfs(g, i, j-1);`???</span></p>
<p class="p4"><span class="s3"><span class="Apple-converted-space">        </span>BECAUSE IF ANY OF THE FIRST DFS() RETURNS FALSE, FOLLOWING ONES WILL NOT EXECUTE!!! THEN WE DON'T</span></p>
<p class="p4"><span class="s3"><span class="Apple-converted-space">        </span>HAVE THE CHANCE TO MARK THOSE 0s TO 1s!!!</span></p>
<p class="p4"><span class="s3"><span class="Apple-converted-space">        </span>*/</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">bool</span><span class="s3"> d1 = dfs(g, i+</span><span class="s4">1</span><span class="s3">, j);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">bool</span><span class="s3"> d2 = dfs(g, i, j+</span><span class="s4">1</span><span class="s3">);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">bool</span><span class="s3"> d3 = dfs(g, i</span><span class="s4">-1</span><span class="s3">, j);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">bool</span><span class="s3"> d4 = dfs(g, i, j</span><span class="s4">-1</span><span class="s3">);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">return</span><span class="s3"> d1 &amp;&amp; d2 &amp;&amp; d3 &amp;&amp; d4;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">    </span>}</span></p>
<p class="p3"><span class="s3">};</span></p>
</body>
</html>
