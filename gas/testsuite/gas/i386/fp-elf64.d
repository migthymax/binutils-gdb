#objdump: -s -j .data
#name: x86-64 fp (ELF)
#source: fp.s

.*:     file format .*

Contents of section .data:
 0000 00881bcd 4b789ad4 00400000 00000000  .*
 0010 71a37909 4f930a40 789a5440 789a5440  .*
 0020 e65e1710 20395e3b e65e1710 20395e3b  .*
 0030 00000000 0000a044 01000000 0000a044  .*
 0040 00000000 0000f03f 00000000 00000000  .*
 0050 ffffffff ffffffff ffffffff ffffffff  .*
 0060 00000000 00000080 fe3f0000 00000000  .*
 0070 00000000 00000080 fdbf0000 00000000  .*
 0080 00000000 00000080 ff030000 00000000  .*
