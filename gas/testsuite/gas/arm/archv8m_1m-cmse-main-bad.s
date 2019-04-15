.thumb
.syntax unified

T:

clrm {} @ Rejects empty list
clrm {sp} @ Rejects SP in list
clrm {pc} @ Reject PC in list

vscclrm {} @ Rejects empty list
vscclrm {s0} @ Rejects list without VPR
vscclrm {s1, d1, VPR} @ Reject mix of single and double-precision VFP registers
vscclrm {s1-d1, VPR} @ Likewise when using a range
