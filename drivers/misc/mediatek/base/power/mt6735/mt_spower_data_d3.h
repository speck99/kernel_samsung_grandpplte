/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef MT_SPOWER_CPU_H
#define MT_SPOWER_CPU_H



#define VSIZE 10
#define TSIZE 20
#define MAX_TABLE_SIZE 3

#define CPU_TABLE_0                                                   \
	/* "(WAT 8.62%) Leakage Power"	 */                             \
					{800,	850,	900,	950,	1000,	1050,	1100,	1150,	1200,	1250, \
				25, 29, 37, 47, 59, 74, 93, 116, 145, 180, 224, \
				30, 34, 43, 54, 68, 86, 107, 134, 167, 208, 257, \
				35, 39, 50, 63, 79, 99, 124, 155, 192, 238, 294, \
				40, 46, 58, 73, 92, 115, 143, 178, 220, 273, 337, \
				45, 53, 67, 84, 106, 132, 164, 204, 252, 312, 384, \
				50, 62, 78, 97, 122, 152, 188, 233, 288, 355, 437, \
				55, 71, 89, 112, 140, 174, 215, 266, 328, 404, 497, \
				60, 82, 103, 129, 160, 199, 246, 303, 374, 459, 563, \
				65, 94, 118, 148, 184, 227, 280, 344, 424, 522, 639, \
				70, 108, 136, 169, 209, 258, 319, 392, 481, 591, 722, \
				75, 124, 155, 193, 239, 294, 362, 445, 545, 666, 813, \
				80, 143, 177, 220, 272, 334, 411, 505, 617, 753, 917, \
				85, 163, 202, 250, 309, 380, 466, 570, 696, 846, 1028, \
				90, 185, 230, 284, 350, 430, 526, 642, 782, 949, 1149, \
				95, 211, 261, 322, 396, 485, 592, 721, 876, 1061, 1283, \
				100, 239, 296, 364, 447, 547, 666, 808, 980, 1184, 1430, \
				105, 271, 334, 410, 502, 613, 745, 904, 1094, 1320, 1590, \
				110, 306, 376, 461, 563, 684, 831, 1005, 1215, 1464, 1760, \
				115, 344, 423, 517, 629, 764, 925, 1118, 1348, 1621, 1946, \
				120, 386, 473, 577, 702, 851, 1029, 1241, 1494, 1793, 2148},

#define CPU_TABLE_1                                                   \
	/* "(WAT 1.72%) Leakage Power"  */                              \
					{800,	850,	900,	950,	1000,	1050,	1100,	1150,	1200,	1250, \
				25, 13, 16, 20, 24, 30, 37, 46, 57, 70, 85, \
				30, 15, 18, 23, 28, 35, 43, 53, 65, 80, 98, \
				35, 17, 21, 26, 33, 40, 49, 61, 74, 91, 111, \
				40, 20, 24, 30, 37, 46, 57, 70, 85, 104, 127, \
				45, 23, 28, 35, 43, 53, 65, 80, 98, 119, 145, \
				50, 26, 33, 40, 50, 61, 75, 92, 111, 135, 165, \
				55, 30, 38, 46, 57, 70, 86, 104, 127, 154, 188, \
				60, 35, 43, 53, 66, 80, 98, 119, 145, 176, 213, \
				65, 40, 50, 61, 75, 92, 112, 136, 165, 200, 242, \
				70, 47, 57, 70, 86, 105, 128, 155, 188, 228, 276, \
				75, 54, 66, 81, 99, 120, 146, 177, 214, 259, 314, \
				80, 62, 75, 92, 113, 137, 167, 202, 245, 295, 356, \
				85, 71, 87, 106, 129, 157, 190, 230, 278, 335, 403, \
				90, 81, 99, 121, 148, 179, 217, 261, 315, 378, 454, \
				95, 93, 113, 139, 168, 204, 246, 297, 356, 427, 511, \
				100, 106, 130, 158, 192, 232, 279, 336, 403, 482, 576, \
				105, 122, 148, 180, 218, 263, 317, 380, 455, 543, 648, \
				110, 139, 169, 206, 248, 298, 358, 428, 511, 610, 729, \
				115, 158, 192, 233, 280, 336, 402, 480, 573, 687, 817, \
				120, 180, 218, 263, 316, 380, 455, 544, 648, 772, 916},

