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
    p.p4 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 20.8px; font: 13.0px Menlo; color: #1d262a; -webkit-text-stroke: #1d262a; background-color: #f5f7f9; min-height: 15.0px}
    p.p5 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 20.8px; font: 13.0px Menlo; color: #1400c4; -webkit-text-stroke: #1400c4; background-color: #f5f7f9}
    span.s1 {font-kerning: none; color: #97007e; -webkit-text-stroke: 0px #97007e}
    span.s2 {font-kerning: none; color: #1d262a; -webkit-text-stroke: 0px #1d262a}
    span.s3 {font-kerning: none}
    span.s4 {font-kerning: none; color: #1400c4; -webkit-text-stroke: 0px #1400c4}
    span.s5 {font-kerning: none; color: #491187; -webkit-text-stroke: 0px #491187}
  </style>
</head>
<body>
<p class="p1"><span class="s1">class</span><span class="s2"> </span><span class="s3">Solution</span><span class="s2"> {</span></p>
<p class="p2"><span class="s3">public</span><span class="s2">:</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">    </span></span><span class="s1">int</span><span class="s2"> </span><span class="s4">kth</span><span class="s3">(</span><span class="s1">int</span><span class="s3"> a[], </span><span class="s1">int</span><span class="s3"> m, </span><span class="s1">int</span><span class="s3"> b[], </span><span class="s1">int</span><span class="s3"> n, </span><span class="s1">int</span><span class="s3"> k)</span><span class="s2"> {</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">if</span><span class="s3"> (m &lt; n) </span><span class="s1">return</span><span class="s3"> kth(b,n,a,m,k);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">if</span><span class="s3"> (n==</span><span class="s4">0</span><span class="s3">) </span><span class="s1">return</span><span class="s3"> a[k</span><span class="s4">-1</span><span class="s3">];</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">if</span><span class="s3"> (k==</span><span class="s4">1</span><span class="s3">) </span><span class="s1">return</span><span class="s3"> min(a[</span><span class="s4">0</span><span class="s3">],b[</span><span class="s4">0</span><span class="s3">]);</span></p>
<p class="p4"><span class="s3"></span><br></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">int</span><span class="s3"> j = min(n,k/</span><span class="s4">2</span><span class="s3">);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">int</span><span class="s3"> i = k-j;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">if</span><span class="s3"> (a[i</span><span class="s4">-1</span><span class="s3">] &gt; b[j</span><span class="s4">-1</span><span class="s3">]) </span><span class="s1">return</span><span class="s3"> kth(a,i,b+j,n-j,k-j);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">return</span><span class="s3"> kth(a+i,m-i,b,j,k-i);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">    </span>}</span></p>
<p class="p4"><span class="s3"></span><br></p>
<p class="p5"><span class="s2"><span class="Apple-converted-space">    </span></span><span class="s1">double</span><span class="s2"> </span><span class="s3">findMedianSortedArrays</span><span class="s5">(</span><span class="s1">int</span><span class="s5"> a[], </span><span class="s1">int</span><span class="s5"> m, </span><span class="s1">int</span><span class="s5"> b[], </span><span class="s1">int</span><span class="s5"> n)</span><span class="s2"> {</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">int</span><span class="s3"> k = (m+n)/</span><span class="s4">2</span><span class="s3">;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">int</span><span class="s3"> m1 = kth(a,m,b,n,k+</span><span class="s4">1</span><span class="s3">);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">if</span><span class="s3"> ((m+n)%</span><span class="s4">2</span><span class="s3">==</span><span class="s4">0</span><span class="s3">) {</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">            </span></span><span class="s1">int</span><span class="s3"> m2 = kth(a,m,b,n,k);</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">            </span></span><span class="s1">return</span><span class="s3"> ((</span><span class="s1">double</span><span class="s3">)m1+m2)/</span><span class="s4">2.0</span><span class="s3">;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span>}</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">return</span><span class="s3"> m1;</span></p>
<p class="p3"><span class="s3"><span class="Apple-converted-space">    </span>}</span></p>
<p class="p3"><span class="s3">};</span></p>
</body>
</html>
