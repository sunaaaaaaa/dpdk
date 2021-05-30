/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2014-2021 Broadcom
 * All rights reserved.
 */

/* date: Fri Jan 29 09:44:41 2021 */

#include "ulp_template_db_enum.h"
#include "ulp_template_db_field.h"
#include "ulp_template_struct.h"
#include "ulp_template_db_tbl.h"

/* Mapper templates for header class list */
struct bnxt_ulp_mapper_tmpl_info ulp_wh_plus_class_tmpl_list[] = {
	/* class_tid: 1, wh_plus, ingress */
	[1] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 14,
	.start_tbl_idx = 0,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 0,
		.cond_nums = 0 }
	},
	/* class_tid: 2, wh_plus, egress */
	[2] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 14,
	.start_tbl_idx = 14,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 6,
		.cond_nums = 0 }
	},
	/* class_tid: 3, wh_plus, ingress */
	[3] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 8,
	.start_tbl_idx = 28,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 12,
		.cond_nums = 0 }
	},
	/* class_tid: 4, wh_plus, egress */
	[4] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 14,
	.start_tbl_idx = 36,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 13,
		.cond_nums = 0 }
	},
	/* class_tid: 5, wh_plus, egress */
	[5] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 9,
	.start_tbl_idx = 50,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 18,
		.cond_nums = 0 }
	},
	/* class_tid: 6, wh_plus, egress */
	[6] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 9,
	.start_tbl_idx = 59,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 19,
		.cond_nums = 0 }
	},
	/* class_tid: 7, wh_plus, egress */
	[7] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 1,
	.start_tbl_idx = 68,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 20,
		.cond_nums = 0 }
	}
};