#define CPU_TABLE_2							\
	/*"(WAT -11.35%) Leakage Power" */                               \
					{800,	850,	900,	950,	1000,	1050,	1100,	1150,	1200,	1250, \
				25, 6, 8, 10, 13, 16, 21, 26, 32, 39, 47, \
				30, 7, 9, 12, 15, 19, 24, 29, 36, 44, 53, \
				35, 8, 10, 13, 17, 22, 27, 33, 41, 50, 60, \
				40, 9, 12, 15, 20, 25, 31, 38, 46, 56, 68, \
				45, 11, 14, 18, 22, 28, 35, 43, 52, 64, 76, \
				50, 12, 16, 20, 26, 32, 40, 49, 59, 72, 86, \
				55, 14, 18, 23, 29, 37, 45, 56, 68, 82, 98, \
				60, 17, 21, 27, 34, 42, 52, 63, 77, 92, 110, \
				65, 19, 24, 31, 39, 48, 59, 72, 87, 105, 125, \
				70, 22, 28, 36, 44, 55, 67, 82, 99, 119, 141, \
				75, 26, 33, 41, 51, 63, 77, 94, 113, 135, 161, \
				80, 30, 38, 47, 59, 72, 88, 107, 129, 154, 182, \
				85, 34, 43, 54, 67, 83, 101, 122, 146, 174, 206, \
				90, 40, 50, 62, 77, 95, 115, 139, 166, 198, 233, \
				95, 46, 58, 72, 89, 109, 132, 159, 190, 224, 264, \
				100, 53, 67, 83, 102, 125, 151, 182, 216, 256, 300, \
				105, 61, 77, 95, 117, 143, 173, 208, 247, 291, 341, \
				110, 71, 89, 110, 135, 164, 198, 237, 282, 331, 387, \
				115, 83, 103, 127, 156, 189, 228, 272, 322, 377, 439, \
				120, 96, 120, 147, 180, 218, 262, 311, 367, 428, 497},

#define LTE_TABLE_0							\
	/* "(WAT 11.57%) Leakage Power"	 */                             \
					{800,	850,	900,	950,	1000,	1050,	1100,	1150,	1200,	1250, \
				25, 15, 18, 22, 26, 32, 38, 45, 54, 65, 77, \
				30, 17, 20, 24, 29, 35, 42, 50, 60, 72, 86, \
				35, 19, 23, 27, 33, 39, 47, 56, 67, 80, 95, \
				40, 21, 25, 30, 36, 43, 52, 62, 74, 89, 106, \
				45, 23, 28, 34, 40, 48, 58, 69, 83, 99, 118, \
				50, 26, 31, 38, 45, 54, 64, 77, 92, 110, 131, \
				55, 29, 35, 42, 50, 60, 72, 86, 103, 122, 146, \
				60, 32, 39, 47, 56, 67, 80, 96, 115, 137, 163, \
				65, 36, 44, 52, 63, 75, 90, 107, 128, 153, 182, \
				70, 41, 49, 59, 70, 84, 100, 120, 143, 171, 204, \
				75, 46, 55, 66, 79, 94, 113, 134, 160, 191, 228, \
				80, 51, 62, 74, 88, 106, 126, 151, 180, 214, 255, \
				85, 58, 69, 83, 99, 119, 142, 169, 202, 241, 287, \
				90, 65, 78, 93, 112, 134, 160, 191, 227, 271, 323, \
				95, 73, 88, 105, 126, 151, 180, 215, 256, 305, 364, \
				100, 82, 99, 119, 142, 170, 203, 242, 289, 345, 411, \
				105, 93, 112, 134, 161, 192, 230, 274, 327, 389, 464, \
				110, 105, 126, 152, 182, 217, 259, 309, 369, 439, 524, \
				115, 119, 143, 172, 205, 246, 293, 350, 418, 497, 592, \
				120, 135, 162, 194, 232, 278, 332, 396, 472, 563, 670},


