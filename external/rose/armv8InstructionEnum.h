//
// Created by ssunny on 5/20/16.
//

#ifndef ROSE_ARMV8INSTRUCTIONENUM_H
#define ROSE_ARMV8INSTRUCTIONENUM_H

/** ARMv8-A major register numbers */
enum ARMv8RegisterClass {
    armv8_regclass_gpr,		    /** Minors are ARMv8GeneralPurposeRegister */
    armv8_regclass_simd_fpr,	    /** TODO: Minors yet to be defined */
    armv8_regclass_pstate,	    /** Minor is the only one pstate register with its flags (defined in ARMv8Flag) being the only relevant fields */
    armv8_regclass_pc,		    /** Program counter, only allowed minor is 0 */
    armv8_regclass_sp           /** Stack pointer, only allowed minor is 0 */
};

/** ARMv8-A general purpose registers */
enum ARMv8GeneralPurposeRegister {
    armv8_gpr_r0,
    armv8_gpr_r1,
    armv8_gpr_r2,
    armv8_gpr_r3,
    armv8_gpr_r4,
    armv8_gpr_r5,
    armv8_gpr_r6,
    armv8_gpr_r7,
    armv8_gpr_r8,
    armv8_gpr_r9,
    armv8_gpr_r10,
    armv8_gpr_r11,
    armv8_gpr_r12,
    armv8_gpr_r13,
    armv8_gpr_r14,
    armv8_gpr_r15,
    armv8_gpr_r16,
    armv8_gpr_r17,
    armv8_gpr_r18,
    armv8_gpr_r19,
    armv8_gpr_r20,
    armv8_gpr_r21,
    armv8_gpr_r22,
    armv8_gpr_r23,
    armv8_gpr_r24,
    armv8_gpr_r25,
    armv8_gpr_r26,
    armv8_gpr_r27,
    armv8_gpr_r28,
    armv8_gpr_r29,
    armv8_gpr_r30,
    armv8_gpr_zr
};

/** ARMv8-A fields of the Pstate register */
enum ARMv8PstateFields {
    armv8_pstatefield_pstate        =   0,      /* The entire 32-bit pstate register */
    /* Values for each enum member below match the position of the bit in the pstate register */
    armv8_pstatefield_n             =   31,     /* The negative flag */
    armv8_pstatefield_z             =   30,     /* The zero flag */
    armv8_pstatefield_c             =   29,     /* The carry flag */
    armv8_pstatefield_v             =   28      /* The overflow flag */
};

/** ARMv8-A instructions for the AArch64 processor mode
 *  The enum entries are generated by the 'aarch64_manual_parser.py' script in the instructionAPI directory under Dyninst's source tree.*/
