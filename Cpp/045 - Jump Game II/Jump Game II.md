{\rtf1\ansi\ansicpg1252\cocoartf2708
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 HelveticaNeue-Medium;\f1\fnil\fcharset0 HelveticaNeue;\f2\fnil\fcharset0 HelveticaNeue-Bold;
\f3\fnil\fcharset0 Menlo-Regular;\f4\fnil\fcharset0 HelveticaNeue-Italic;\f5\fnil\fcharset0 Menlo-Bold;
}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;\red255\green255\blue255;\red255\green255\blue255;
\red119\green119\blue119;\red252\green178\blue24;\red41\green177\blue74;\red236\green238\blue244;}
{\*\expandedcolortbl;;\cssrgb\c0\c1\c1;\cssrgb\c100000\c100000\c99985\c0;\cssrgb\c100000\c100000\c99971;
\cssrgb\c54237\c54237\c54101;\cssrgb\c99430\c74583\c10804;\cssrgb\c17020\c73129\c36131;\cssrgb\c93956\c94745\c96471\c74902;}
{\*\listtable{\list\listtemplateid1\listhybrid{\listlevel\levelnfc23\levelnfcn23\leveljc0\leveljcn0\levelfollow0\levelstartat1\levelspace360\levelindent0{\*\levelmarker \{disc\}}{\leveltext\leveltemplateid1\'01\uc0\u8226 ;}{\levelnumbers;}\fi-360\li720\lin720 }{\listname ;}\listid1}
{\list\listtemplateid2\listhybrid{\listlevel\levelnfc23\levelnfcn23\leveljc0\leveljcn0\levelfollow0\levelstartat1\levelspace360\levelindent0{\*\levelmarker \{disc\}}{\leveltext\leveltemplateid101\'01\uc0\u8226 ;}{\levelnumbers;}\fi-360\li720\lin720 }{\listname ;}\listid2}}
{\*\listoverridetable{\listoverride\listid1\listoverridecount0\ls1}{\listoverride\listid2\listoverridecount0\ls2}}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0
{\field{\*\fldinst{HYPERLINK "https://leetcode.com/problems/jump-game-ii/"}}{\fldrslt 
\f0\fs27 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec4 45.\'a0Jump Game II}}
\f0\fs27 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec4 \
\pard\pardeftab720\partightenfactor0

\f1 \cf2 \cb3 \strokec5 \
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec4 \
\pard\pardeftab720\partightenfactor0

\f0\fs21 \cf2 \cb3 \strokec6 Medium\
\pard\pardeftab720\partightenfactor0

\f1\fs27 \cf2 \cb3 \strokec7 \
\pard\pardeftab720\partightenfactor0
\cf2 \cb3 \strokec5 \
\pard\pardeftab720\partightenfactor0

\fs18 \cf2 \cb3 \strokec5 13.5K\
\pard\pardeftab720\partightenfactor0

\fs27 \cf2 \cb3 \strokec5 \
\pard\pardeftab720\partightenfactor0

\fs18 \cf2 \cb3 \strokec5 478\
\pard\pardeftab720\partightenfactor0

\fs27 \cf2 \cb3 \strokec5 \
\pard\pardeftab720\partightenfactor0

\fs28 \cf2 \cb3 \strokec4 \
\pard\pardeftab720\partightenfactor0

\fs27 \cf2 \cb3 \strokec5 \
\pard\pardeftab720\partightenfactor0

\fs28 \cf2 \cb3 \strokec4 \
\pard\pardeftab720\partightenfactor0

\fs18 \cf2 \cb3 \strokec8 \
Companies\
\pard\pardeftab720\sa240\partightenfactor0

\fs28 \cf2 \cb3 \strokec4 You are given a\'a0
\f2\b \cf2 \cb3 \strokec4 0-indexed
\f1\b0 \cf2 \cb3 \strokec4 \'a0array of integers\'a0
\f3\fs18 \cf2 \cb3 \strokec8 nums
\f1\fs28 \cf2 \cb3 \strokec4 \'a0of length\'a0
\f3\fs18 \cf2 \cb3 \strokec8 n
\f1\fs28 \cf2 \cb3 \strokec4 . You are initially positioned at\'a0
\f3\fs18 \cf2 \cb3 \strokec8 nums[0]
\f1\fs28 \cf2 \cb3 \strokec4 .\
Each element\'a0
\f3\fs18 \cf2 \cb3 \strokec8 nums[i]
\f1\fs28 \cf2 \cb3 \strokec4 \'a0represents the maximum length of a forward jump from index\'a0
\f3\fs18 \cf2 \cb3 \strokec8 i
\f1\fs28 \cf2 \cb3 \strokec4 . In other words, if you are at\'a0
\f3\fs18 \cf2 \cb3 \strokec8 nums[i]
\f1\fs28 \cf2 \cb3 \strokec4 , you can jump to any\'a0
\f3\fs18 \cf2 \cb3 \strokec8 nums[i + j]
\f1\fs28 \cf2 \cb3 \strokec4 \'a0where:\
\pard\tx220\tx720\pardeftab720\li720\fi-720\sa180\partightenfactor0
\ls1\ilvl0
\f3\fs18 \cf2 \cb3 \kerning1\expnd0\expndtw0 \outl0\strokewidth0 {\listtext	\uc0\u8226 	}\cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec8 0 <= j <= nums[i]
\f1\fs28 \cf2 \cb3 \strokec4 \'a0and\
\ls1\ilvl0
\f3\fs18 \cf2 \cb3 \kerning1\expnd0\expndtw0 \outl0\strokewidth0 {\listtext	\uc0\u8226 	}\cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec8 i + j < n
\f1\fs28 \cf2 \cb3 \strokec4 \
\pard\pardeftab720\sa240\partightenfactor0
\cf2 \cb3 \strokec4 Return\'a0
\f4\i \cf2 \cb3 \strokec4 the minimum number of jumps to reach\'a0
\f3\i0\fs18 \cf2 \cb3 \strokec8 nums[n - 1]
\f1\fs28 \cf2 \cb3 \strokec4 . The test cases are generated such that you can reach\'a0
\f3\fs18 \cf2 \cb3 \strokec8 nums[n - 1]
\f1\fs28 \cf2 \cb3 \strokec4 .\
\'a0\
\pard\pardeftab720\sa240\partightenfactor0

\f2\b \cf2 \cb3 \strokec4 Example 1:
\f1\b0 \cf2 \cb3 \strokec4 \
\pard\pardeftab720\partightenfactor0

\f5\b\fs21 \cf2 \cb3 \strokec4 Input:
\f3\b0 \cf2 \cb3 \strokec4  nums = [2,3,1,1,4]\

\f5\b \cf2 \cb3 \strokec4 Output:
\f3\b0 \cf2 \cb3 \strokec4  2\

\f5\b \cf2 \cb3 \strokec4 Explanation:
\f3\b0 \cf2 \cb3 \strokec4  The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.\
\pard\pardeftab720\sa240\partightenfactor0

\f2\b\fs28 \cf2 \cb3 \strokec4 Example 2:
\f1\b0 \cf2 \cb3 \strokec4 \
\pard\pardeftab720\partightenfactor0

\f5\b\fs21 \cf2 \cb3 \strokec4 Input:
\f3\b0 \cf2 \cb3 \strokec4  nums = [2,3,0,1,4]\

\f5\b \cf2 \cb3 \strokec4 Output:
\f3\b0 \cf2 \cb3 \strokec4  2\
\pard\pardeftab720\sa240\partightenfactor0

\f1\fs28 \cf2 \cb3 \strokec4 \'a0\
\pard\pardeftab720\sa240\partightenfactor0

\f2\b \cf2 \cb3 \strokec4 Constraints:
\f1\b0 \cf2 \cb3 \strokec4 \
\pard\tx220\tx720\pardeftab720\li720\fi-720\sa180\partightenfactor0
\ls2\ilvl0
\f3\fs18 \cf2 \cb3 \kerning1\expnd0\expndtw0 \outl0\strokewidth0 {\listtext	\uc0\u8226 	}\cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec8 1 <= nums.length <= 104
\f1\fs28 \cf2 \cb3 \strokec4 \
\ls2\ilvl0
\f3\fs18 \cf2 \cb3 \kerning1\expnd0\expndtw0 \outl0\strokewidth0 {\listtext	\uc0\u8226 	}\cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec8 0 <= nums[i] <= 1000
\f1\fs28 \cf2 \cb3 \strokec4 \
\pard\tx220\tx720\pardeftab720\li720\fi-720\sa180\partightenfactor0
\ls2\ilvl0\cf2 \cb3 \kerning1\expnd0\expndtw0 \outl0\strokewidth0 {\listtext	\uc0\u8226 	}\cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec4 It's guaranteed that you can reach\'a0
\f3\fs18 \cf2 \cb3 \strokec8 nums[n - 1]
\f1\fs28 \cf2 \cb3 \strokec4 .\
}