#define LTE_TABLE_1							\
	/* "(WAT 0.78%) Leakage Power" */                               \
					{800,	850,	900,	950,	1000,	1050,	1100,	1150,	1200,	1250, \
				25, 11, 13, 16, 19, 22, 26, 30, 35, 42, 49, \
				30, 12, 14, 17, 20, 23, 27, 32, 38, 45, 53, \
				35, 13, 15, 18, 21, 25, 29, 34, 41, 48, 56, \
				40, 14, 16, 19, 23, 27, 31, 37, 44, 52, 61, \
				45, 15, 18, 21, 25, 29, 34, 40, 47, 56, 66, \
				50, 16, 19, 23, 27, 31, 37, 43, 51, 60, 71, \
				55, 18, 21, 24, 29, 34, 40, 47, 56, 66, 78, \
				60, 19, 23, 27, 31, 37, 44, 52, 61, 72, 85, \
				65, 21, 25, 29, 34, 41, 48, 57, 67, 79, 93, \
				70, 23, 27, 32, 38, 45, 53, 62, 74, 87, 103, \
				75, 25, 30, 35, 42, 49, 58, 69, 81, 96, 114, \
				80, 28, 33, 39, 46, 55, 65, 76, 90, 107, 126, \
				85, 31, 37, 44, 51, 61, 72, 85, 100, 119, 141, \
				90, 35, 41, 49, 57, 68, 80, 95, 112, 133, 158, \
				95, 39, 46, 54, 64, 76, 90, 107, 126, 150, 177, \
				100, 44, 52, 61, 72, 86, 101, 120, 142, 169, 200, \
				105, 49, 58, 69, 82, 97, 114, 135, 160, 190, 226, \
				110, 56, 66, 78, 93, 110, 129, 153, 181, 216, 257, \
				115, 63, 75, 89, 105, 124, 147, 174, 207, 246, 293, \
				120, 72, 86, 101, 120, 142, 168, 200, 238, 282, 335},


#define LTE_TABLE_2							\
	/* "(WAT -8.16%) Leakage Power"	 */                             \
					{800,	850,	900,	950,	1000,	1050,	1100,	1150,	1200,	1250, \
				25, 10, 12, 14, 16, 19, 23, 27, 31, 37, 44, \
				30, 11, 13, 15, 17, 20, 23, 28, 33, 39, 46, \
				35, 11, 13, 15, 18, 21, 24, 29, 34, 40, 48, \
				40, 12, 14, 16, 18, 22, 25, 30, 35, 42, 50, \
				45, 12, 14, 17, 19, 23, 27, 31, 37, 44, 52, \
				50, 13, 15, 17, 20, 24, 28, 33, 39, 46, 55, \
				55, 13, 16, 18, 22, 25, 30, 35, 41, 49, 59, \
				60, 14, 17, 19, 23, 27, 32, 37, 44, 52, 62, \
				65, 15, 18, 21, 24, 29, 34, 40, 47, 56, 67, \
				70, 16, 19, 22, 26, 31, 36, 43, 51, 60, 72, \
				75, 17, 20, 24, 28, 33, 39, 46, 55, 65, 77, \
				80, 19, 22, 26, 30, 36, 42, 50, 59, 70, 84, \
				85, 20, 24, 28, 33, 39, 46, 54, 64, 77, 92, \
				90, 22, 26, 31, 36, 43, 50, 59, 70, 84, 100, \
				95, 24, 29, 34, 40, 47, 55, 65, 77, 92, 110, \
				100, 27, 32, 37, 44, 51, 61, 72, 85, 102, 122, \
				105, 30, 35, 41, 48, 57, 67, 80, 95, 113, 135, \
				110, 33, 39, 46, 54, 63, 75, 89, 106, 126, 151, \
				115, 37, 43, 51, 60, 71, 84, 99, 118, 141, 169, \
				120, 41, 49, 57, 67, 80, 94, 112, 133, 159, 190},