enum ARMv8InstructionKind {
    rose_aarch64_op_INVALID              =   0,
    rose_aarch64_op_extended,
    rose_aarch64_op_abs_advsimd,
    rose_aarch64_op_adc,
    rose_aarch64_op_adcs,
    rose_aarch64_op_add_addsub_ext,
    rose_aarch64_op_add_addsub_imm,
    rose_aarch64_op_add_addsub_shift,
    rose_aarch64_op_add_advsimd,
    rose_aarch64_op_addhn_advsimd,
    rose_aarch64_op_addp_advsimd_pair,
    rose_aarch64_op_addp_advsimd_vec,
    rose_aarch64_op_adds_addsub_ext,
    rose_aarch64_op_adds_addsub_imm,
    rose_aarch64_op_adds_addsub_shift,
    rose_aarch64_op_addv_advsimd,
    rose_aarch64_op_adr,
    rose_aarch64_op_adrp,
    rose_aarch64_op_aesd_advsimd,
    rose_aarch64_op_aese_advsimd,
    rose_aarch64_op_aesimc_advsimd,
    rose_aarch64_op_aesmc_advsimd,
    rose_aarch64_op_and_advsimd,
    rose_aarch64_op_and_log_imm,
    rose_aarch64_op_and_log_shift,
    rose_aarch64_op_ands_log_imm,
    rose_aarch64_op_ands_log_shift,
    rose_aarch64_op_asr_asrv,
    rose_aarch64_op_asr_sbfm,
    rose_aarch64_op_asrv,
    rose_aarch64_op_at_sys,
    rose_aarch64_op_b_cond,
    rose_aarch64_op_b_uncond,
    rose_aarch64_op_bfi_bfm,
    rose_aarch64_op_bfm,
    rose_aarch64_op_bfxil_bfm,
    rose_aarch64_op_bic_advsimd_imm,
    rose_aarch64_op_bic_advsimd_reg,
    rose_aarch64_op_bic_log_shift,
    rose_aarch64_op_bics,
    rose_aarch64_op_bif_advsimd,
    rose_aarch64_op_bit_advsimd,
    rose_aarch64_op_bl,
    rose_aarch64_op_blr,
    rose_aarch64_op_br,
    rose_aarch64_op_brk,
    rose_aarch64_op_bsl_advsimd,
    rose_aarch64_op_cbnz,
    rose_aarch64_op_cbz,
    rose_aarch64_op_ccmn_imm,
    rose_aarch64_op_ccmn_reg,
    rose_aarch64_op_ccmp_imm,
    rose_aarch64_op_ccmp_reg,
    rose_aarch64_op_cinc_csinc,
    rose_aarch64_op_cinv_csinv,
    rose_aarch64_op_clrex,
    rose_aarch64_op_cls_advsimd,
    rose_aarch64_op_cls_int,
    rose_aarch64_op_clz_advsimd,
    rose_aarch64_op_clz_int,
    rose_aarch64_op_cmeq_advsimd_reg,
    rose_aarch64_op_cmeq_advsimd_zero,
    rose_aarch64_op_cmge_advsimd_reg,
    rose_aarch64_op_cmge_advsimd_zero,
    rose_aarch64_op_cmgt_advsimd_reg,
    rose_aarch64_op_cmgt_advsimd_zero,
    rose_aarch64_op_cmhi_advsimd,
    rose_aarch64_op_cmhs_advsimd,
    rose_aarch64_op_cmle_advsimd,
    rose_aarch64_op_cmlt_advsimd,
    rose_aarch64_op_cmn_adds_addsub_ext,
    rose_aarch64_op_cmn_adds_addsub_imm,
    rose_aarch64_op_cmn_adds_addsub_shift,
    rose_aarch64_op_cmp_subs_addsub_ext,
    rose_aarch64_op_cmp_subs_addsub_imm,
    rose_aarch64_op_cmp_subs_addsub_shift,
    rose_aarch64_op_cmtst_advsimd,
    rose_aarch64_op_cneg_csneg,
    rose_aarch64_op_cnt_advsimd,
    rose_aarch64_op_crc32,
    rose_aarch64_op_crc32c,
    rose_aarch64_op_csel,
    rose_aarch64_op_cset_csinc,
    rose_aarch64_op_csetm_csinv,
    rose_aarch64_op_csinc,
    rose_aarch64_op_csinv,
    rose_aarch64_op_csneg,
    rose_aarch64_op_dc_sys,
    rose_aarch64_op_dcps1,
    rose_aarch64_op_dcps2,
    rose_aarch64_op_dcps3,
    rose_aarch64_op_dmb,
    rose_aarch64_op_drps,
    rose_aarch64_op_dsb,
    rose_aarch64_op_dup_advsimd_elt,
    rose_aarch64_op_dup_advsimd_gen,
    rose_aarch64_op_eon,
    rose_aarch64_op_eor_advsimd,
    rose_aarch64_op_eor_log_imm,
    rose_aarch64_op_eor_log_shift,
    rose_aarch64_op_eret,
    rose_aarch64_op_ext_advsimd,
    rose_aarch64_op_extr,
    rose_aarch64_op_fabd_advsimd,
    rose_aarch64_op_fabs_advsimd,
    rose_aarch64_op_fabs_float,
    rose_aarch64_op_facge_advsimd,
    rose_aarch64_op_facgt_advsimd,
    rose_aarch64_op_fadd_advsimd,
    rose_aarch64_op_fadd_float,
    rose_aarch64_op_faddp_advsimd_pair,
    rose_aarch64_op_faddp_advsimd_vec,
    rose_aarch64_op_fccmp_float,
    rose_aarch64_op_fccmpe_float,
    rose_aarch64_op_fcmeq_advsimd_reg,
    rose_aarch64_op_fcmeq_advsimd_zero,
    rose_aarch64_op_fcmge_advsimd_reg,
    rose_aarch64_op_fcmge_advsimd_zero,
    rose_aarch64_op_fcmgt_advsimd_reg,
    rose_aarch64_op_fcmgt_advsimd_zero,
    rose_aarch64_op_fcmle_advsimd,
    rose_aarch64_op_fcmlt_advsimd,
    rose_aarch64_op_fcmp_float,
    rose_aarch64_op_fcmpe_float,
    rose_aarch64_op_fcsel_float,
    rose_aarch64_op_fcvt_float,
    rose_aarch64_op_fcvtas_advsimd,
    rose_aarch64_op_fcvtas_float,
    rose_aarch64_op_fcvtau_advsimd,
    rose_aarch64_op_fcvtau_float,
    rose_aarch64_op_fcvtl_advsimd,
    rose_aarch64_op_fcvtms_advsimd,
    rose_aarch64_op_fcvtms_float,
    rose_aarch64_op_fcvtmu_advsimd,
    rose_aarch64_op_fcvtmu_float,
    rose_aarch64_op_fcvtn_advsimd,
    rose_aarch64_op_fcvtns_advsimd,
    rose_aarch64_op_fcvtns_float,
    rose_aarch64_op_fcvtnu_advsimd,
    rose_aarch64_op_fcvtnu_float,
    rose_aarch64_op_fcvtps_advsimd,
    rose_aarch64_op_fcvtps_float,
    rose_aarch64_op_fcvtpu_advsimd,
    rose_aarch64_op_fcvtpu_float,
    rose_aarch64_op_fcvtxn_advsimd,
    rose_aarch64_op_fcvtzs_advsimd_fix,
    rose_aarch64_op_fcvtzs_advsimd_int,
    rose_aarch64_op_fcvtzs_float_fix,
    rose_aarch64_op_fcvtzs_float_int,
    rose_aarch64_op_fcvtzu_advsimd_fix,
    rose_aarch64_op_fcvtzu_advsimd_int,
    rose_aarch64_op_fcvtzu_float_fix,
    rose_aarch64_op_fcvtzu_float_int,
    rose_aarch64_op_fdiv_advsimd,
    rose_aarch64_op_fdiv_float,
    rose_aarch64_op_fmadd_float,
    rose_aarch64_op_fmax_advsimd,
    rose_aarch64_op_fmax_float,
    rose_aarch64_op_fmaxnm_advsimd,
    rose_aarch64_op_fmaxnm_float,
    rose_aarch64_op_fmaxnmp_advsimd_pair,
    rose_aarch64_op_fmaxnmp_advsimd_vec,
    rose_aarch64_op_fmaxnmv_advsimd,
    rose_aarch64_op_fmaxp_advsimd_pair,
    rose_aarch64_op_fmaxp_advsimd_vec,
    rose_aarch64_op_fmaxv_advsimd,
    rose_aarch64_op_fmin_advsimd,
    rose_aarch64_op_fmin_float,
    rose_aarch64_op_fminnm_advsimd,
    rose_aarch64_op_fminnm_float,
    rose_aarch64_op_fminnmp_advsimd_pair,
    rose_aarch64_op_fminnmp_advsimd_vec,
    rose_aarch64_op_fminnmv_advsimd,
    rose_aarch64_op_fminp_advsimd_pair,
    rose_aarch64_op_fminp_advsimd_vec,
    rose_aarch64_op_fminv_advsimd,
    rose_aarch64_op_fmla_advsimd_elt,
    rose_aarch64_op_fmla_advsimd_vec,
    rose_aarch64_op_fmls_advsimd_elt,
    rose_aarch64_op_fmls_advsimd_vec,
    rose_aarch64_op_fmov_advsimd,
    rose_aarch64_op_fmov_float,
    rose_aarch64_op_fmov_float_gen,
    rose_aarch64_op_fmov_float_imm,
    rose_aarch64_op_fmsub_float,
    rose_aarch64_op_fmul_advsimd_elt,
    rose_aarch64_op_fmul_advsimd_vec,
    rose_aarch64_op_fmul_float,
    rose_aarch64_op_fmulx_advsimd_elt,
    rose_aarch64_op_fmulx_advsimd_vec,
    rose_aarch64_op_fneg_advsimd,
    rose_aarch64_op_fneg_float,
    rose_aarch64_op_fnmadd_float,
    rose_aarch64_op_fnmsub_float,
    rose_aarch64_op_fnmul_float,
    rose_aarch64_op_frecpe_advsimd,
    rose_aarch64_op_frecps_advsimd,
    rose_aarch64_op_frecpx_advsimd,
    rose_aarch64_op_frinta_advsimd,
    rose_aarch64_op_frinta_float,
    rose_aarch64_op_frinti_advsimd,
    rose_aarch64_op_frinti_float,
    rose_aarch64_op_frintm_advsimd,
    rose_aarch64_op_frintm_float,
    rose_aarch64_op_frintn_advsimd,
    rose_aarch64_op_frintn_float,
    rose_aarch64_op_frintp_advsimd,
    rose_aarch64_op_frintp_float,
    rose_aarch64_op_frintx_advsimd,
    rose_aarch64_op_frintx_float,
    rose_aarch64_op_frintz_advsimd,
    rose_aarch64_op_frintz_float,
    rose_aarch64_op_frsqrte_advsimd,
    rose_aarch64_op_frsqrts_advsimd,
    rose_aarch64_op_fsqrt_advsimd,
    rose_aarch64_op_fsqrt_float,
    rose_aarch64_op_fsub_advsimd,
    rose_aarch64_op_fsub_float,
    rose_aarch64_op_hint,
    rose_aarch64_op_hlt,
    rose_aarch64_op_hvc,
    rose_aarch64_op_ic_sys,
    rose_aarch64_op_ins_advsimd_elt,
    rose_aarch64_op_ins_advsimd_gen,
    rose_aarch64_op_isb,
    rose_aarch64_op_ld1_advsimd_mult,
    rose_aarch64_op_ld1_advsimd_sngl,
    rose_aarch64_op_ld1r_advsimd,
    rose_aarch64_op_ld2_advsimd_mult,
    rose_aarch64_op_ld2_advsimd_sngl,
    rose_aarch64_op_ld2r_advsimd,
    rose_aarch64_op_ld3_advsimd_mult,
    rose_aarch64_op_ld3_advsimd_sngl,
    rose_aarch64_op_ld3r_advsimd,
    rose_aarch64_op_ld4_advsimd_mult,
    rose_aarch64_op_ld4_advsimd_sngl,
    rose_aarch64_op_ld4r_advsimd,
    rose_aarch64_op_ldar,
    rose_aarch64_op_ldarb,
    rose_aarch64_op_ldarh,
    rose_aarch64_op_ldaxp,
    rose_aarch64_op_ldaxr,
    rose_aarch64_op_ldaxrb,
    rose_aarch64_op_ldaxrh,
    rose_aarch64_op_ldnp_fpsimd,
    rose_aarch64_op_ldnp_gen,
    rose_aarch64_op_ldp_fpsimd,
    rose_aarch64_op_ldp_gen,
    rose_aarch64_op_ldpsw,
    rose_aarch64_op_ldr_imm_fpsimd,
    rose_aarch64_op_ldr_imm_gen,
    rose_aarch64_op_ldr_lit_fpsimd,
    rose_aarch64_op_ldr_lit_gen,
    rose_aarch64_op_ldr_reg_fpsimd,
    rose_aarch64_op_ldr_reg_gen,
    rose_aarch64_op_ldrb_imm,
    rose_aarch64_op_ldrb_reg,
    rose_aarch64_op_ldrh_imm,
    rose_aarch64_op_ldrh_reg,
    rose_aarch64_op_ldrsb_imm,
    rose_aarch64_op_ldrsb_reg,
    rose_aarch64_op_ldrsh_imm,
    rose_aarch64_op_ldrsh_reg,
    rose_aarch64_op_ldrsw_imm,
    rose_aarch64_op_ldrsw_lit,
    rose_aarch64_op_ldrsw_reg,
    rose_aarch64_op_ldtr,
    rose_aarch64_op_ldtrb,
    rose_aarch64_op_ldtrh,
    rose_aarch64_op_ldtrsb,
    rose_aarch64_op_ldtrsh,
    rose_aarch64_op_ldtrsw,
    rose_aarch64_op_ldur_fpsimd,
    rose_aarch64_op_ldur_gen,
    rose_aarch64_op_ldurb,
    rose_aarch64_op_ldurh,
    rose_aarch64_op_ldursb,
    rose_aarch64_op_ldursh,
    rose_aarch64_op_ldursw,
    rose_aarch64_op_ldxp,
    rose_aarch64_op_ldxr,
    rose_aarch64_op_ldxrb,
    rose_aarch64_op_ldxrh,
    rose_aarch64_op_lsl_lslv,
    rose_aarch64_op_lsl_ubfm,
    rose_aarch64_op_lslv,
    rose_aarch64_op_lsr_lsrv,
    rose_aarch64_op_lsr_ubfm,
    rose_aarch64_op_lsrv,
    rose_aarch64_op_madd,
    rose_aarch64_op_mla_advsimd_elt,
    rose_aarch64_op_mla_advsimd_vec,
    rose_aarch64_op_mls_advsimd_elt,
    rose_aarch64_op_mls_advsimd_vec,
    rose_aarch64_op_mneg_msub,
    rose_aarch64_op_mov_add_addsub_imm,
    rose_aarch64_op_mov_dup_advsimd_elt,
    rose_aarch64_op_mov_ins_advsimd_elt,
    rose_aarch64_op_mov_ins_advsimd_gen,
    rose_aarch64_op_mov_movn,
    rose_aarch64_op_mov_movz,
    rose_aarch64_op_mov_orr_advsimd_reg,
    rose_aarch64_op_mov_orr_log_imm,
    rose_aarch64_op_mov_orr_log_shift,
    rose_aarch64_op_mov_umov_advsimd,
    rose_aarch64_op_movi_advsimd,
    rose_aarch64_op_movk,
    rose_aarch64_op_movn,
    rose_aarch64_op_movz,
    rose_aarch64_op_mrs,
    rose_aarch64_op_msr_imm,
    rose_aarch64_op_msr_reg,
    rose_aarch64_op_msub,
    rose_aarch64_op_mul_advsimd_elt,
    rose_aarch64_op_mul_advsimd_vec,
    rose_aarch64_op_mul_madd,
    rose_aarch64_op_mvn_not_advsimd,
    rose_aarch64_op_mvn_orn_log_shift,
    rose_aarch64_op_mvni_advsimd,
    rose_aarch64_op_neg_advsimd,
    rose_aarch64_op_neg_sub_addsub_shift,
    rose_aarch64_op_negs_subs_addsub_shift,
    rose_aarch64_op_ngc_sbc,
    rose_aarch64_op_ngcs_sbcs,
    rose_aarch64_op_nop_hint,
    rose_aarch64_op_not_advsimd,
    rose_aarch64_op_orn_advsimd,
    rose_aarch64_op_orn_log_shift,
    rose_aarch64_op_orr_advsimd_imm,
    rose_aarch64_op_orr_advsimd_reg,
    rose_aarch64_op_orr_log_imm,
    rose_aarch64_op_orr_log_shift,
    rose_aarch64_op_pmul_advsimd,
    rose_aarch64_op_pmull_advsimd,
    rose_aarch64_op_prfm_imm,
    rose_aarch64_op_prfm_lit,
    rose_aarch64_op_prfm_reg,
    rose_aarch64_op_prfum,
    rose_aarch64_op_raddhn_advsimd,
    rose_aarch64_op_rbit_advsimd,
    rose_aarch64_op_rbit_int,
    rose_aarch64_op_ret,
    rose_aarch64_op_rev,
    rose_aarch64_op_rev16_advsimd,
    rose_aarch64_op_rev16_int,
    rose_aarch64_op_rev32_advsimd,
    rose_aarch64_op_rev32_int,
    rose_aarch64_op_rev64_advsimd,
    rose_aarch64_op_ror_extr,
    rose_aarch64_op_ror_rorv,
    rose_aarch64_op_rorv,
    rose_aarch64_op_rshrn_advsimd,
    rose_aarch64_op_rsubhn_advsimd,
    rose_aarch64_op_saba_advsimd,
    rose_aarch64_op_sabal_advsimd,
    rose_aarch64_op_sabd_advsimd,
    rose_aarch64_op_sabdl_advsimd,
    rose_aarch64_op_sadalp_advsimd,
    rose_aarch64_op_saddl_advsimd,
    rose_aarch64_op_saddlp_advsimd,
    rose_aarch64_op_saddlv_advsimd,
    rose_aarch64_op_saddw_advsimd,
    rose_aarch64_op_sbc,
    rose_aarch64_op_sbcs,
    rose_aarch64_op_sbfiz_sbfm,
    rose_aarch64_op_sbfm,
    rose_aarch64_op_sbfx_sbfm,
    rose_aarch64_op_scvtf_advsimd_fix,
    rose_aarch64_op_scvtf_advsimd_int,
    rose_aarch64_op_scvtf_float_fix,
    rose_aarch64_op_scvtf_float_int,
    rose_aarch64_op_sdiv,
    rose_aarch64_op_sev_hint,
    rose_aarch64_op_sevl_hint,
    rose_aarch64_op_sha1c_advsimd,
    rose_aarch64_op_sha1h_advsimd,
    rose_aarch64_op_sha1m_advsimd,
    rose_aarch64_op_sha1p_advsimd,
    rose_aarch64_op_sha1su0_advsimd,
    rose_aarch64_op_sha1su1_advsimd,
    rose_aarch64_op_sha256h2_advsimd,
    rose_aarch64_op_sha256h_advsimd,
    rose_aarch64_op_sha256su0_advsimd,
    rose_aarch64_op_sha256su1_advsimd,
    rose_aarch64_op_shadd_advsimd,
    rose_aarch64_op_shl_advsimd,
    rose_aarch64_op_shll_advsimd,
    rose_aarch64_op_shrn_advsimd,
    rose_aarch64_op_shsub_advsimd,
    rose_aarch64_op_sli_advsimd,
    rose_aarch64_op_smaddl,
    rose_aarch64_op_smax_advsimd,
    rose_aarch64_op_smaxp_advsimd,
    rose_aarch64_op_smaxv_advsimd,
    rose_aarch64_op_smc,
    rose_aarch64_op_smin_advsimd,
    rose_aarch64_op_sminp_advsimd,
    rose_aarch64_op_sminv_advsimd,
    rose_aarch64_op_smlal_advsimd_elt,
    rose_aarch64_op_smlal_advsimd_vec,
    rose_aarch64_op_smlsl_advsimd_elt,
    rose_aarch64_op_smlsl_advsimd_vec,
    rose_aarch64_op_smnegl_smsubl,
    rose_aarch64_op_smov_advsimd,
    rose_aarch64_op_smsubl,
    rose_aarch64_op_smulh,
    rose_aarch64_op_smull_advsimd_elt,
    rose_aarch64_op_smull_advsimd_vec,
    rose_aarch64_op_smull_smaddl,
    rose_aarch64_op_sqabs_advsimd,
    rose_aarch64_op_sqadd_advsimd,
    rose_aarch64_op_sqdmlal_advsimd_elt,
    rose_aarch64_op_sqdmlal_advsimd_vec,
    rose_aarch64_op_sqdmlsl_advsimd_elt,
    rose_aarch64_op_sqdmlsl_advsimd_vec,
    rose_aarch64_op_sqdmulh_advsimd_elt,
    rose_aarch64_op_sqdmulh_advsimd_vec,
    rose_aarch64_op_sqdmull_advsimd_elt,
    rose_aarch64_op_sqdmull_advsimd_vec,
    rose_aarch64_op_sqneg_advsimd,
    rose_aarch64_op_sqrdmulh_advsimd_elt,
    rose_aarch64_op_sqrdmulh_advsimd_vec,
    rose_aarch64_op_sqrshl_advsimd,
    rose_aarch64_op_sqrshrn_advsimd,
    rose_aarch64_op_sqrshrun_advsimd,
    rose_aarch64_op_sqshl_advsimd_imm,
    rose_aarch64_op_sqshl_advsimd_reg,
    rose_aarch64_op_sqshlu_advsimd,
    rose_aarch64_op_sqshrn_advsimd,
    rose_aarch64_op_sqshrun_advsimd,
    rose_aarch64_op_sqsub_advsimd,
    rose_aarch64_op_sqxtn_advsimd,
    rose_aarch64_op_sqxtun_advsimd,
    rose_aarch64_op_srhadd_advsimd,
    rose_aarch64_op_sri_advsimd,
    rose_aarch64_op_srshl_advsimd,
    rose_aarch64_op_srshr_advsimd,
    rose_aarch64_op_srsra_advsimd,
    rose_aarch64_op_sshl_advsimd,
    rose_aarch64_op_sshll_advsimd,
    rose_aarch64_op_sshr_advsimd,
    rose_aarch64_op_ssra_advsimd,
    rose_aarch64_op_ssubl_advsimd,
    rose_aarch64_op_ssubw_advsimd,
    rose_aarch64_op_st1_advsimd_mult,
    rose_aarch64_op_st1_advsimd_sngl,
    rose_aarch64_op_st2_advsimd_mult,
    rose_aarch64_op_st2_advsimd_sngl,
    rose_aarch64_op_st3_advsimd_mult,
    rose_aarch64_op_st3_advsimd_sngl,
    rose_aarch64_op_st4_advsimd_mult,
    rose_aarch64_op_st4_advsimd_sngl,
    rose_aarch64_op_stlr,
    rose_aarch64_op_stlrb,
    rose_aarch64_op_stlrh,
    rose_aarch64_op_stlxp,
    rose_aarch64_op_stlxr,
    rose_aarch64_op_stlxrb,
    rose_aarch64_op_stlxrh,
    rose_aarch64_op_stnp_fpsimd,
    rose_aarch64_op_stnp_gen,
    rose_aarch64_op_stp_fpsimd,
    rose_aarch64_op_stp_gen,
    rose_aarch64_op_str_imm_fpsimd,
    rose_aarch64_op_str_imm_gen,
    rose_aarch64_op_str_reg_fpsimd,
    rose_aarch64_op_str_reg_gen,
    rose_aarch64_op_strb_imm,
    rose_aarch64_op_strb_reg,
    rose_aarch64_op_strh_imm,
    rose_aarch64_op_strh_reg,
    rose_aarch64_op_sttr,
    rose_aarch64_op_sttrb,
    rose_aarch64_op_sttrh,
    rose_aarch64_op_stur_fpsimd,
    rose_aarch64_op_stur_gen,
    rose_aarch64_op_sturb,
    rose_aarch64_op_sturh,
    rose_aarch64_op_stxp,
    rose_aarch64_op_stxr,
    rose_aarch64_op_stxrb,
    rose_aarch64_op_stxrh,
    rose_aarch64_op_sub_addsub_ext,
    rose_aarch64_op_sub_addsub_imm,
    rose_aarch64_op_sub_addsub_shift,
    rose_aarch64_op_sub_advsimd,
    rose_aarch64_op_subhn_advsimd,
    rose_aarch64_op_subs_addsub_ext,
    rose_aarch64_op_subs_addsub_imm,
    rose_aarch64_op_subs_addsub_shift,
    rose_aarch64_op_suqadd_advsimd,
    rose_aarch64_op_svc,
    rose_aarch64_op_sxtb_sbfm,
    rose_aarch64_op_sxth_sbfm,
    rose_aarch64_op_sxtl_sshll_advsimd,
    rose_aarch64_op_sxtw_sbfm,
    rose_aarch64_op_sys,
    rose_aarch64_op_sysl,
    rose_aarch64_op_tbl_advsimd,
    rose_aarch64_op_tbnz,
    rose_aarch64_op_tbx_advsimd,
    rose_aarch64_op_tbz,
    rose_aarch64_op_tlbi_sys,
    rose_aarch64_op_trn1_advsimd,
    rose_aarch64_op_trn2_advsimd,
    rose_aarch64_op_tst_ands_log_imm,
    rose_aarch64_op_tst_ands_log_shift,
    rose_aarch64_op_uaba_advsimd,
    rose_aarch64_op_uabal_advsimd,
    rose_aarch64_op_uabd_advsimd,
    rose_aarch64_op_uabdl_advsimd,
    rose_aarch64_op_uadalp_advsimd,
    rose_aarch64_op_uaddl_advsimd,
    rose_aarch64_op_uaddlp_advsimd,
    rose_aarch64_op_uaddlv_advsimd,
    rose_aarch64_op_uaddw_advsimd,
    rose_aarch64_op_ubfiz_ubfm,
    rose_aarch64_op_ubfm,
    rose_aarch64_op_ubfx_ubfm,
    rose_aarch64_op_ucvtf_advsimd_fix,
    rose_aarch64_op_ucvtf_advsimd_int,
    rose_aarch64_op_ucvtf_float_fix,
    rose_aarch64_op_ucvtf_float_int,
    rose_aarch64_op_udiv,
    rose_aarch64_op_uhadd_advsimd,
    rose_aarch64_op_uhsub_advsimd,
    rose_aarch64_op_umaddl,
    rose_aarch64_op_umax_advsimd,
    rose_aarch64_op_umaxp_advsimd,
    rose_aarch64_op_umaxv_advsimd,
    rose_aarch64_op_umin_advsimd,
    rose_aarch64_op_uminp_advsimd,
    rose_aarch64_op_uminv_advsimd,
    rose_aarch64_op_umlal_advsimd_elt,
    rose_aarch64_op_umlal_advsimd_vec,
    rose_aarch64_op_umlsl_advsimd_elt,
    rose_aarch64_op_umlsl_advsimd_vec,
    rose_aarch64_op_umnegl_umsubl,
    rose_aarch64_op_umov_advsimd,
    rose_aarch64_op_umsubl,
    rose_aarch64_op_umulh,
    rose_aarch64_op_umull_advsimd_elt,
    rose_aarch64_op_umull_advsimd_vec,
    rose_aarch64_op_umull_umaddl,
    rose_aarch64_op_uqadd_advsimd,
    rose_aarch64_op_uqrshl_advsimd,
    rose_aarch64_op_uqrshrn_advsimd,
    rose_aarch64_op_uqshl_advsimd_imm,
    rose_aarch64_op_uqshl_advsimd_reg,
    rose_aarch64_op_uqshrn_advsimd,
    rose_aarch64_op_uqsub_advsimd,
    rose_aarch64_op_uqxtn_advsimd,
    rose_aarch64_op_urecpe_advsimd,
    rose_aarch64_op_urhadd_advsimd,
    rose_aarch64_op_urshl_advsimd,
    rose_aarch64_op_urshr_advsimd,
    rose_aarch64_op_ursqrte_advsimd,
    rose_aarch64_op_ursra_advsimd,
    rose_aarch64_op_ushl_advsimd,
    rose_aarch64_op_ushll_advsimd,
    rose_aarch64_op_ushr_advsimd,
    rose_aarch64_op_usqadd_advsimd,
    rose_aarch64_op_usra_advsimd,
    rose_aarch64_op_usubl_advsimd,
    rose_aarch64_op_usubw_advsimd,
    rose_aarch64_op_uxtb_ubfm,
    rose_aarch64_op_uxth_ubfm,
    rose_aarch64_op_uxtl_ushll_advsimd,
    rose_aarch64_op_uzp1_advsimd,
    rose_aarch64_op_uzp2_advsimd,
    rose_aarch64_op_wfe_hint,
    rose_aarch64_op_wfi_hint,
    rose_aarch64_op_xtn_advsimd,
    rose_aarch64_op_yield_hint,
    rose_aarch64_op_zip1_advsimd,
    rose_aarch64_op_zip2_advsimd
};

#endif //ROSE_ARMV8INSTRUCTIONENUM_H
