/* Decode header for m32rx.

This file is machine generated with CGEN.

Copyright (C) 1996, 1997, 1998 Free Software Foundation, Inc.

This file is part of the GNU Simulators.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

*/

#ifndef M32RX_DECODE_H
#define M32RX_DECODE_H

#define EX(fn) CONCAT3 (m32rx,_ex_,fn)
#define SEM(fn) CONCAT3 (m32rx,_sem_,fn)
#define SEMF(fn) CONCAT3 (m32rx,_semf_,fn)

extern EXTRACT_FN EX (illegal);
extern SEMANTIC_FN SEM (illegal);
extern SEMANTIC_FN SEMF (illegal);
extern EXTRACT_FN EX (fmt_0_add);
extern EXTRACT_FN EX (fmt_1_add3);
extern EXTRACT_FN EX (fmt_2_and3);
extern EXTRACT_FN EX (fmt_3_or3);
extern EXTRACT_FN EX (fmt_4_addi);
extern EXTRACT_FN EX (fmt_5_addv);
extern EXTRACT_FN EX (fmt_6_addv3);
extern EXTRACT_FN EX (fmt_7_addx);
extern EXTRACT_FN EX (fmt_8_bc8);
extern EXTRACT_FN EX (fmt_9_bc24);
extern EXTRACT_FN EX (fmt_10_beq);
extern EXTRACT_FN EX (fmt_11_beqz);
extern EXTRACT_FN EX (fmt_12_bl8);
extern EXTRACT_FN EX (fmt_13_bl24);
extern EXTRACT_FN EX (fmt_14_bcl8);
extern EXTRACT_FN EX (fmt_15_bcl24);
extern EXTRACT_FN EX (fmt_16_bra8);
extern EXTRACT_FN EX (fmt_17_bra24);
extern EXTRACT_FN EX (fmt_18_cmp);
extern EXTRACT_FN EX (fmt_19_cmpi);
extern EXTRACT_FN EX (fmt_20_cmpui);
extern EXTRACT_FN EX (fmt_21_cmpz);
extern EXTRACT_FN EX (fmt_22_div);
extern EXTRACT_FN EX (fmt_23_jc);
extern EXTRACT_FN EX (fmt_24_jl);
extern EXTRACT_FN EX (fmt_25_jmp);
extern EXTRACT_FN EX (fmt_26_ld);
extern EXTRACT_FN EX (fmt_27_ld_d);
extern EXTRACT_FN EX (fmt_28_ldb);
extern EXTRACT_FN EX (fmt_29_ldb_d);
extern EXTRACT_FN EX (fmt_30_ldh);
extern EXTRACT_FN EX (fmt_31_ldh_d);
extern EXTRACT_FN EX (fmt_32_ld_plus);
extern EXTRACT_FN EX (fmt_33_ld24);
extern EXTRACT_FN EX (fmt_34_ldi8);
extern EXTRACT_FN EX (fmt_35_ldi16);
extern EXTRACT_FN EX (fmt_36_lock);
extern EXTRACT_FN EX (fmt_37_machi_a);
extern EXTRACT_FN EX (fmt_38_mulhi_a);
extern EXTRACT_FN EX (fmt_39_mv);
extern EXTRACT_FN EX (fmt_40_mvfachi_a);
extern EXTRACT_FN EX (fmt_41_mvfc);
extern EXTRACT_FN EX (fmt_42_mvtachi_a);
extern EXTRACT_FN EX (fmt_43_mvtc);
extern EXTRACT_FN EX (fmt_44_nop);
extern EXTRACT_FN EX (fmt_45_rac_dsi);
extern EXTRACT_FN EX (fmt_46_rte);
extern EXTRACT_FN EX (fmt_47_seth);
extern EXTRACT_FN EX (fmt_48_sll3);
extern EXTRACT_FN EX (fmt_49_slli);
extern EXTRACT_FN EX (fmt_50_st);
extern EXTRACT_FN EX (fmt_51_st_d);
extern EXTRACT_FN EX (fmt_52_stb);
extern EXTRACT_FN EX (fmt_53_stb_d);
extern EXTRACT_FN EX (fmt_54_sth);
extern EXTRACT_FN EX (fmt_55_sth_d);
extern EXTRACT_FN EX (fmt_56_st_plus);
extern EXTRACT_FN EX (fmt_57_trap);
extern EXTRACT_FN EX (fmt_58_unlock);
extern EXTRACT_FN EX (fmt_59_satb);
extern EXTRACT_FN EX (fmt_60_sat);
extern EXTRACT_FN EX (fmt_61_sadd);
extern EXTRACT_FN EX (fmt_62_macwu1);
extern EXTRACT_FN EX (fmt_63_msblo);
extern EXTRACT_FN EX (fmt_64_mulwu1);
extern EXTRACT_FN EX (fmt_65_sc);