#define VCORE_TABLE_0							\
	/* "(WAT 11.57%) Leakage Power"	 */                             \
					{800,	850,	900,	950,	1000,	1050,	1100,	1150,	1200,	1250, \
				25, 19, 23, 28, 34, 42, 51, 62, 75, 91, 111, \
				30, 21, 26, 32, 39, 48, 58, 70, 85, 103, 125, \
				35, 24, 30, 37, 45, 54, 66, 80, 97, 117, 141, \
				40, 28, 34, 42, 51, 62, 75, 91, 110, 133, 160, \
				45, 32, 39, 48, 58, 71, 85, 103, 125, 151, 182, \
				50, 37, 45, 55, 66, 81, 97, 118, 142, 171, 206, \
				55, 42, 51, 63, 76, 92, 111, 134, 161, 194, 233, \
				60, 49, 59, 72, 87, 105, 126, 152, 183, 220, 264, \
				65, 56, 68, 82, 99, 120, 144, 173, 208, 250, 299, \
				70, 64, 78, 94, 113, 137, 164, 198, 237, 284, 340, \
				75, 74, 89, 108, 130, 156, 188, 225, 270, 323, 386, \
				80, 85, 103, 124, 149, 180, 215, 258, 308, 368, 440, \
				85, 98, 118, 142, 171, 206, 247, 295, 352, 420, 500, \
				90, 113, 136, 164, 197, 236, 282, 336, 401, 477, 568, \
				95, 130, 156, 188, 225, 269, 322, 383, 457, 544, 645, \
				100, 149, 180, 215, 258, 308, 368, 438, 522, 619, 735, \
				105, 172, 207, 248, 297, 354, 422, 502, 596, 707, 839, \
				110, 199, 238, 285, 340, 405, 482, 573, 680, 806, 954, \
				115, 230, 275, 329, 392, 466, 554, 657, 778, 921, 1087, \
				120, 265, 317, 378, 450, 535, 635, 752, 890, 1052, 1241},

#define VCORE_TABLE_1							\
	/* "(WAT 0.78%) Leakage Power"	 */                             \
					{800,	850,	900,	950,	1000,	1050,	1100,	1150,	1200,	1250, \
				25, 12, 15, 18, 21, 25, 30, 36, 44, 52, 63, \
				30, 13, 16, 19, 23, 28, 33, 40, 48, 57, 69, \
				35, 15, 18, 21, 26, 31, 37, 44, 53, 63, 76, \
				40, 16, 20, 24, 28, 34, 41, 49, 58, 70, 83, \
				45, 18, 22, 26, 32, 38, 45, 54, 65, 77, 92, \
				50, 21, 25, 29, 35, 42, 50, 60, 72, 86, 103, \
				55, 23, 28, 33, 39, 47, 56, 67, 80, 96, 115, \
				60, 26, 31, 37, 44, 53, 63, 75, 90, 107, 128, \
				65, 29, 35, 42, 50, 60, 71, 85, 101, 120, 144, \
				70, 33, 40, 47, 57, 67, 80, 96, 114, 136, 162, \
				75, 38, 45, 54, 64, 77, 91, 109, 129, 154, 184, \
				80, 44, 52, 62, 74, 88, 104, 124, 147, 176, 209, \
				85, 50, 60, 71, 85, 101, 120, 142, 169, 201, 239, \
				90, 58, 69, 82, 97, 116, 138, 163, 194, 231, 274, \
				95, 67, 80, 95, 113, 134, 159, 189, 224, 267, 317, \
				100, 78, 93, 110, 131, 155, 184, 219, 260, 309, 367, \
				105, 91, 108, 128, 152, 180, 214, 254, 301, 358, 424, \
				110, 107, 127, 150, 178, 210, 249, 295, 349, 415, 493, \
				115, 125, 149, 176, 208, 246, 291, 345, 409, 484, 573, \
				120, 148, 176, 208, 246, 291, 344, 407, 481, 568, 672},

