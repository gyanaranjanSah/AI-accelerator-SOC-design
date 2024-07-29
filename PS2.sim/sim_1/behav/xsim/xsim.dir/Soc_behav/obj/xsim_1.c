/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_852(char*, char *);
extern void execute_853(char*, char *);
extern void execute_890(char*, char *);
extern void execute_891(char*, char *);
extern void execute_928(char*, char *);
extern void execute_929(char*, char *);
extern void execute_966(char*, char *);
extern void execute_967(char*, char *);
extern void execute_1004(char*, char *);
extern void execute_1005(char*, char *);
extern void execute_1042(char*, char *);
extern void execute_1043(char*, char *);
extern void execute_1080(char*, char *);
extern void execute_1081(char*, char *);
extern void execute_1118(char*, char *);
extern void execute_1119(char*, char *);
extern void execute_1156(char*, char *);
extern void execute_1157(char*, char *);
extern void execute_1194(char*, char *);
extern void execute_1195(char*, char *);
extern void execute_1232(char*, char *);
extern void execute_1233(char*, char *);
extern void execute_1270(char*, char *);
extern void execute_1271(char*, char *);
extern void execute_1308(char*, char *);
extern void execute_1309(char*, char *);
extern void execute_1346(char*, char *);
extern void execute_1347(char*, char *);
extern void execute_1384(char*, char *);
extern void execute_1385(char*, char *);
extern void execute_1422(char*, char *);
extern void execute_1423(char*, char *);
extern void execute_1460(char*, char *);
extern void execute_1461(char*, char *);
extern void execute_1498(char*, char *);
extern void execute_1499(char*, char *);
extern void execute_1536(char*, char *);
extern void execute_1537(char*, char *);
extern void execute_1574(char*, char *);
extern void execute_1575(char*, char *);
extern void execute_1612(char*, char *);
extern void execute_1613(char*, char *);
extern void execute_1650(char*, char *);
extern void execute_1651(char*, char *);
extern void execute_1688(char*, char *);
extern void execute_1689(char*, char *);
extern void execute_1726(char*, char *);
extern void execute_1727(char*, char *);
extern void execute_1764(char*, char *);
extern void execute_1765(char*, char *);
extern void execute_1802(char*, char *);
extern void execute_1803(char*, char *);
extern void execute_1840(char*, char *);
extern void execute_1841(char*, char *);
extern void execute_1878(char*, char *);
extern void execute_1879(char*, char *);
extern void execute_1916(char*, char *);
extern void execute_1917(char*, char *);
extern void execute_1954(char*, char *);
extern void execute_1955(char*, char *);
extern void execute_1992(char*, char *);
extern void execute_1993(char*, char *);
extern void execute_2030(char*, char *);
extern void execute_2031(char*, char *);
extern void execute_2068(char*, char *);
extern void execute_2069(char*, char *);
extern void execute_2106(char*, char *);
extern void execute_2107(char*, char *);
extern void execute_2144(char*, char *);
extern void execute_2145(char*, char *);
extern void execute_2182(char*, char *);
extern void execute_2183(char*, char *);
extern void execute_2220(char*, char *);
extern void execute_2221(char*, char *);
extern void execute_2258(char*, char *);
extern void execute_2259(char*, char *);
extern void execute_2296(char*, char *);
extern void execute_2297(char*, char *);
extern void execute_2334(char*, char *);
extern void execute_2335(char*, char *);
extern void execute_2372(char*, char *);
extern void execute_2373(char*, char *);
extern void execute_2410(char*, char *);
extern void execute_2411(char*, char *);
extern void execute_2448(char*, char *);
extern void execute_2449(char*, char *);
extern void execute_2486(char*, char *);
extern void execute_2487(char*, char *);
extern void execute_2524(char*, char *);
extern void execute_2525(char*, char *);
extern void execute_2562(char*, char *);
extern void execute_2563(char*, char *);
extern void execute_2600(char*, char *);
extern void execute_2601(char*, char *);
extern void execute_2638(char*, char *);
extern void execute_2639(char*, char *);
extern void execute_2676(char*, char *);
extern void execute_2677(char*, char *);
extern void execute_2714(char*, char *);
extern void execute_2715(char*, char *);
extern void execute_2752(char*, char *);
extern void execute_2753(char*, char *);
extern void execute_2790(char*, char *);
extern void execute_2791(char*, char *);
extern void execute_2828(char*, char *);
extern void execute_2829(char*, char *);
extern void execute_2866(char*, char *);
extern void execute_2867(char*, char *);
extern void execute_2904(char*, char *);
extern void execute_2905(char*, char *);
extern void execute_2942(char*, char *);
extern void execute_2943(char*, char *);
extern void execute_2980(char*, char *);
extern void execute_2981(char*, char *);
extern void execute_3018(char*, char *);
extern void execute_3019(char*, char *);
extern void execute_3056(char*, char *);
extern void execute_3057(char*, char *);
extern void execute_3094(char*, char *);
extern void execute_3095(char*, char *);
extern void execute_3132(char*, char *);
extern void execute_3133(char*, char *);
extern void execute_3170(char*, char *);
extern void execute_3171(char*, char *);
extern void execute_3208(char*, char *);
extern void execute_3209(char*, char *);
extern void execute_3246(char*, char *);
extern void execute_3247(char*, char *);
extern void execute_3284(char*, char *);
extern void execute_3285(char*, char *);
extern void execute_3322(char*, char *);
extern void execute_3323(char*, char *);
extern void execute_3360(char*, char *);
extern void execute_3361(char*, char *);
extern void execute_3398(char*, char *);
extern void execute_3399(char*, char *);
extern void execute_3436(char*, char *);
extern void execute_3437(char*, char *);
extern void execute_3474(char*, char *);
extern void execute_3475(char*, char *);
extern void execute_3512(char*, char *);
extern void execute_3513(char*, char *);
extern void execute_3550(char*, char *);
extern void execute_3551(char*, char *);
extern void execute_3588(char*, char *);
extern void execute_3589(char*, char *);
extern void execute_3626(char*, char *);
extern void execute_3627(char*, char *);
extern void execute_3664(char*, char *);
extern void execute_3665(char*, char *);
extern void execute_3702(char*, char *);
extern void execute_3703(char*, char *);
extern void execute_3740(char*, char *);
extern void execute_3741(char*, char *);
extern void execute_3778(char*, char *);
extern void execute_3779(char*, char *);
extern void execute_3816(char*, char *);
extern void execute_3817(char*, char *);
extern void execute_3854(char*, char *);
extern void execute_3855(char*, char *);
extern void execute_3892(char*, char *);
extern void execute_3893(char*, char *);
extern void execute_3894(char*, char *);
extern void execute_3895(char*, char *);
extern void execute_3896(char*, char *);
extern void execute_3897(char*, char *);
extern void execute_3898(char*, char *);
extern void execute_3899(char*, char *);
extern void execute_3900(char*, char *);
extern void execute_3901(char*, char *);
extern void execute_3902(char*, char *);
extern void execute_3903(char*, char *);
extern void execute_3904(char*, char *);
extern void execute_3905(char*, char *);
extern void execute_3906(char*, char *);
extern void execute_3907(char*, char *);
extern void execute_3908(char*, char *);
extern void execute_3909(char*, char *);
extern void execute_3910(char*, char *);
extern void execute_3911(char*, char *);
extern void execute_3912(char*, char *);
extern void execute_3913(char*, char *);
extern void execute_3914(char*, char *);
extern void execute_3915(char*, char *);
extern void execute_3916(char*, char *);
extern void execute_3917(char*, char *);
extern void execute_3918(char*, char *);
extern void execute_3919(char*, char *);
extern void execute_3920(char*, char *);
extern void execute_3921(char*, char *);
extern void execute_3922(char*, char *);
extern void execute_3923(char*, char *);
extern void execute_3924(char*, char *);
extern void execute_3925(char*, char *);
extern void execute_3926(char*, char *);
extern void execute_3927(char*, char *);
extern void execute_3928(char*, char *);
extern void execute_3929(char*, char *);
extern void execute_3930(char*, char *);
extern void execute_3931(char*, char *);
extern void execute_3932(char*, char *);
extern void execute_3933(char*, char *);
extern void execute_3934(char*, char *);
extern void execute_3935(char*, char *);
extern void execute_3936(char*, char *);
extern void execute_3937(char*, char *);
extern void execute_3938(char*, char *);
extern void execute_3939(char*, char *);
extern void execute_3940(char*, char *);
extern void execute_3941(char*, char *);
extern void execute_3942(char*, char *);
extern void execute_3943(char*, char *);
extern void execute_3944(char*, char *);
extern void execute_3945(char*, char *);
extern void execute_3946(char*, char *);
extern void execute_3947(char*, char *);
extern void execute_848(char*, char *);
extern void execute_849(char*, char *);
extern void execute_850(char*, char *);
extern void execute_851(char*, char *);
extern void execute_816(char*, char *);
extern void execute_817(char*, char *);
extern void execute_818(char*, char *);
extern void execute_819(char*, char *);
extern void execute_820(char*, char *);
extern void execute_821(char*, char *);
extern void execute_822(char*, char *);
extern void execute_823(char*, char *);
extern void execute_824(char*, char *);
extern void execute_825(char*, char *);
extern void execute_826(char*, char *);
extern void execute_827(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_829(char*, char *);
extern void execute_830(char*, char *);
extern void execute_831(char*, char *);
extern void execute_832(char*, char *);
extern void execute_833(char*, char *);
extern void execute_834(char*, char *);
extern void execute_835(char*, char *);
extern void execute_845(char*, char *);
extern void execute_846(char*, char *);
extern void execute_847(char*, char *);
extern void execute_836(char*, char *);
extern void execute_837(char*, char *);
extern void execute_838(char*, char *);
extern void execute_839(char*, char *);
extern void execute_840(char*, char *);
extern void execute_841(char*, char *);
extern void execute_842(char*, char *);
extern void execute_843(char*, char *);
extern void execute_844(char*, char *);
extern void execute_7(char*, char *);
extern void execute_813(char*, char *);
extern void execute_814(char*, char *);
extern void execute_815(char*, char *);
extern void execute_3948(char*, char *);
extern void execute_3949(char*, char *);
extern void execute_3950(char*, char *);
extern void execute_3951(char*, char *);
extern void execute_3952(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[262] = {(funcp)execute_852, (funcp)execute_853, (funcp)execute_890, (funcp)execute_891, (funcp)execute_928, (funcp)execute_929, (funcp)execute_966, (funcp)execute_967, (funcp)execute_1004, (funcp)execute_1005, (funcp)execute_1042, (funcp)execute_1043, (funcp)execute_1080, (funcp)execute_1081, (funcp)execute_1118, (funcp)execute_1119, (funcp)execute_1156, (funcp)execute_1157, (funcp)execute_1194, (funcp)execute_1195, (funcp)execute_1232, (funcp)execute_1233, (funcp)execute_1270, (funcp)execute_1271, (funcp)execute_1308, (funcp)execute_1309, (funcp)execute_1346, (funcp)execute_1347, (funcp)execute_1384, (funcp)execute_1385, (funcp)execute_1422, (funcp)execute_1423, (funcp)execute_1460, (funcp)execute_1461, (funcp)execute_1498, (funcp)execute_1499, (funcp)execute_1536, (funcp)execute_1537, (funcp)execute_1574, (funcp)execute_1575, (funcp)execute_1612, (funcp)execute_1613, (funcp)execute_1650, (funcp)execute_1651, (funcp)execute_1688, (funcp)execute_1689, (funcp)execute_1726, (funcp)execute_1727, (funcp)execute_1764, (funcp)execute_1765, (funcp)execute_1802, (funcp)execute_1803, (funcp)execute_1840, (funcp)execute_1841, (funcp)execute_1878, (funcp)execute_1879, (funcp)execute_1916, (funcp)execute_1917, (funcp)execute_1954, (funcp)execute_1955, (funcp)execute_1992, (funcp)execute_1993, (funcp)execute_2030, (funcp)execute_2031, (funcp)execute_2068, (funcp)execute_2069, (funcp)execute_2106, (funcp)execute_2107, (funcp)execute_2144, (funcp)execute_2145, (funcp)execute_2182, (funcp)execute_2183, (funcp)execute_2220, (funcp)execute_2221, (funcp)execute_2258, (funcp)execute_2259, (funcp)execute_2296, (funcp)execute_2297, (funcp)execute_2334, (funcp)execute_2335, (funcp)execute_2372, (funcp)execute_2373, (funcp)execute_2410, (funcp)execute_2411, (funcp)execute_2448, (funcp)execute_2449, (funcp)execute_2486, (funcp)execute_2487, (funcp)execute_2524, (funcp)execute_2525, (funcp)execute_2562, (funcp)execute_2563, (funcp)execute_2600, (funcp)execute_2601, (funcp)execute_2638, (funcp)execute_2639, (funcp)execute_2676, (funcp)execute_2677, (funcp)execute_2714, (funcp)execute_2715, (funcp)execute_2752, (funcp)execute_2753, (funcp)execute_2790, (funcp)execute_2791, (funcp)execute_2828, (funcp)execute_2829, (funcp)execute_2866, (funcp)execute_2867, (funcp)execute_2904, (funcp)execute_2905, (funcp)execute_2942, (funcp)execute_2943, (funcp)execute_2980, (funcp)execute_2981, (funcp)execute_3018, (funcp)execute_3019, (funcp)execute_3056, (funcp)execute_3057, (funcp)execute_3094, (funcp)execute_3095, (funcp)execute_3132, (funcp)execute_3133, (funcp)execute_3170, (funcp)execute_3171, (funcp)execute_3208, (funcp)execute_3209, (funcp)execute_3246, (funcp)execute_3247, (funcp)execute_3284, (funcp)execute_3285, (funcp)execute_3322, (funcp)execute_3323, (funcp)execute_3360, (funcp)execute_3361, (funcp)execute_3398, (funcp)execute_3399, (funcp)execute_3436, (funcp)execute_3437, (funcp)execute_3474, (funcp)execute_3475, (funcp)execute_3512, (funcp)execute_3513, (funcp)execute_3550, (funcp)execute_3551, (funcp)execute_3588, (funcp)execute_3589, (funcp)execute_3626, (funcp)execute_3627, (funcp)execute_3664, (funcp)execute_3665, (funcp)execute_3702, (funcp)execute_3703, (funcp)execute_3740, (funcp)execute_3741, (funcp)execute_3778, (funcp)execute_3779, (funcp)execute_3816, (funcp)execute_3817, (funcp)execute_3854, (funcp)execute_3855, (funcp)execute_3892, (funcp)execute_3893, (funcp)execute_3894, (funcp)execute_3895, (funcp)execute_3896, (funcp)execute_3897, (funcp)execute_3898, (funcp)execute_3899, (funcp)execute_3900, (funcp)execute_3901, (funcp)execute_3902, (funcp)execute_3903, (funcp)execute_3904, (funcp)execute_3905, (funcp)execute_3906, (funcp)execute_3907, (funcp)execute_3908, (funcp)execute_3909, (funcp)execute_3910, (funcp)execute_3911, (funcp)execute_3912, (funcp)execute_3913, (funcp)execute_3914, (funcp)execute_3915, (funcp)execute_3916, (funcp)execute_3917, (funcp)execute_3918, (funcp)execute_3919, (funcp)execute_3920, (funcp)execute_3921, (funcp)execute_3922, (funcp)execute_3923, (funcp)execute_3924, (funcp)execute_3925, (funcp)execute_3926, (funcp)execute_3927, (funcp)execute_3928, (funcp)execute_3929, (funcp)execute_3930, (funcp)execute_3931, (funcp)execute_3932, (funcp)execute_3933, (funcp)execute_3934, (funcp)execute_3935, (funcp)execute_3936, (funcp)execute_3937, (funcp)execute_3938, (funcp)execute_3939, (funcp)execute_3940, (funcp)execute_3941, (funcp)execute_3942, (funcp)execute_3943, (funcp)execute_3944, (funcp)execute_3945, (funcp)execute_3946, (funcp)execute_3947, (funcp)execute_848, (funcp)execute_849, (funcp)execute_850, (funcp)execute_851, (funcp)execute_816, (funcp)execute_817, (funcp)execute_818, (funcp)execute_819, (funcp)execute_820, (funcp)execute_821, (funcp)execute_822, (funcp)execute_823, (funcp)execute_824, (funcp)execute_825, (funcp)execute_826, (funcp)execute_827, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_829, (funcp)execute_830, (funcp)execute_831, (funcp)execute_832, (funcp)execute_833, (funcp)execute_834, (funcp)execute_835, (funcp)execute_845, (funcp)execute_846, (funcp)execute_847, (funcp)execute_836, (funcp)execute_837, (funcp)execute_838, (funcp)execute_839, (funcp)execute_840, (funcp)execute_841, (funcp)execute_842, (funcp)execute_843, (funcp)execute_844, (funcp)execute_7, (funcp)execute_813, (funcp)execute_814, (funcp)execute_815, (funcp)execute_3948, (funcp)execute_3949, (funcp)execute_3950, (funcp)execute_3951, (funcp)execute_3952, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 262;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/Soc_behav/xsim.reloc",  (void **)funcTab, 262);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/Soc_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/Soc_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/Soc_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/Soc_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/Soc_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