extern SEMANTIC_FN SEM (add);
extern SEMANTIC_FN SEMF (add);
extern SEMANTIC_FN SEM (add3);
extern SEMANTIC_FN SEMF (add3);
extern SEMANTIC_FN SEM (and);
extern SEMANTIC_FN SEMF (and);
extern SEMANTIC_FN SEM (and3);
extern SEMANTIC_FN SEMF (and3);
extern SEMANTIC_FN SEM (or);
extern SEMANTIC_FN SEMF (or);
extern SEMANTIC_FN SEM (or3);
extern SEMANTIC_FN SEMF (or3);
extern SEMANTIC_FN SEM (xor);
extern SEMANTIC_FN SEMF (xor);
extern SEMANTIC_FN SEM (xor3);
extern SEMANTIC_FN SEMF (xor3);
extern SEMANTIC_FN SEM (addi);
extern SEMANTIC_FN SEMF (addi);
extern SEMANTIC_FN SEM (addv);
extern SEMANTIC_FN SEMF (addv);
extern SEMANTIC_FN SEM (addv3);
extern SEMANTIC_FN SEMF (addv3);
extern SEMANTIC_FN SEM (addx);
extern SEMANTIC_FN SEMF (addx);
extern SEMANTIC_FN SEM (bc8);
extern SEMANTIC_FN SEMF (bc8);
extern SEMANTIC_FN SEM (bc24);
extern SEMANTIC_FN SEMF (bc24);
extern SEMANTIC_FN SEM (beq);
extern SEMANTIC_FN SEMF (beq);
extern SEMANTIC_FN SEM (beqz);
extern SEMANTIC_FN SEMF (beqz);
extern SEMANTIC_FN SEM (bgez);
extern SEMANTIC_FN SEMF (bgez);
extern SEMANTIC_FN SEM (bgtz);
extern SEMANTIC_FN SEMF (bgtz);
extern SEMANTIC_FN SEM (blez);
extern SEMANTIC_FN SEMF (blez);
extern SEMANTIC_FN SEM (bltz);
extern SEMANTIC_FN SEMF (bltz);
extern SEMANTIC_FN SEM (bnez);
extern SEMANTIC_FN SEMF (bnez);
extern SEMANTIC_FN SEM (bl8);
extern SEMANTIC_FN SEMF (bl8);
extern SEMANTIC_FN SEM (bl24);
extern SEMANTIC_FN SEMF (bl24);
extern SEMANTIC_FN SEM (bcl8);
extern SEMANTIC_FN SEMF (bcl8);
extern SEMANTIC_FN SEM (bcl24);
extern SEMANTIC_FN SEMF (bcl24);
extern SEMANTIC_FN SEM (bnc8);
extern SEMANTIC_FN SEMF (bnc8);
extern SEMANTIC_FN SEM (bnc24);
extern SEMANTIC_FN SEMF (bnc24);
extern SEMANTIC_FN SEM (bne);
extern SEMANTIC_FN SEMF (bne);
extern SEMANTIC_FN SEM (bra8);
extern SEMANTIC_FN SEMF (bra8);
extern SEMANTIC_FN SEM (bra24);
extern SEMANTIC_FN SEMF (bra24);
extern SEMANTIC_FN SEM (bncl8);
extern SEMANTIC_FN SEMF (bncl8);
extern SEMANTIC_FN SEM (bncl24);
extern SEMANTIC_FN SEMF (bncl24);
extern SEMANTIC_FN SEM (cmp);
extern SEMANTIC_FN SEMF (cmp);
extern SEMANTIC_FN SEM (cmpi);
extern SEMANTIC_FN SEMF (cmpi);
extern SEMANTIC_FN SEM (cmpu);
extern SEMANTIC_FN SEMF (cmpu);
extern SEMANTIC_FN SEM (cmpui);
extern SEMANTIC_FN SEMF (cmpui);
extern SEMANTIC_FN SEM (cmpeq);
extern SEMANTIC_FN SEMF (cmpeq);
extern SEMANTIC_FN SEM (cmpz);
extern SEMANTIC_FN SEMF (cmpz);
extern SEMANTIC_FN SEM (div);
extern SEMANTIC_FN SEMF (div);
extern SEMANTIC_FN SEM (divu);
extern SEMANTIC_FN SEMF (divu);
extern SEMANTIC_FN SEM (rem);
extern SEMANTIC_FN SEMF (rem);
extern SEMANTIC_FN SEM (remu);
extern SEMANTIC_FN SEMF (remu);
extern SEMANTIC_FN SEM (divh);
extern SEMANTIC_FN SEMF (divh);
extern SEMANTIC_FN SEM (jc);
extern SEMANTIC_FN SEMF (jc);
extern SEMANTIC_FN SEM (jnc);
extern SEMANTIC_FN SEMF (jnc);
extern SEMANTIC_FN SEM (jl);
extern SEMANTIC_FN SEMF (jl);
extern SEMANTIC_FN SEM (jmp);
extern SEMANTIC_FN SEMF (jmp);
extern SEMANTIC_FN SEM (ld);
extern SEMANTIC_FN SEMF (ld);
extern SEMANTIC_FN SEM (ld_d);
extern SEMANTIC_FN SEMF (ld_d);
extern SEMANTIC_FN SEM (ldb);
extern SEMANTIC_FN SEMF (ldb);
extern SEMANTIC_FN SEM (ldb_d);
extern SEMANTIC_FN SEMF (ldb_d);
extern SEMANTIC_FN SEM (ldh);
extern SEMANTIC_FN SEMF (ldh);
extern SEMANTIC_FN SEM (ldh_d);
extern SEMANTIC_FN SEMF (ldh_d);
extern SEMANTIC_FN SEM (ldub);
extern SEMANTIC_FN SEMF (ldub);
extern SEMANTIC_FN SEM (ldub_d);
extern SEMANTIC_FN SEMF (ldub_d);
extern SEMANTIC_FN SEM (lduh);
extern SEMANTIC_FN SEMF (lduh);
extern SEMANTIC_FN SEM (lduh_d);
extern SEMANTIC_FN SEMF (lduh_d);
extern SEMANTIC_FN SEM (ld_plus);
extern SEMANTIC_FN SEMF (ld_plus);
extern SEMANTIC_FN SEM (ld24);
extern SEMANTIC_FN SEMF (ld24);
extern SEMANTIC_FN SEM (ldi8);
extern SEMANTIC_FN SEMF (ldi8);
extern SEMANTIC_FN SEM (ldi16);
extern SEMANTIC_FN SEMF (ldi16);
extern SEMANTIC_FN SEM (lock);
extern SEMANTIC_FN SEMF (lock);
extern SEMANTIC_FN SEM (machi_a);
extern SEMANTIC_FN SEMF (machi_a);
extern SEMANTIC_FN SEM (maclo_a);
extern SEMANTIC_FN SEMF (maclo_a);
extern SEMANTIC_FN SEM (mul);
extern SEMANTIC_FN SEMF (mul);
extern SEMANTIC_FN SEM (mulhi_a);
extern SEMANTIC_FN SEMF (mulhi_a);
extern SEMANTIC_FN SEM (mullo_a);
extern SEMANTIC_FN SEMF (mullo_a);
extern SEMANTIC_FN SEM (mv);
extern SEMANTIC_FN SEMF (mv);
extern SEMANTIC_FN SEM (mvfachi_a);
extern SEMANTIC_FN SEMF (mvfachi_a);
extern SEMANTIC_FN SEM (mvfaclo_a);
extern SEMANTIC_FN SEMF (mvfaclo_a);
extern SEMANTIC_FN SEM (mvfacmi_a);
extern SEMANTIC_FN SEMF (mvfacmi_a);
extern SEMANTIC_FN SEM (mvfc);
extern SEMANTIC_FN SEMF (mvfc);
extern SEMANTIC_FN SEM (mvtachi_a);
extern SEMANTIC_FN SEMF (mvtachi_a);
extern SEMANTIC_FN SEM (mvtaclo_a);
extern SEMANTIC_FN SEMF (mvtaclo_a);
extern SEMANTIC_FN SEM (mvtc);
extern SEMANTIC_FN SEMF (mvtc);
extern SEMANTIC_FN SEM (neg);
extern SEMANTIC_FN SEMF (neg);
extern SEMANTIC_FN SEM (nop);
extern SEMANTIC_FN SEMF (nop);
extern SEMANTIC_FN SEM (not);
extern SEMANTIC_FN SEMF (not);
extern SEMANTIC_FN SEM (rac_dsi);
extern SEMANTIC_FN SEMF (rac_dsi);
extern SEMANTIC_FN SEM (rach_dsi);
extern SEMANTIC_FN SEMF (rach_dsi);
extern SEMANTIC_FN SEM (rte);
extern SEMANTIC_FN SEMF (rte);
extern SEMANTIC_FN SEM (seth);
extern SEMANTIC_FN SEMF (seth);
extern SEMANTIC_FN SEM (sll);
extern SEMANTIC_FN SEMF (sll);
extern SEMANTIC_FN SEM (sll3);
extern SEMANTIC_FN SEMF (sll3);
extern SEMANTIC_FN SEM (slli);
extern SEMANTIC_FN SEMF (slli);
extern SEMANTIC_FN SEM (sra);
extern SEMANTIC_FN SEMF (sra);
extern SEMANTIC_FN SEM (sra3);
extern SEMANTIC_FN SEMF (sra3);
extern SEMANTIC_FN SEM (srai);
extern SEMANTIC_FN SEMF (srai);
extern SEMANTIC_FN SEM (srl);
extern SEMANTIC_FN SEMF (srl);
extern SEMANTIC_FN SEM (srl3);
extern SEMANTIC_FN SEMF (srl3);
extern SEMANTIC_FN SEM (srli);
extern SEMANTIC_FN SEMF (srli);
extern SEMANTIC_FN SEM (st);
extern SEMANTIC_FN SEMF (st);
extern SEMANTIC_FN SEM (st_d);
extern SEMANTIC_FN SEMF (st_d);
extern SEMANTIC_FN SEM (stb);
extern SEMANTIC_FN SEMF (stb);
extern SEMANTIC_FN SEM (stb_d);
extern SEMANTIC_FN SEMF (stb_d);
extern SEMANTIC_FN SEM (sth);
extern SEMANTIC_FN SEMF (sth);
extern SEMANTIC_FN SEM (sth_d);
extern SEMANTIC_FN SEMF (sth_d);
extern SEMANTIC_FN SEM (st_plus);
extern SEMANTIC_FN SEMF (st_plus);
extern SEMANTIC_FN SEM (st_minus);
extern SEMANTIC_FN SEMF (st_minus);
extern SEMANTIC_FN SEM (sub);
extern SEMANTIC_FN SEMF (sub);
extern SEMANTIC_FN SEM (subv);
extern SEMANTIC_FN SEMF (subv);
extern SEMANTIC_FN SEM (subx);
extern SEMANTIC_FN SEMF (subx);
extern SEMANTIC_FN SEM (trap);
extern SEMANTIC_FN SEMF (trap);
extern SEMANTIC_FN SEM (unlock);
extern SEMANTIC_FN SEMF (unlock);
extern SEMANTIC_FN SEM (satb);
extern SEMANTIC_FN SEMF (satb);
extern SEMANTIC_FN SEM (sath);
extern SEMANTIC_FN SEMF (sath);
extern SEMANTIC_FN SEM (sat);
extern SEMANTIC_FN SEMF (sat);
extern SEMANTIC_FN SEM (pcmpbz);
extern SEMANTIC_FN SEMF (pcmpbz);
extern SEMANTIC_FN SEM (sadd);
extern SEMANTIC_FN SEMF (sadd);
extern SEMANTIC_FN SEM (macwu1);
extern SEMANTIC_FN SEMF (macwu1);
extern SEMANTIC_FN SEM (msblo);
extern SEMANTIC_FN SEMF (msblo);
extern SEMANTIC_FN SEM (mulwu1);
extern SEMANTIC_FN SEMF (mulwu1);
extern SEMANTIC_FN SEM (maclh1);
extern SEMANTIC_FN SEMF (maclh1);
extern SEMANTIC_FN SEM (sc);
extern SEMANTIC_FN SEMF (sc);
extern SEMANTIC_FN SEM (snc);
extern SEMANTIC_FN SEMF (snc);

#undef EX
#undef SEM
#undef SEMF

#endif /* M32RX_DECODE_H */