#define VCORE_TABLE_2							\
	/* "(WAT 11.57%) Leakage Power" */                              \
					{800,	850,	900,	950,	1000,	1050,	1100,	1150,	1200,	1250, \
				25, 6, 8, 11, 15, 20, 26, 32, 38, 44, 49, \
				30, 6, 8, 12, 16, 21, 27, 34, 40, 46, 52, \
				35, 6, 9, 13, 17, 23, 29, 36, 43, 49, 55, \
				40, 6, 9, 13, 18, 24, 31, 38, 46, 53, 59, \
				45, 7, 10, 14, 20, 26, 33, 41, 49, 57, 64, \
				50, 7, 11, 15, 21, 28, 36, 44, 53, 61, 69, \
				55, 8, 12, 16, 23, 30, 39, 48, 57, 67, 75, \
				60, 8, 13, 18, 25, 33, 42, 52, 63, 73, 82, \
				65, 9, 14, 19, 27, 36, 46, 57, 69, 80, 91, \
				70, 10, 15, 21, 29, 39, 50, 63, 76, 89, 101, \
				75, 11, 16, 23, 32, 43, 56, 70, 85, 99, 112, \
				80, 12, 18, 26, 36, 48, 62, 78, 95, 111, 126, \
				85, 13, 20, 29, 40, 54, 70, 87, 106, 125, 142, \
				90, 15, 22, 32, 45, 60, 78, 98, 120, 141, 161, \
				95, 17, 25, 36, 50, 68, 88, 111, 136, 160, 183, \
				100, 19, 28, 41, 57, 77, 100, 127, 155, 183, 209, \
				105, 21, 32, 46, 65, 88, 115, 145, 177, 209, 240, \
				110, 24, 37, 53, 74, 101, 132, 167, 205, 242, 278, \
				115, 28, 42, 61, 85, 116, 152, 194, 238, 282, 324, \
				120, 32, 49, 70, 99, 135, 177, 225, 277, 329, 378},

typedef struct spower_raw_s {
	int vsize;
	int tsize;
	int table_size;
	int *table[];
} spower_raw_t;


/** table order: ff, tt, ss **/

int cpu_leakage_data[][VSIZE * TSIZE + VSIZE + TSIZE] = {
	CPU_TABLE_0
	CPU_TABLE_1
	CPU_TABLE_2
};

int lte_leakage_data[][VSIZE * TSIZE + VSIZE + TSIZE] = {
	LTE_TABLE_0
	LTE_TABLE_1
	LTE_TABLE_2
};

int vcore_leakage_data[][VSIZE * TSIZE + VSIZE + TSIZE] = {
	VCORE_TABLE_0
	VCORE_TABLE_1
	VCORE_TABLE_2
};

spower_raw_t cpu_spower_raw = {
	.vsize = VSIZE,
	.tsize = TSIZE,
	.table_size = 3,
	.table = {
		  (int *)&cpu_leakage_data[0], (int *)&cpu_leakage_data[1],
		  (int *)&cpu_leakage_data[2]},
};

spower_raw_t lte_spower_raw = {
	.vsize = VSIZE,
	.tsize = TSIZE,
	.table_size = 3,
	.table = {
		  (int *)&lte_leakage_data[0], (int *)&lte_leakage_data[1],
		  (int *)&lte_leakage_data[2]},
};

spower_raw_t vcore_spower_raw = {
	.vsize = VSIZE,
	.tsize = TSIZE,
	.table_size = 3,
	.table = {
		  (int *)&vcore_leakage_data[0], (int *)&vcore_leakage_data[1],
		  (int *)&vcore_leakage_data[2]},
};



typedef struct voltage_row_s {
	int mV[VSIZE];
} vrow_t;

typedef struct temperature_row_s {
	int deg;
	int mA[VSIZE];
} trow_t;


typedef struct sptab_s {
	int vsize;
	int tsize;
	int *data;		/* array[VSIZE + TSIZE + (VSIZE*TSIZE)]; */
	vrow_t *vrow;		/* pointer to voltage row of data */
	trow_t *trow;		/* pointer to temperature row of data */
} sptbl_t;

#define trow(tab, ti)		((tab)->trow[ti])
#define mA(tab, vi, ti)	((tab)->trow[ti].mA[vi])
#define mV(tab, vi)		((tab)->vrow[0].mV[vi])
#define deg(tab, ti)		((tab)->trow[ti].deg)
#define vsize(tab)		((tab)->vsize)
#define tsize(tab)		((tab)->tsize)
#define tab_validate(tab)	(!!(tab) && (tab)->data != NULL)

static inline void spower_tab_construct(sptbl_t(*tab)[], spower_raw_t *raw)
{
	int i;
	sptbl_t *ptab = (sptbl_t *) tab;

	for (i = 0; i < raw->table_size; i++) {
		ptab->vsize = raw->vsize;
		ptab->tsize = raw->tsize;
		ptab->data = raw->table[i];
		ptab->vrow = (vrow_t *) ptab->data;
		ptab->trow = (trow_t *) (ptab->data + ptab->vsize);
		ptab++;
	}
}



#endif
