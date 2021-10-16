<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
  <meta http-equiv="Content-Style-Type" content="text/css">
  <title></title>
  <meta name="Generator" content="Cocoa HTML Writer">
  <meta name="CocoaVersion" content="2022.6">
  <style type="text/css">
    p.p1 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 20.8px; font: 13.0px Menlo; color: #1d262a; -webkit-text-stroke: #1d262a; background-color: #f5f7f9}
    span.s1 {font-kerning: none; color: #491187; -webkit-text-stroke: 0px #491187}
    span.s2 {font-kerning: none}
    span.s3 {font-kerning: none; color: #97007e; -webkit-text-stroke: 0px #97007e}
    span.s4 {font-kerning: none; color: #1400c4; -webkit-text-stroke: 0px #1400c4}
  </style>
</head>
<body>
<p class="p1"><span class="s1">vector</span><span class="s2">&lt;</span><span class="s1">vector</span><span class="s2">&lt;</span><span class="s3">int</span><span class="s2">&gt;&gt; threeSum(</span><span class="s1">vector</span><span class="s2">&lt;</span><span class="s3">int</span><span class="s2">&gt;&amp; nums) {</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">    </span>sort(nums.begin(), nums.end());</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">    </span></span><span class="s1">vector</span><span class="s2">&lt;</span><span class="s1">vector</span><span class="s2">&lt;</span><span class="s3">int</span><span class="s2">&gt;&gt; res;</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">    </span></span><span class="s3">for</span><span class="s2"> (</span><span class="s3">unsigned</span><span class="s2"> </span><span class="s3">int</span><span class="s2"> i=</span><span class="s4">0</span><span class="s2">; i&lt;nums.size(); i++) {</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">        </span></span><span class="s3">if</span><span class="s2"> ((i&gt;</span><span class="s4">0</span><span class="s2">) &amp;&amp; (nums[i]==nums[i</span><span class="s4">-1</span><span class="s2">]))</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">            </span></span><span class="s3">continue</span><span class="s2">;</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">        </span></span><span class="s3">int</span><span class="s2"> l = i+</span><span class="s4">1</span><span class="s2">, r = nums.size()</span><span class="s4">-1</span><span class="s2">;</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">        </span></span><span class="s3">while</span><span class="s2"> (l&lt;r) {</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">            </span></span><span class="s3">int</span><span class="s2"> s = nums[i]+nums[l]+nums[r];</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">            </span></span><span class="s3">if</span><span class="s2"> (s&gt;</span><span class="s4">0</span><span class="s2">) r--;</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">            </span></span><span class="s3">else</span><span class="s2"> </span><span class="s3">if</span><span class="s2"> (s&lt;</span><span class="s4">0</span><span class="s2">) l++;</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">            </span></span><span class="s3">else</span><span class="s2"> {</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">                </span>res.push_back(</span><span class="s1">vector</span><span class="s2">&lt;</span><span class="s3">int</span><span class="s2">&gt; {nums[i], nums[l], nums[r]});</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">                </span></span><span class="s3">while</span><span class="s2"> (nums[l]==nums[l+</span><span class="s4">1</span><span class="s2">]) l++;</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">                </span></span><span class="s3">while</span><span class="s2"> (nums[r]==nums[r</span><span class="s4">-1</span><span class="s2">]) r--;</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">                </span>l++; r--;</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">            </span>}</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">        </span>}</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">    </span>}</span></p>
<p class="p1"><span class="s2"><span class="Apple-converted-space">    </span></span><span class="s3">return</span><span class="s2"> res;</span></p>
<p class="p1"><span class="s2">}</span></p>
</body>
</html>
