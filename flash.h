#define INIT_OFFSET 24
#define UNINIT_OFFSET 284
#define ERASESECTOR_OFFSET 308
#define PROGRAMPAGE_OFFSET 338
#define ERASECHIP_OFFSET 288
__attribute__((section(".FLASH_DATAS"))) char flash_datas[] = { 
	64, 186, 112, 71, 64, 186, 112, 71, 64, 186, 112, 71, 192, 186, 112, 71, 
	192, 186, 112, 71, 192, 186, 112, 71, 28, 181, 85, 72, 0, 144, 85, 72, 
	1, 137, 73, 8, 73, 0, 1, 129, 83, 73, 10, 137, 82, 8, 82, 0, 
	10, 129, 2, 136, 4, 35, 82, 7, 0, 42, 2, 218, 2, 136, 154, 67, 
	2, 128, 8, 136, 64, 7, 2, 213, 8, 136, 152, 67, 8, 128, 76, 72, 
	74, 73, 65, 96, 75, 73, 129, 96, 1, 104, 128, 34, 145, 67, 32, 34, 
	17, 67, 1, 96, 0, 240, 168, 248, 71, 72, 1, 104, 201, 3, 69, 213, 
	70, 73, 1, 96, 1, 104, 0, 41, 252, 218, 1, 107, 1, 34, 18, 3, 
	145, 67, 1, 99, 1, 107, 0, 41, 252, 218, 66, 74, 64, 73, 17, 96, 
	3, 33, 9, 3, 1, 97, 1, 105, 0, 41, 252, 218, 1, 105, 1, 34, 
	18, 4, 145, 67, 1, 97, 59, 75, 59, 73, 64, 59, 25, 99, 59, 73, 
	1, 35, 11, 97, 75, 105, 58, 76, 35, 64, 84, 0, 27, 25, 5, 36, 
	100, 2, 35, 67, 75, 97, 139, 105, 54, 76, 35, 64, 3, 36, 164, 4, 
	27, 25, 53, 76, 35, 67, 139, 97, 203, 105, 52, 76, 35, 64, 3, 36, 
	100, 7, 27, 25, 50, 76, 35, 67, 203, 97, 1, 104, 145, 67, 1, 96, 
	1, 107, 145, 67, 1, 99, 1, 105, 145, 67, 1, 97, 45, 73, 106, 70, 
	73, 68, 0, 32, 0, 240, 211, 249, 0, 40, 5, 209, 41, 73, 73, 68, 
	0, 240, 184, 249, 0, 40, 0, 208, 1, 32, 28, 189, 0, 32, 112, 71, 
	36, 73, 16, 181, 73, 68, 0, 32, 0, 240, 187, 249, 0, 40, 0, 208, 
	1, 32, 16, 189, 5, 33, 73, 7, 66, 24, 30, 73, 16, 181, 1, 35, 
	27, 4, 73, 68, 0, 32, 0, 240, 184, 249, 0, 40, 0, 208, 1, 32, 
	16, 189, 5, 33, 19, 70, 73, 7, 66, 24, 22, 73, 16, 181, 73, 68, 
	0, 32, 0, 240, 149, 249, 0, 40, 0, 208, 1, 32, 16, 189, 0, 0, 
	6, 0, 0, 192, 0, 128, 11, 64, 0, 0, 13, 64, 32, 197, 40, 217, 
	0, 192, 11, 64, 255, 255, 0, 0, 0, 128, 13, 64, 24, 32, 1, 0, 
	24, 24, 19, 24, 0, 129, 13, 64, 35, 35, 26, 15, 0, 192, 15, 64, 
	255, 224, 248, 255, 255, 252, 243, 31, 0, 1, 0, 224, 128, 255, 127, 156, 
	1, 0, 128, 3, 12, 0, 0, 0, 1, 32, 212, 73, 64, 5, 192, 105, 
	73, 68, 8, 96, 112, 71, 209, 74, 74, 68, 18, 104, 146, 105, 82, 104, 
	16, 71, 206, 73, 73, 68, 9, 104, 137, 105, 137, 104, 8, 71, 203, 74, 
	74, 68, 18, 104, 146, 105, 210, 104, 16, 71, 200, 73, 73, 68, 9, 104, 
	137, 105, 9, 105, 8, 71, 197, 74, 74, 68, 18, 104, 146, 105, 82, 105, 
	16, 71, 194, 73, 73, 68, 9, 104, 137, 105, 137, 105, 8, 71, 191, 73, 
	73, 68, 9, 104, 137, 105, 201, 105, 8, 71, 188, 73, 73, 68, 9, 104, 
	137, 105, 9, 106, 8, 71, 185, 75, 75, 68, 27, 104, 155, 105, 91, 106, 
	24, 71, 182, 72, 72, 68, 0, 104, 128, 105, 192, 106, 0, 71, 179, 72, 
	72, 68, 0, 104, 128, 105, 192, 107, 0, 71, 176, 73, 73, 68, 9, 104, 
	137, 105, 9, 108, 8, 71, 173, 73, 73, 68, 9, 104, 137, 105, 73, 108, 
	8, 71, 170, 73, 73, 68, 9, 104, 137, 105, 9, 107, 8, 71, 167, 72, 
	72, 68, 0, 104, 128, 105, 64, 107, 0, 71, 164, 73, 73, 68, 9, 104, 
	137, 105, 137, 107, 8, 71, 161, 72, 72, 68, 0, 104, 128, 105, 128, 108, 
	0, 71, 158, 72, 72, 68, 0, 104, 128, 105, 192, 108, 0, 71, 155, 73, 
	73, 68, 9, 104, 137, 105, 137, 106, 8, 71, 152, 74, 74, 68, 18, 104, 
	146, 105, 128, 50, 82, 106, 16, 71, 148, 74, 74, 68, 18, 104, 146, 105, 
	128, 50, 18, 107, 16, 71, 145, 74, 74, 68, 18, 104, 146, 105, 128, 50, 
	146, 106, 16, 71, 141, 72, 72, 68, 0, 104, 128, 105, 128, 48, 192, 106, 
	0, 71, 138, 73, 73, 68, 9, 104, 137, 105, 9, 109, 8, 71, 135, 72, 
	72, 68, 0, 104, 128, 105, 64, 109, 0, 71, 132, 73, 73, 68, 9, 104, 
	137, 105, 137, 109, 8, 71, 129, 72, 72, 68, 0, 104, 128, 105, 192, 109, 
	0, 71, 126, 73, 73, 68, 9, 104, 137, 105, 9, 110, 8, 71, 123, 72, 
	72, 68, 0, 104, 128, 105, 64, 110, 0, 71, 120, 73, 73, 68, 9, 104, 
	137, 105, 137, 110, 8, 71, 117, 72, 72, 68, 0, 104, 128, 105, 192, 110, 
	0, 71, 114, 73, 73, 68, 9, 104, 137, 105, 9, 111, 8, 71, 111, 72, 
	72, 68, 0, 104, 128, 105, 64, 111, 0, 71, 108, 73, 73, 68, 9, 104, 
	137, 105, 137, 111, 8, 71, 105, 72, 72, 68, 0, 104, 128, 105, 192, 111, 
	0, 71, 102, 73, 73, 68, 9, 104, 137, 105, 128, 49, 9, 104, 8, 71, 
	98, 72, 72, 68, 0, 104, 128, 105, 128, 48, 64, 104, 0, 71, 95, 73, 
	73, 68, 9, 104, 137, 105, 128, 49, 137, 104, 8, 71, 91, 74, 74, 68, 
	18, 104, 146, 105, 128, 50, 210, 104, 16, 71, 88, 73, 73, 68, 9, 104, 
	137, 105, 128, 49, 9, 105, 8, 71, 84, 74, 74, 68, 18, 104, 146, 105, 
	128, 50, 82, 105, 16, 71, 81, 73, 73, 68, 9, 104, 137, 105, 128, 49, 
	137, 105, 8, 71, 77, 73, 73, 68, 9, 104, 137, 105, 128, 49, 201, 105, 
	8, 71, 74, 73, 73, 68, 9, 104, 137, 105, 128, 49, 9, 106, 8, 71, 
	70, 74, 74, 68, 18, 104, 146, 105, 128, 50, 82, 107, 16, 71, 67, 72, 
	72, 68, 0, 104, 128, 105, 128, 48, 128, 107, 0, 71, 63, 74, 74, 68, 
	18, 104, 210, 105, 18, 106, 16, 71, 60, 73, 73, 68, 9, 104, 201, 105, 
	9, 104, 8, 71, 57, 74, 74, 68, 18, 104, 210, 105, 82, 104, 16, 71, 
	54, 73, 73, 68, 9, 104, 201, 105, 137, 104, 8, 71, 51, 73, 73, 68, 
	9, 104, 9, 106, 9, 104, 8, 71, 48, 74, 74, 68, 18, 104, 18, 106, 
	82, 104, 16, 71, 45, 73, 73, 68, 9, 104, 9, 106, 137, 104, 8, 71, 
	42, 73, 73, 68, 9, 104, 9, 106, 137, 105, 8, 71, 39, 74, 74, 68, 
	18, 104, 18, 106, 210, 105, 16, 71, 36, 73, 73, 68, 9, 104, 9, 106, 
	201, 106, 8, 71, 33, 74, 74, 68, 18, 104, 18, 105, 82, 104, 16, 71, 
	48, 180, 30, 76, 76, 68, 36, 104, 36, 105, 164, 104, 164, 70, 48, 188, 
	96, 71, 26, 74, 74, 68, 18, 104, 18, 105, 210, 104, 16, 71, 23, 75, 
	75, 68, 27, 104, 27, 105, 91, 106, 24, 71, 48, 180, 19, 76, 76, 68, 
	36, 104, 36, 105, 36, 105, 164, 70, 48, 188, 96, 71, 56, 181, 4, 156, 
	0, 148, 14, 76, 76, 68, 36, 104, 36, 105, 100, 105, 160, 71, 56, 189, 
	48, 180, 10, 76, 76, 68, 36, 104, 36, 105, 36, 106, 164, 70, 48, 188, 
	96, 71, 6, 74, 74, 68, 18, 104, 18, 105, 210, 105, 16, 71, 3, 73, 
	73, 68, 9, 104, 9, 105, 137, 105, 8, 71, 0, 0, 4, 0, 0, 0, 
	112, 71, 16, 181, 87, 72, 1, 137, 73, 8, 73, 0, 1, 129, 86, 73, 
	10, 137, 82, 8, 82, 0, 10, 129, 2, 136, 4, 35, 82, 7, 0, 42, 
	2, 218, 2, 136, 154, 67, 2, 128, 8, 136, 64, 7, 2, 213, 8, 136, 
	152, 67, 8, 128, 78, 72, 77, 73, 65, 96, 78, 73, 129, 96, 1, 104, 
	128, 34, 145, 67, 32, 34, 17, 67, 1, 96, 75, 72, 1, 105, 201, 7, 
	3, 208, 1, 105, 73, 8, 73, 0, 1, 97, 255, 247, 209, 255, 16, 189, 
	248, 181, 70, 77, 104, 105, 70, 74, 70, 73, 128, 1, 34, 213, 168, 105, 
	3, 35, 27, 3, 24, 64, 7, 208, 1, 35, 27, 3, 192, 26, 12, 208, 
	152, 66, 8, 209, 16, 107, 6, 224, 16, 105, 192, 3, 16, 105, 6, 213, 
	0, 4, 128, 15, 1, 208, 0, 32, 8, 224, 8, 70, 6, 224, 128, 7, 
	1, 213, 22, 32, 0, 224, 20, 32, 54, 73, 72, 67, 105, 105, 137, 0, 
	73, 15, 61, 224, 16, 104, 192, 3, 16, 104, 6, 213, 0, 4, 128, 15, 
	1, 208, 0, 39, 6, 224, 15, 70, 4, 224, 64, 6, 45, 75, 64, 14, 
	88, 67, 71, 8, 16, 107, 192, 3, 16, 107, 6, 213, 0, 4, 128, 15, 
	1, 208, 0, 36, 8, 224, 12, 70, 6, 224, 192, 7, 1, 208, 22, 36, 
	0, 224, 20, 36, 35, 72, 68, 67, 33, 72, 64, 48, 6, 106, 0, 105, 
	0, 240, 118, 249, 50, 70, 0, 35, 0, 240, 68, 248, 169, 105, 0, 25, 
	29, 74, 17, 64, 17, 208, 1, 34, 146, 4, 28, 75, 137, 26, 22, 208, 
	137, 26, 23, 208, 145, 66, 7, 209, 40, 105, 65, 7, 73, 15, 56, 70, 
	73, 28, 0, 240, 176, 248, 0, 224, 0, 32, 105, 105, 201, 4, 73, 15, 
	73, 28, 0, 240, 168, 248, 18, 73, 73, 68, 8, 96, 248, 189, 25, 104, 
	9, 12, 0, 224, 25, 104, 137, 6, 137, 14, 0, 240, 156, 248, 18, 33, 
	72, 67, 234, 231, 0, 128, 11, 64, 0, 0, 13, 64, 32, 197, 40, 217, 
	0, 192, 11, 64, 255, 255, 0, 0, 0, 224, 0, 224, 0, 192, 15, 64, 
	0, 128, 13, 64, 0, 54, 110, 1, 0, 0, 12, 0, 0, 129, 13, 64, 
	8, 0, 0, 0, 254, 181, 5, 70, 16, 70, 12, 70, 24, 67, 115, 208, 
	174, 70, 140, 70, 0, 32, 173, 26, 1, 70, 156, 65, 103, 211, 102, 70, 
	0, 39, 1, 36, 61, 70, 182, 26, 157, 65, 2, 211, 19, 70, 58, 70, 
	33, 36, 101, 70, 118, 70, 47, 4, 54, 12, 62, 67, 45, 12, 182, 26, 
	157, 65, 4, 211, 21, 12, 27, 4, 43, 67, 18, 4, 16, 52, 101, 70, 
	118, 70, 47, 6, 54, 10, 62, 67, 45, 10, 182, 26, 157, 65, 4, 211, 
	21, 14, 27, 2, 43, 67, 18, 2, 8, 52, 101, 70, 118, 70, 47, 7, 
	54, 9, 62, 67, 45, 9, 182, 26, 157, 65, 4, 211, 21, 15, 27, 1, 
	43, 67, 18, 1, 36, 29, 101, 70, 118, 70, 175, 7, 182, 8, 62, 67, 
	173, 8, 182, 26, 157, 65, 4, 211, 149, 15, 155, 0, 43, 67, 146, 0, 
	164, 28, 101, 70, 118, 70, 239, 7, 118, 8, 62, 67, 109, 8, 182, 26, 
	157, 65, 26, 211, 146, 24, 91, 65, 100, 28, 22, 224, 0, 24, 118, 70, 
	101, 70, 73, 65, 183, 26, 157, 65, 1, 145, 0, 144, 9, 211, 96, 70, 
	177, 26, 152, 65, 142, 70, 132, 70, 0, 152, 1, 153, 0, 37, 64, 28, 
	105, 65, 221, 7, 82, 8, 42, 67, 91, 8, 100, 30, 230, 213, 114, 70, 
	99, 70, 3, 176, 240, 189, 255, 231, 0, 32, 1, 70, 192, 70, 192, 70, 
	42, 70, 35, 70, 245, 231, 0, 34, 3, 9, 139, 66, 44, 211, 3, 10, 
	139, 66, 17, 211, 0, 35, 156, 70, 78, 224, 3, 70, 11, 67, 60, 212, 
	0, 34, 67, 8, 139, 66, 49, 211, 3, 9, 139, 66, 28, 211, 3, 10, 
	139, 66, 1, 211, 148, 70, 63, 224, 195, 9, 139, 66, 1, 211, 203, 1, 
	192, 26, 82, 65, 131, 9, 139, 66, 1, 211, 139, 1, 192, 26, 82, 65, 
	67, 9, 139, 66, 1, 211, 75, 1, 192, 26, 82, 65, 3, 9, 139, 66, 
	1, 211, 11, 1, 192, 26, 82, 65, 195, 8, 139, 66, 1, 211, 203, 0, 
	192, 26, 82, 65, 131, 8, 139, 66, 1, 211, 139, 0, 192, 26, 82, 65, 
	67, 8, 139, 66, 1, 211, 75, 0, 192, 26, 82, 65, 65, 26, 0, 210, 
	1, 70, 82, 65, 16, 70, 112, 71, 93, 224, 202, 15, 0, 208, 73, 66, 
	3, 16, 0, 211, 64, 66, 83, 64, 0, 34, 156, 70, 3, 9, 139, 66, 
	45, 211, 3, 10, 139, 66, 18, 211, 252, 34, 137, 1, 18, 186, 3, 10, 
	139, 66, 12, 211, 137, 1, 146, 17, 139, 66, 8, 211, 137, 1, 146, 17, 
	139, 66, 4, 211, 137, 1, 58, 208, 146, 17, 0, 224, 137, 9, 195, 9, 
	139, 66, 1, 211, 203, 1, 192, 26, 82, 65, 131, 9, 139, 66, 1, 211, 
	139, 1, 192, 26, 82, 65, 67, 9, 139, 66, 1, 211, 75, 1, 192, 26, 
	82, 65, 3, 9, 139, 66, 1, 211, 11, 1, 192, 26, 82, 65, 195, 8, 
	139, 66, 1, 211, 203, 0, 192, 26, 82, 65, 131, 8, 139, 66, 1, 211, 
	139, 0, 192, 26, 82, 65, 217, 210, 67, 8, 139, 66, 1, 211, 75, 0, 
	192, 26, 82, 65, 65, 26, 0, 210, 1, 70, 99, 70, 82, 65, 91, 16, 
	16, 70, 1, 211, 64, 66, 0, 43, 0, 213, 73, 66, 112, 71, 99, 70, 
	91, 16, 0, 211, 64, 66, 1, 181, 0, 32, 192, 70, 192, 70, 2, 189, 
	248, 181, 4, 12, 139, 178, 38, 70, 130, 178, 94, 67, 13, 12, 16, 70, 
	55, 12, 88, 67, 54, 4, 128, 25, 0, 33, 121, 65, 22, 70, 110, 67, 
	55, 12, 54, 4, 128, 25, 121, 65, 38, 70, 110, 67, 137, 25, 248, 189, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 120, 31, 1, 1, 77, 73, 77, 88, 82, 84, 49, 48, 54, 120, 32, 56, 109, 66, 
	32, 81, 117, 97, 100, 83, 80, 73, 32, 78, 79, 82, 32, 70, 108, 97, 
	115, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 5, 0, 0, 0, 0, 96, 0, 0, 128, 0, 0, 1, 0, 0, 
	0, 0, 0, 0, 255, 0, 0, 0, 232, 3, 0, 0, 136, 19, 0, 0, 
	0, 0, 1, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	};