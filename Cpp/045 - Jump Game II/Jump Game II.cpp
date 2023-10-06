{\rtf1\ansi\ansicpg1252\cocoartf2708
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red71\green137\blue205;\red255\green255\blue255;\red202\green202\blue202;
\red67\green192\blue160;\red212\green213\blue154;\red141\green212\blue254;\red167\green197\blue151;\red183\green111\blue179;
}
{\*\expandedcolortbl;;\cssrgb\c33936\c61427\c84130;\cssrgb\c100000\c100000\c100000\c0;\cssrgb\c83229\c83229\c83125;
\cssrgb\c30610\c78876\c69022;\cssrgb\c86261\c86245\c66529;\cssrgb\c61361\c86489\c99746;\cssrgb\c71008\c80807\c65805;\cssrgb\c77331\c52624\c75301;
}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 class\cf4 \strokec4  \cf5 \strokec5 Solution\cf4 \strokec4  \{\
\cf2 \strokec2 public:\cf4 \strokec4 \
    \cf2 \strokec2 bool\cf4 \strokec4  \cf6 \strokec6 isPalindrome\cf4 \strokec4 (\cf2 \strokec2 int\cf4 \strokec4  \cf7 \strokec7 x\cf4 \strokec4 ) \{\
        \cf2 \strokec2 long\cf4 \strokec4  \cf2 \strokec2 long\cf4 \strokec4  \cf2 \strokec2 int\cf4 \strokec4  temp = x, p, sum=\cf8 \strokec8 0\cf4 \strokec4 ;\
        \cf9 \strokec9 if\cf4 \strokec4 (x<\cf8 \strokec8 0\cf4 \strokec4 )\
        \cf9 \strokec9 return\cf4 \strokec4  \cf2 \strokec2 false\cf4 \strokec4 ;\
     \cf9 \strokec9 while\cf4 \strokec4 (x>\cf8 \strokec8 0\cf4 \strokec4 )\
     \{\
         p = x%\cf8 \strokec8 10\cf4 \strokec4 ;\
         sum=(sum*\cf8 \strokec8 10\cf4 \strokec4 )+p;\
         x=x/\cf8 \strokec8 10\cf4 \strokec4 ;\
     \}\
     \cf9 \strokec9 if\cf4 \strokec4 (temp==sum)\
     \cf9 \strokec9 return\cf4 \strokec4  \cf2 \strokec2 true\cf4 \strokec4 ;\
     \cf9 \strokec9 else\cf4 \strokec4 \
     \cf9 \strokec9 return\cf4 \strokec4  \cf2 \strokec2 false\cf4 \strokec4 ;\
     \}  \
    \
\};\
}