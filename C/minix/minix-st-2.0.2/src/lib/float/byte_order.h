#define CHAR_UNSIGNED	0
#ifdef __m68000
#define MSB_AT_LOW_ADDRESS	1
#define MSW_AT_LOW_ADDRESS	1
#define FL_MSB_AT_LOW_ADDRESS	1
#define FL_MSW_AT_LOW_ADDRESS	1
#define FL_MSL_AT_LOW_ADDRESS	1
#else
#define MSB_AT_LOW_ADDRESS	0
#define MSW_AT_LOW_ADDRESS	0
#define FL_MSB_AT_LOW_ADDRESS	0
#define FL_MSW_AT_LOW_ADDRESS	0
#define FL_MSL_AT_LOW_ADDRESS	0
#endif /* __68000 */