struct bnxt_ulp_mapper_tbl_info ulp_wh_plus_class_tbl_list[] = {
	{ /* class_tid: 1, wh_plus, table: l2_cntxt_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 5,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 0,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 0,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 0,
	.ident_nums = 1
	},
	{ /* class_tid: 1, wh_plus, table: mac_addr_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 1,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1,
	.blob_key_bit_size = 56,
	.key_bit_size = 56,
	.key_num_fields = 2,
	.result_start_idx = 0,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 1, wh_plus, table: control.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 1,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 1, wh_plus, table: l2_cntxt_tcam.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 2,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 3,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 4,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 1,
	.ident_nums = 1
	},
	{ /* class_tid: 1, wh_plus, table: mac_addr_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 2,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 16,
	.blob_key_bit_size = 56,
	.key_bit_size = 56,
	.key_num_fields = 2,
	.result_start_idx = 17,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 1, wh_plus, table: profile_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 2,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_FLOW_SIG_ID_MATCH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 18,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.ident_start_idx = 2,
	.ident_nums = 3
	},
	{ /* class_tid: 1, wh_plus, table: control.1 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 4,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 2,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 1, wh_plus, table: profile_tcam.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 2,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 3,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 21,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 21,
	.result_bit_size = 38,
	.result_num_fields = 17,
	.ident_start_idx = 5,
	.ident_nums = 1
	},
	{ /* class_tid: 1, wh_plus, table: profile_tcam.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 4,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 64,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 38,
	.result_bit_size = 38,
	.result_num_fields = 17,
	.ident_start_idx = 6,
	.ident_nums = 1
	},
	{ /* class_tid: 1, wh_plus, table: profile_tcam_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 4,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 107,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.result_start_idx = 55,
	.result_bit_size = 74,
	.result_num_fields = 5
	},
	{ /* class_tid: 1, wh_plus, table: em.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.direction = TF_DIR_RX,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 4,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 110,
	.blob_key_bit_size = 176,
	.key_bit_size = 176,
	.key_num_fields = 10,
	.result_start_idx = 60,
	.result_bit_size = 64,
	.result_num_fields = 9
	},
	{ /* class_tid: 1, wh_plus, table: eem.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.direction = TF_DIR_RX,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 5,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 120,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 10,
	.result_start_idx = 69,
	.result_bit_size = 64,
	.result_num_fields = 9
	},
	{ /* class_tid: 1, wh_plus, table: em.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.direction = TF_DIR_RX,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 6,
		.cond_nums = 0 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 130,
	.blob_key_bit_size = 416,
	.key_bit_size = 416,
	.key_num_fields = 11,
	.result_start_idx = 78,
	.result_bit_size = 64,
	.result_num_fields = 9
	},
	{ /* class_tid: 1, wh_plus, table: eem.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 6,
		.cond_nums = 0 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 141,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 87,
	.result_bit_size = 64,
	.result_num_fields = 9
	},
	{ /* class_tid: 2, wh_plus, table: l2_cntxt_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 5,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 6,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 152,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 7,
	.ident_nums = 1
	},
	{ /* class_tid: 2, wh_plus, table: mac_addr_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 7,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 153,
	.blob_key_bit_size = 56,
	.key_bit_size = 56,
	.key_num_fields = 2,
	.result_start_idx = 96,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 2, wh_plus, table: control.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 7,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 2, wh_plus, table: l2_cntxt_tcam.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 8,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 155,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 100,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 8,
	.ident_nums = 1
	},
	{ /* class_tid: 2, wh_plus, table: mac_addr_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 8,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 168,
	.blob_key_bit_size = 56,
	.key_bit_size = 56,
	.key_num_fields = 2,
	.result_start_idx = 113,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 2, wh_plus, table: profile_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 8,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_FLOW_SIG_ID_MATCH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 170,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.ident_start_idx = 9,
	.ident_nums = 3
	},
	{ /* class_tid: 2, wh_plus, table: control.1 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 4,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 8,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 2, wh_plus, table: profile_tcam.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 2,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 9,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 173,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 117,
	.result_bit_size = 38,
	.result_num_fields = 17,
	.ident_start_idx = 12,
	.ident_nums = 1
	},
	{ /* class_tid: 2, wh_plus, table: profile_tcam.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 10,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 216,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 134,
	.result_bit_size = 38,
	.result_num_fields = 17,
	.ident_start_idx = 13,
	.ident_nums = 1
	},
	{ /* class_tid: 2, wh_plus, table: profile_tcam_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 10,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 259,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.result_start_idx = 151,
	.result_bit_size = 74,
	.result_num_fields = 5
	},
	{ /* class_tid: 2, wh_plus, table: em.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.direction = TF_DIR_TX,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 10,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 262,
	.blob_key_bit_size = 176,
	.key_bit_size = 176,
	.key_num_fields = 10,
	.result_start_idx = 156,
	.result_bit_size = 64,
	.result_num_fields = 9
	},
	{ /* class_tid: 2, wh_plus, table: eem.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.direction = TF_DIR_TX,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 11,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 272,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 10,
	.result_start_idx = 165,
	.result_bit_size = 64,
	.result_num_fields = 9
	},
	{ /* class_tid: 2, wh_plus, table: em.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.direction = TF_DIR_TX,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 12,
		.cond_nums = 0 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 282,
	.blob_key_bit_size = 416,
	.key_bit_size = 416,
	.key_num_fields = 11,
	.result_start_idx = 174,
	.result_bit_size = 64,
	.result_num_fields = 9
	},
	{ /* class_tid: 2, wh_plus, table: eem.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 12,
		.cond_nums = 0 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 293,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 183,
	.result_bit_size = 64,
	.result_num_fields = 9
	},
	{ /* class_tid: 3, wh_plus, table: int_full_act_record.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 12,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 192,
	.result_bit_size = 128,
	.result_num_fields = 26
	},
	{ /* class_tid: 3, wh_plus, table: l2_cntxt_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 12,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 304,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 14,
	.ident_nums = 0
	},
	{ /* class_tid: 3, wh_plus, table: control.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 12,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 3, wh_plus, table: l2_cntxt_tcam.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 13,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 305,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 218,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 14,
	.ident_nums = 1
	},
	{ /* class_tid: 3, wh_plus, table: l2_cntxt_tcam_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 13,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 318,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 231,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 3, wh_plus, table: parif_def_lkup_arec_ptr.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_LKUP_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 13,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_PHY_PORT_PARIF,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 235,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 3, wh_plus, table: parif_def_arec_ptr.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 13,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_PHY_PORT_PARIF,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 236,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 3, wh_plus, table: parif_def_err_arec_ptr.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_ERR_ACT_REC_PTR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 13,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_PHY_PORT_PARIF,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 237,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 4, wh_plus, table: control.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 6,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 13,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* class_tid: 4, wh_plus, table: int_full_act_record.vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 14,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 238,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0
	},
	{ /* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.rd_vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 14,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 319,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 15,
	.ident_nums = 0
	},
	{ /* class_tid: 4, wh_plus, table: control.1 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 14,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 4, wh_plus, table: l2_cntxt_tcam_bypass.vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 15,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 320,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 264,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 15,
	.ident_nums = 0
	},
	{ /* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.wr_vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 15,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 333,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 277,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 15,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 334,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 15,
	.ident_nums = 0
	},
	{ /* class_tid: 4, wh_plus, table: control.2 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 15,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 4, wh_plus, table: l2_cntxt_tcam.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 16,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 335,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 281,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 15,
	.ident_nums = 1
	},
	{ /* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 16,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 348,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 294,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 4, wh_plus, table: int_full_act_record.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 18,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 298,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0
	},
	{ /* class_tid: 4, wh_plus, table: parif_def_lkup_arec_ptr.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_LKUP_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 18,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_PARIF,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 324,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 4, wh_plus, table: parif_def_arec_ptr.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 18,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_PARIF,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 325,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 4, wh_plus, table: parif_def_err_arec_ptr.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_ERR_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 18,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_PARIF,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 326,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 5, wh_plus, table: l2_cntxt_tcam_cache.rd_egr0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 18,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 349,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 16,
	.ident_nums = 0
	},
	{ /* class_tid: 5, wh_plus, table: control.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 18,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 5, wh_plus, table: l2_cntxt_tcam_bypass.egr0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 19,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 350,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 327,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 16,
	.ident_nums = 0
	},
	{ /* class_tid: 5, wh_plus, table: l2_cntxt_tcam_cache.wr_egr0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 19,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 363,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 340,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 5, wh_plus, table: int_vtag_encap_record.egr0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_ACT_ENCAP_8B,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 19,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_ENCAP_PTR_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 344,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 12
	},
	{ /* class_tid: 5, wh_plus, table: int_full_act_record.egr0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 19,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 356,
	.result_bit_size = 128,
	.result_num_fields = 26
	},
	{ /* class_tid: 5, wh_plus, table: int_full_act_record.ing0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 19,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 382,
	.result_bit_size = 128,
	.result_num_fields = 26
	},
	{ /* class_tid: 5, wh_plus, table: l2_cntxt_tcam_bypass.dtagged_ing0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 19,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 364,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 408,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 16,
	.ident_nums = 0
	},
	{ /* class_tid: 5, wh_plus, table: l2_cntxt_tcam_bypass.stagged_ing0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 19,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 377,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 421,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 16,
	.ident_nums = 0
	},
	{ /* class_tid: 6, wh_plus, table: l2_cntxt_tcam_cache.rd_egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 19,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 390,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 16,
	.ident_nums = 0
	},
	{ /* class_tid: 6, wh_plus, table: control.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 19,
		.cond_nums = 1 },
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 6, wh_plus, table: l2_cntxt_tcam.egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 20,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 391,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 434,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 16,
	.ident_nums = 1
	},
	{ /* class_tid: 6, wh_plus, table: l2_cntxt_tcam_cache.egr_wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 20,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 404,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 447,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 6, wh_plus, table: parif_def_lkup_arec_ptr.egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_LKUP_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 20,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_CONST,
	.tbl_operand = ULP_WP_SYM_LOOPBACK_PARIF,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 451,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 6, wh_plus, table: parif_def_arec_ptr.egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 20,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_CONST,
	.tbl_operand = ULP_WP_SYM_LOOPBACK_PARIF,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 452,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 6, wh_plus, table: parif_def_err_arec_ptr.egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_ERR_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 20,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_CONST,
	.tbl_operand = ULP_WP_SYM_LOOPBACK_PARIF,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 453,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 6, wh_plus, table: int_full_act_record.ing */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 20,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_AND_SET_VFR_FLAG,
	.result_start_idx = 454,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0
	},
	{ /* class_tid: 6, wh_plus, table: l2_cntxt_tcam_bypass.ing */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 20,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 405,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 480,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 17,
	.ident_nums = 0
	},
	{ /* class_tid: 7, wh_plus, table: int_full_act_record.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 20,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_GLB_REGFILE,
	.tbl_operand = BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR,
	.accept_opcode = BNXT_ULP_ACCEPT_OPC_ALWAYS,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 493,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0
	}
};

struct bnxt_ulp_mapper_cond_info ulp_wh_plus_class_cond_list[] = {
	/* cond_execute: class_tid: 1, l2_cntxt_tcam_cache.rd */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_FIELD_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_GLB_HF_ID_O_ETH_DMAC
	},
	/* cond_execute: class_tid: 1, control.0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 1, control.1 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 1, profile_tcam.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 1, em.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 1, eem.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 2, l2_cntxt_tcam_cache.rd */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_FIELD_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_GLB_HF_ID_O_ETH_SMAC
	},
	/* cond_execute: class_tid: 2, control.0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 2, control.1 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 2, profile_tcam.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 2, em.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 2, eem.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 3, control.0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 4, control.0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_VFR_MODE
	},
	/* cond_execute: class_tid: 4, control.1 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 4, control.2 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 4, l2_cntxt_tcam_cache.wr */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_NOT_SET,
	.cond_operand = BNXT_ULP_CF_IDX_VFR_MODE
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 5, control.0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 6, control.0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	}
};

