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
    p.p2 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 20.8px; font: 13.0px Menlo; color: #1d262a; -webkit-text-stroke: #1d262a; background-color: #f5f7f9}
    p.p3 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 20.8px; font: 13.0px Menlo; color: #97007e; -webkit-text-stroke: #97007e; background-color: #f5f7f9}
    p.p4 {margin: 0.0px 0.0px 0.0px 0.0px; line-height: 22.0px; font: 14.0px 'Helvetica Neue'; color: #333333; -webkit-text-stroke: #333333; min-height: 17.0px}
    p.p5 {margin: 0.0px 0.0px 0.0px 0.0px; font: 14.0px 'Helvetica Neue'; color: #000000; color: rgba(0, 0, 0, 0.65); -webkit-text-stroke: rgba(0, 0, 0, 0.65); min-height: 17.0px}
    p.p6 {margin: 0.0px 0.0px 0.0px 0.0px; font: 12.0px 'Helvetica Neue'; color: #000000; color: rgba(0, 0, 0, 0.65); -webkit-text-stroke: rgba(0, 0, 0, 0.65); min-height: 15.0px}
    span.s1 {font-kerning: none; color: #97007e; -webkit-text-stroke: 0px #97007e}
    span.s2 {font-kerning: none; color: #1d262a; -webkit-text-stroke: 0px #1d262a}
    span.s3 {font-kerning: none}
    span.s4 {font-kerning: none; color: #1400c4; -webkit-text-stroke: 0px #1400c4}
  </style>
</head>
<body>
<p class="p1"><span class="s1">class</span><span class="s2"> </span><span class="s3">Solution</span></p>
<p class="p2"><span class="s3">{</span></p>
<p class="p3"><span class="s3">public</span><span class="s2">:</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">    </span>ListNode* removeNthFromEnd(ListNode* head, </span><span class="s1">int</span><span class="s3"> n)</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">    </span>{</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">        </span>ListNode** t1 = &amp;head, *t2 = head;</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">for</span><span class="s3">(</span><span class="s1">int</span><span class="s3"> i = </span><span class="s4">1</span><span class="s3">; i &lt; n; ++i)</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">        </span>{</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">            </span>t2 = t2-&gt;next;</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">        </span>}</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">while</span><span class="s3">(t2-&gt;next != </span><span class="s1">NULL</span><span class="s3">)</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">        </span>{</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">            </span>t1 = &amp;((*t1)-&gt;next);</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">            </span>t2 = t2-&gt;next;</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">        </span>}</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">        </span>*t1 = (*t1)-&gt;next;</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">        </span></span><span class="s1">return</span><span class="s3"> head;</span></p>
<p class="p2"><span class="s3"><span class="Apple-converted-space">    </span>}</span></p>
<p class="p2"><span class="s3">};</span></p>
<p class="p4"><span class="s3"></span><br></p>
<p class="p5"><span class="s3"></span><br></p>
<p class="p6"><span class="s3"></span><br></p>
</body>
</html>
