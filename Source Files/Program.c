{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\csgray\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #include <stdio.h>\
#include <stdlib.h>\
\
void main() \{\
  int n, i, *ptr, sum=0;\
  n=5;\
  ptr= (int*) malloc(n * sizeof(int));\
  if(ptr==NULL)\
  \{\
   exit(0);\
  \}\
  for(i=0;i<n;i++)\
   \{\
    scanf("%d", ptr+i);\
    \
   \}\
		printf("\\n %d", (*(ptr))*5);\
   \
   free(ptr);\
   \
\}\
}