struct bnxt_ulp_mapper_key_info ulp_wh_plus_class_key_info_list[] = {
	/* class_tid: 1, wh_plus, table: l2_cntxt_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	/* class_tid: 1, wh_plus, table: mac_addr_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	/* class_tid: 1, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff}
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 1, wh_plus, table: mac_addr_cache.wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	/* class_tid: 1, wh_plus, table: profile_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_FIELD_BIT,
		.field_cond_opr = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 1, wh_plus, table: profile_tcam.ipv4 */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_CF,
		.field_cond_opr = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src2 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L4_HDR_TYPE_TCP},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_WP_SYM_L4_HDR_TYPE_UDP}
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_ONE_VTAG >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_ONE_VTAG & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "reserved",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "reserved",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_FIELD_BIT,
		.field_cond_opr = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 1, wh_plus, table: profile_tcam.ipv6 */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_CF,
		.field_cond_opr = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src2 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L4_HDR_TYPE_TCP},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_WP_SYM_L4_HDR_TYPE_UDP}
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L3_HDR_TYPE_IPV6}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_ONE_VTAG >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_ONE_VTAG & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "reserved",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "reserved",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_FIELD_BIT,
		.field_cond_opr = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 1, wh_plus, table: profile_tcam_cache.wr */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_FIELD_BIT,
		.field_cond_opr = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 1, wh_plus, table: em.ipv4 */
	{
	.field_info_mask = {
		.description = "spare",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spare",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_ipv4.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.dst",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv4.dst",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.src",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv4.src",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	/* class_tid: 1, wh_plus, table: eem.ipv4 */
	{
	.field_info_mask = {
		.description = "spare",
		.field_bit_size = 275,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spare",
		.field_bit_size = 275,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_ipv4.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.dst",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv4.dst",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.src",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv4.src",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	/* class_tid: 1, wh_plus, table: em.ipv6 */
	{
	.field_info_mask = {
		.description = "spare",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spare",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_ipv6.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.dst",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv6.dst",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.src",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv6.src",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	/* class_tid: 1, wh_plus, table: eem.ipv6 */
	{
	.field_info_mask = {
		.description = "spare",
		.field_bit_size = 35,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spare",
		.field_bit_size = 35,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_ipv6.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.dst",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv6.dst",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.src",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv6.src",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	/* class_tid: 2, wh_plus, table: mac_addr_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff}
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 2, wh_plus, table: mac_addr_cache.wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	/* class_tid: 2, wh_plus, table: profile_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_FIELD_BIT,
		.field_cond_opr = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 2, wh_plus, table: profile_tcam.ipv4 */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_CF,
		.field_cond_opr = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src2 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L4_HDR_TYPE_TCP},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_WP_SYM_L4_HDR_TYPE_UDP}
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_ONE_VTAG >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_ONE_VTAG & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "reserved",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "reserved",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_FIELD_BIT,
		.field_cond_opr = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 2, wh_plus, table: profile_tcam.ipv6 */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_CF,
		.field_cond_opr = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src2 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L4_HDR_TYPE_TCP},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_WP_SYM_L4_HDR_TYPE_UDP}
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L3_HDR_TYPE_IPV6}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_O_ONE_VTAG >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_ONE_VTAG & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "reserved",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "reserved",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_FIELD_BIT,
		.field_cond_opr = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 2, wh_plus, table: profile_tcam_cache.wr */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_FIELD_BIT,
		.field_cond_opr = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 2, wh_plus, table: em.ipv4 */
	{
	.field_info_mask = {
		.description = "spare",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spare",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_ipv4.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.dst",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv4.dst",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.src",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv4.src",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	/* class_tid: 2, wh_plus, table: eem.ipv4 */
	{
	.field_info_mask = {
		.description = "spare",
		.field_bit_size = 275,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spare",
		.field_bit_size = 275,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_ipv4.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.dst",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv4.dst",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv4.src",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv4.src",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	/* class_tid: 2, wh_plus, table: em.ipv6 */
	{
	.field_info_mask = {
		.description = "spare",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spare",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_ipv6.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.dst",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv6.dst",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.src",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv6.src",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	/* class_tid: 2, wh_plus, table: eem.ipv6 */
	{
	.field_info_mask = {
		.description = "spare",
		.field_bit_size = 35,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spare",
		.field_bit_size = 35,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "local_cos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "o_l4.sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_HDR_BIT,
		.field_cond_opr = {
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
			((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
			(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_ipv6.ip_proto",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.dst",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv6.dst",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_ipv6.src",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "o_ipv6.src",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "o_eth.smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "o_eth.dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
			(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
			BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	/* class_tid: 3, wh_plus, table: l2_cntxt_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_PHY_PORT_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_PHY_PORT_SVIF & 0xff}
		}
	},
	/* class_tid: 3, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_PHY_PORT_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_PHY_PORT_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 3, wh_plus, table: l2_cntxt_tcam_cache.wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_PHY_PORT_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_PHY_PORT_SVIF & 0xff}
		}
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.rd_vfr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam_bypass.vfr */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.wr_vfr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, wh_plus, table: l2_cntxt_tcam_cache.rd_egr0 */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, wh_plus, table: l2_cntxt_tcam_bypass.egr0 */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 5, wh_plus, table: l2_cntxt_tcam_cache.wr_egr0 */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, wh_plus, table: l2_cntxt_tcam_bypass.dtagged_ing0 */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			2}
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_TUN_HDR_TYPE_NONE}
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 5, wh_plus, table: l2_cntxt_tcam_bypass.stagged_ing0 */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			ULP_WP_SYM_TUN_HDR_TYPE_NONE}
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam_cache.rd_egr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam.egr */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam_cache.egr_wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam_bypass.ing */
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
			BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "sparif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_num_vtags",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "key_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
		.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
			1}
		}
	}
};

struct bnxt_ulp_mapper_field_info ulp_wh_plus_class_result_field_list[] = {
	/* class_tid: 1, wh_plus, table: mac_addr_cache.rd */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, wh_plus, table: mac_addr_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
		BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, wh_plus, table: profile_tcam.ipv4 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.0",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "em_key_mask.1",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
	},
	{
	.description = "em_key_mask.2",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
	},
	{
	.description = "em_key_mask.3",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
	},
	{
	.description = "em_key_mask.4",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.5",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff}
	},
	{
	.description = "em_key_mask.6",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff}
	},
	{
	.description = "em_key_mask.7",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.8",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.9",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		3}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, wh_plus, table: profile_tcam.ipv6 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.0",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "em_key_mask.1",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.2",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
	},
	{
	.description = "em_key_mask.3",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
	},
	{
	.description = "em_key_mask.4",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
	},
	{
	.description = "em_key_mask.5",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.6",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff}
	},
	{
	.description = "em_key_mask.7",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff}
	},
	{
	.description = "em_key_mask.8",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.9",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		7}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, wh_plus, table: profile_tcam_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
		BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "profile_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_sig_id",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_FLOW_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_FLOW_SIG_ID & 0xff}
	},
	/* class_tid: 1, wh_plus, table: em.ipv4 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "ext_flow_cntr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		3}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	/* class_tid: 1, wh_plus, table: eem.ipv4 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "ext_flow_cntr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_ACTION_REC_SIZE >> 8) & 0xff,
		BNXT_ULP_RF_IDX_ACTION_REC_SIZE & 0xff}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		(173 >> 8) & 0xff,
		173 & 0xff}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		3}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	/* class_tid: 1, wh_plus, table: em.ipv6 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "ext_flow_cntr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		3}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	/* class_tid: 1, wh_plus, table: eem.ipv6 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "ext_flow_cntr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_ACTION_REC_SIZE >> 8) & 0xff,
		BNXT_ULP_RF_IDX_ACTION_REC_SIZE & 0xff}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		(413 >> 8) & 0xff,
		413 & 0xff}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		3}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	/* class_tid: 2, wh_plus, table: mac_addr_cache.rd */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_CF,
	.field_cond_opr = {
		(BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP >> 8) & 0xff,
		BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP & 0xff},
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		ULP_WP_SYM_LOOPBACK_PARIF},
	.field_src2 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr2 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_SP_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_SP_PTR & 0xff}
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 2, wh_plus, table: mac_addr_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
		BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 2, wh_plus, table: profile_tcam.ipv4 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.0",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "em_key_mask.1",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
	},
	{
	.description = "em_key_mask.2",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
	},
	{
	.description = "em_key_mask.3",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
	},
	{
	.description = "em_key_mask.4",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.5",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff}
	},
	{
	.description = "em_key_mask.6",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff}
	},
	{
	.description = "em_key_mask.7",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.8",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.9",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		4}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 2, wh_plus, table: profile_tcam.ipv6 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.0",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "em_key_mask.1",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
	},
	{
	.description = "em_key_mask.2",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.3",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
	},
	{
	.description = "em_key_mask.4",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
	},
	{
	.description = "em_key_mask.5",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.6",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff}
	},
	{
	.description = "em_key_mask.7",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff}
	},
	{
	.description = "em_key_mask.8",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_mask.9",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		7}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 2, wh_plus, table: profile_tcam_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
		BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "profile_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_sig_id",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_FLOW_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_FLOW_SIG_ID & 0xff}
	},
	/* class_tid: 2, wh_plus, table: em.ipv4 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "ext_flow_cntr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		3}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	/* class_tid: 2, wh_plus, table: eem.ipv4 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "ext_flow_cntr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_ACTION_REC_SIZE >> 8) & 0xff,
		BNXT_ULP_RF_IDX_ACTION_REC_SIZE & 0xff}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		(173 >> 8) & 0xff,
		173 & 0xff}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		3}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	/* class_tid: 2, wh_plus, table: em.ipv6 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "ext_flow_cntr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		3}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	/* class_tid: 2, wh_plus, table: eem.ipv6 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "ext_flow_cntr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_ACTION_REC_SIZE >> 8) & 0xff,
		BNXT_ULP_RF_IDX_ACTION_REC_SIZE & 0xff}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		(413 >> 8) & 0xff,
		413 & 0xff}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		3}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	/* class_tid: 3, wh_plus, table: int_full_act_record.0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_VNIC >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_VNIC & 0xff}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, wh_plus, table: l2_cntxt_tcam_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
		BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, wh_plus, table: parif_def_lkup_arec_ptr.0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	/* class_tid: 3, wh_plus, table: parif_def_arec_ptr.0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	/* class_tid: 3, wh_plus, table: parif_def_err_arec_ptr.0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	/* class_tid: 4, wh_plus, table: int_full_act_record.vfr */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_PHY_PORT_VPORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_VPORT & 0xff}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam_bypass.vfr */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.wr_vfr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
		BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
		BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, wh_plus, table: int_full_act_record.0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_PHY_PORT_VPORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_VPORT & 0xff}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, wh_plus, table: parif_def_lkup_arec_ptr.0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	/* class_tid: 4, wh_plus, table: parif_def_arec_ptr.0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	/* class_tid: 4, wh_plus, table: parif_def_err_arec_ptr.0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	/* class_tid: 5, wh_plus, table: l2_cntxt_tcam_bypass.egr0 */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, wh_plus, table: l2_cntxt_tcam_cache.wr_egr0 */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
		BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, wh_plus, table: int_vtag_encap_record.egr0 */
	{
	.description = "ecv_tun_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ecv_l4_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ecv_l3_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ecv_l2_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ecv_vtag_type",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		ULP_WP_SYM_ECV_VTAG_TYPE_ADD_1_ENCAP_PRI}
	},
	{
	.description = "ecv_custom_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ecv_valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "vtag_tpid",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		0x81,
		0x00}
	},
	{
	.description = "vtag_vid",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
	},
	{
	.description = "vtag_de",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vtag_pcp",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "spare",
	.field_bit_size = 80,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, wh_plus, table: int_full_act_record.egr0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_ENCAP_PTR_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_ENCAP_PTR_0 & 0xff}
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		(ULP_WP_SYM_LOOPBACK_PORT >> 8) & 0xff,
		ULP_WP_SYM_LOOPBACK_PORT & 0xff}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, wh_plus, table: int_full_act_record.ing0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_VF_FUNC_VNIC >> 8) & 0xff,
		BNXT_ULP_CF_IDX_VF_FUNC_VNIC & 0xff}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, wh_plus, table: l2_cntxt_tcam_bypass.dtagged_ing0 */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, wh_plus, table: l2_cntxt_tcam_bypass.stagged_ing0 */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam.egr */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		ULP_WP_SYM_LOOPBACK_PARIF}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam_cache.egr_wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
		BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 6, wh_plus, table: parif_def_lkup_arec_ptr.egr */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR & 0xff}
	},
	/* class_tid: 6, wh_plus, table: parif_def_arec_ptr.egr */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR & 0xff}
	},
	/* class_tid: 6, wh_plus, table: parif_def_err_arec_ptr.egr */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR & 0xff}
	},
	/* class_tid: 6, wh_plus, table: int_full_act_record.ing */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_VNIC >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_VNIC & 0xff}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam_bypass.ing */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
		(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		1}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 7, wh_plus, table: int_full_act_record.0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
		(ULP_WP_SYM_LOOPBACK_PORT >> 8) & 0xff,
		ULP_WP_SYM_LOOPBACK_PORT & 0xff}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_COND_OP,
	.field_cond_src = BNXT_ULP_FIELD_COND_SRC_TRUE,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	}
};

