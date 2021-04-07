/* Copyright (C) 2002 Jean-Marc Valin 
   File: exc_5_256_table.c
   Codebook for excitation in narrowband CELP mode (12800 bps)

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
   
   - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
   
   - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
   
   - Neither the name of the Xiph.org Foundation nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.
   
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR
   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "config-speex.h"

const signed char exc_5_256_table[1280] EXC_ICONST_ATTR = {
-8,-37,5,-43,5,
73,61,39,12,-3,
-61,-32,2,42,30,
-3,17,-27,9,34,
20,-1,-5,2,23,
-7,-46,26,53,-47,
20,-2,-33,-89,-51,
-64,27,11,15,-34,
-5,-56,25,-9,-1,
-29,1,40,67,-23,
-16,16,33,19,7,
14,85,22,-10,-10,
-12,-7,-1,52,89,
29,11,-20,-37,-46,
-15,17,-24,-28,24,
2,1,0,23,-101,
23,14,-1,-23,-18,
9,5,-13,38,1,
-28,-28,4,27,51,
-26,34,-40,35,47,
54,38,-54,-26,-6,
42,-25,13,-30,-36,
18,41,-4,-33,23,
-32,-7,-4,51,-3,
17,-52,56,-47,36,
-2,-21,36,10,8,
-33,31,19,9,-5,
-40,10,-9,-21,19,
18,-78,-18,-5,0,
-26,-36,-47,-51,-44,
18,40,27,-2,29,
49,-26,2,32,-54,
30,-73,54,3,-5,
36,22,53,10,-1,
-84,-53,-29,-5,3,
-44,53,-51,4,22,
71,-35,-1,33,-5,
-27,-7,36,17,-23,
-39,16,-9,-55,-15,
-20,39,-35,6,-39,
-14,18,48,-64,-17,
-15,9,39,81,37,
-68,37,47,-21,-6,
-104,13,6,9,-2,
35,8,-23,18,42,
45,21,33,-5,-49,
9,-6,-43,-56,39,
2,-16,-25,87,1,
-3,-9,17,-25,-11,
-9,-1,10,2,-14,
-14,4,-1,-10,28,
-23,40,-32,26,-9,
26,4,-27,-23,3,
42,-60,1,49,-3,
27,10,-52,-40,-2,
18,45,-23,17,-44,
3,-3,17,-46,52,
-40,-47,25,75,31,
-49,53,30,-30,-32,
-36,38,-6,-15,-16,
54,-27,-48,3,38,
-29,-32,-22,-14,-4,
-23,-13,32,-39,9,
8,-45,-13,34,-16,
49,40,32,31,28,
23,23,32,47,59,
-68,8,62,44,25,
-14,-24,-65,-16,36,
67,-25,-38,-21,4,
-33,-2,42,5,-63,
40,11,26,-42,-23,
-61,79,-31,23,-20,
10,-32,53,-25,-36,
10,-26,-5,3,0,
-71,5,-10,-37,1,
-24,21,-54,-17,1,
-29,-25,-15,-27,32,
68,45,-16,-37,-18,
-5,1,0,-77,71,
-6,3,-20,71,-67,
29,-35,10,-30,19,
4,16,17,5,0,
-14,19,2,28,26,
59,3,2,24,39,
55,-50,-45,-18,-17,
33,-35,14,-1,1,
8,87,-35,-29,0,
-27,13,-7,23,-13,
37,-40,50,-35,14,
19,-7,-14,49,54,
-5,22,-2,-29,-8,
-27,38,13,27,48,
12,-41,-21,-15,28,
7,-16,-24,-19,-20,
11,-20,9,2,13,
23,-20,11,27,-27,
71,-69,8,2,-6,
22,12,16,16,9,
-16,-8,-17,1,25,
1,40,-37,-33,66,
94,53,4,-22,-25,
-41,-42,25,35,-16,
-15,57,31,-29,-32,
21,16,-60,45,15,
-1,7,57,-26,-47,
-29,11,8,15,19,
-105,-8,54,27,10,
-17,6,-12,-1,-10,
4,0,23,-10,31,
13,11,10,12,-64,
23,-3,-8,-19,16,
52,24,-40,16,10,
40,5,9,0,-13,
-7,-21,-8,-6,-7,
-21,59,16,-53,18,
-60,11,-47,14,-18,
25,-13,-24,4,-39,
16,-28,54,26,-67,
30,27,-20,-52,20,
-12,55,12,18,-16,
39,-14,-6,-26,56,
-88,-55,12,25,26,
-37,6,75,0,-34,
-81,54,-30,1,-7,
49,-23,-14,21,10,
-62,-58,-57,-47,-34,
15,-4,34,-78,31,
25,-11,7,50,-10,
42,-63,14,-36,-4,
57,55,57,53,42,
-42,-1,15,40,37,
15,25,-11,6,1,
31,-2,-6,-1,-7,
-64,34,28,30,-1,
3,21,0,-88,-12,
-56,25,-28,40,8,
-28,-14,9,12,2,
-6,-17,22,49,-6,
-26,14,28,-20,4,
-12,50,35,40,13,
-38,-58,-29,17,30,
22,60,26,-54,-39,
-12,58,-28,-63,10,
-21,-8,-12,26,-62,
6,-10,-11,-22,-6,
-7,4,1,18,2,
-70,11,14,4,13,
19,-24,-34,24,67,
17,51,-21,13,23,
54,-30,48,1,-13,
80,26,-16,-2,13,
-4,6,-30,29,-24,
73,-58,30,-27,20,
-2,-21,41,45,30,
-27,-3,-5,-18,-20,
-49,-3,-35,10,42,
-19,-67,-53,-11,9,
13,-15,-33,-51,-30,
15,7,25,-30,4,
28,-22,-34,54,-29,
39,-46,20,16,34,
-4,47,75,1,-44,
-55,-24,7,-1,9,
-42,50,-8,-36,41,
68,0,-4,-10,-23,
-15,-50,64,36,-9,
-27,12,25,-38,-47,
-37,32,-49,51,-36,
2,-4,69,-26,19,
7,45,67,46,13,
-63,46,15,-47,4,
-41,13,-6,5,-21,
37,26,-55,-7,33,
-1,-28,10,-17,-64,
-14,0,-36,-17,93,
-3,-9,-66,44,-21,
3,-12,38,-6,-13,
-12,19,13,43,-43,
-10,-12,6,-5,9,
-49,32,-5,2,4,
5,15,-16,10,-21,
8,-62,-8,64,8,
79,-1,-66,-49,-18,
5,40,-5,-30,-45,
1,-6,21,-32,93,
-18,-30,-21,32,21,
-18,22,8,5,-41,
-54,80,22,-10,-7,
-8,-23,-64,66,56,
-14,-30,-41,-46,-14,
-29,-37,27,-14,42,
-2,-9,-29,34,14,
33,-14,22,4,10,
26,26,28,32,23,
-72,-32,3,0,-14,
35,-42,-78,-32,6,
29,-18,-45,-5,7,
-33,-45,-3,-22,-34,
8,-8,4,-51,-25,
-9,59,-78,21,-5,
-25,-48,66,-15,-17,
-24,-49,-13,25,-23,
-64,-6,40,-24,-19,
-11,57,-33,-8,1,
10,-52,-54,28,39,
49,34,-11,-61,-41,
-43,10,15,-15,51,
30,15,-51,32,-34,
-2,-34,14,18,16,
1,1,-3,-3,1,
1,-18,6,16,48,
12,-5,-42,7,36,
48,7,-20,-10,7,
12,2,54,39,-38,
37,54,4,-11,-8,
-46,-10,5,-10,-34,
46,-12,29,-37,39,
36,-11,24,56,17,
14,20,25,0,-25,
-28,55,-7,-5,27,
3,9,-26,-8,6,
-24,-10,-30,-31,-34,
18,4,22,21,40,
-1,-29,-37,-8,-21,
92,-29,11,-3,11,
73,23,22,7,4,
-44,-9,-11,21,-13,
11,9,-78,-1,47,
114,-12,-37,-19,-5,
-11,-22,19,12,-30,
7,38,45,-21,-8,
-9,55,-45,56,-21,
7,17,46,-57,-87,
-6,27,31,31,7,
-56,-12,46,21,-5,
-12,36,3,3,-21,
43,19,12,-7,9,
-14,0,-9,-33,-91,
7,26,3,-11,64,
83,-31,-46,25,2,
9,5,2,2,-1,
20,-17,10,-5,-27,
-8,20,8,-19,16,
-21,-13,-31,5,5,
42,24,9,34,-20,
28,-61,22,11,-39,
64,-20,-1,-30,-9,
-20,24,-25,-24,-29,
22,-60,6,-5,41,
-9,-87,14,34,15,
-57,52,69,15,-3,
-102,58,16,3,6,
60,-75,-32,26,7,
-57,-27,-32,-24,-21,
-29,-16,62,-46,31,
30,-27,-15,7,15};