struct bnxt_ulp_mapper_ident_info ulp_wh_plus_class_ident_list[] = {
	/* class_tid: 1, wh_plus, table: l2_cntxt_tcam_cache.rd */
	{
	.description = "l2_cntxt_id",
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 42
	},
	/* class_tid: 1, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 1, wh_plus, table: profile_tcam_cache.rd */
	{
	.description = "em_profile_id",
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 42
	},
	{
	.description = "flow_sig_id",
	.regfile_idx = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
	.ident_bit_size = 16,
	.ident_bit_pos = 58
	},
	{
	.description = "profile_tcam_index",
	.regfile_idx = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 32
	},
	/* class_tid: 1, wh_plus, table: profile_tcam.ipv4 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 28
	},
	/* class_tid: 1, wh_plus, table: profile_tcam.ipv6 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 28
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_tcam_cache.rd */
	{
	.description = "l2_cntxt_id",
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 42
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 2, wh_plus, table: profile_tcam_cache.rd */
	{
	.description = "em_profile_id",
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 42
	},
	{
	.description = "flow_sig_id",
	.regfile_idx = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
	.ident_bit_size = 16,
	.ident_bit_pos = 58
	},
	{
	.description = "profile_tcam_index",
	.regfile_idx = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 32
	},
	/* class_tid: 2, wh_plus, table: profile_tcam.ipv4 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 28
	},
	/* class_tid: 2, wh_plus, table: profile_tcam.ipv6 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 28
	},
	/* class_tid: 3, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 4, wh_plus, table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam.egr */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	}
};
