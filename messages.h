#define REQUEST_NORMAL_CODE             0xFF

#define REQUEST_NORMAL_LENGTH           25

#define REQUEST_NORMAL_TYPE             0
#define REQUEST_NORMAL_MARCH            1
#define REQUEST_NORMAL_LAG              3
#define REQUEST_NORMAL_DEPTH            5
#define REQUEST_NORMAL_ROLL             7
#define REQUEST_NORMAL_PITCH            9
#define REQUEST_NORMAL_YAW              11

#define REQUEST_NORMAL_LIGHT            13
#define REQUEST_NORMAL_GRAB             14
#define REQUEST_NORMAL_TILT             15
#define REQUEST_NORMAL_ROTATE           16
#define REQUEST_NORMAL_BT               17
#define REQUEST_NORMAL_BOTTOM_LIGHT     18

#define REQUEST_NORMAL_STABILIZE_DEPTH  19
#define REQUEST_NORMAL_STABILIZE_ROLL   20
#define REQUEST_NORMAL_STABILIZE_PITCH  21
#define REQUEST_NORMAL_STABILIZE_YAW    22
#define REQUEST_NORMAL_RESET_IMU        23

#define REQUEST_NORMAL_CHECKSUM         24



// Важно оставить в рабочем состоянии!
#define REQUEST_DIRECT_CODE             0xAA

#define REQUEST_DIRECT_LENGTH           11

#define REQUEST_DIRECT_TYPE             0
#define REQUEST_DIRECT_1                1
#define REQUEST_DIRECT_2                2
#define REQUEST_DIRECT_3                3
#define REQUEST_DIRECT_4                4
#define REQUEST_DIRECT_5                5
#define REQUEST_DIRECT_6                6
#define REQUEST_DIRECT_7                7
#define REQUEST_DIRECT_8                8
#define REQUEST_DIRECT_CHECKSUM         9

// В разработке
#define REQUEST_CONFIG_CODE             0x55

#define REQUEST_CONFIG_LENGTH           151

#define REQUEST_CONFIG_TYPE             0

#define REQUEST_CONFIG_CONST_TIME_DEPTH 1
#define REQUEST_CONFIG_CONST_TIME_ROLL  2
#define REQUEST_CONFIG_CONST_TIME_PITCH 3
#define REQUEST_CONFIG_CONST_TIME_YAW   4

#define REQUEST_CONFIG_K1_DEPTH         5
#define REQUEST_CONFIG_K2_DEPTH         9
#define REQUEST_CONFIG_START_DEPTH      13
#define REQUEST_CONFIG_GAIN_DEPTH       17

#define REQUEST_CONFIG_K1_ROLL          21
#define REQUEST_CONFIG_K2_ROLL          25
#define REQUEST_CONFIG_START_ROLL       29
#define REQUEST_CONFIG_GAIN_ROLL        33

#define REQUEST_CONFIG_K1_PITCH         37
#define REQUEST_CONFIG_K2_PITCH         41
#define REQUEST_CONFIG_START_PITCH      45
#define REQUEST_CONFIG_GAIN_PITCH       49

#define REQUEST_CONFIG_K1_YAW           53
#define REQUEST_CONFIG_K2_YAW           57
#define REQUEST_CONFIG_START_YAW        61
#define REQUEST_CONFIG_GAIN_YAW         65

#define REQUEST_CONFIG_POSITION_HLB     69
#define REQUEST_CONFIG_POSITION_HLF     70
#define REQUEST_CONFIG_POSITION_HRB     71
#define REQUEST_CONFIG_POSITION_HRF     72
#define REQUEST_CONFIG_POSITION_VB      73
#define REQUEST_CONFIG_POSITION_VF      74
#define REQUEST_CONFIG_POSITION_VL      75
#define REQUEST_CONFIG_POSITION_VR      76

#define REQUEST_CONFIG_INVERSE_HLB      77
#define REQUEST_CONFIG_INVERSE_HLF      78
#define REQUEST_CONFIG_INVERSE_HRB      79
#define REQUEST_CONFIG_INVERSE_HRF      80
#define REQUEST_CONFIG_INVERSE_VB       81
#define REQUEST_CONFIG_INVERSE_VF       82
#define REQUEST_CONFIG_INVERSE_VL       83
#define REQUEST_CONFIG_INVERSE_VR       84

#define REQUEST_CONFIG_K_FORWARD_HLB    85
#define REQUEST_CONFIG_K_FORWARD_HLF    89
#define REQUEST_CONFIG_K_FORWARD_HRB    93
#define REQUEST_CONFIG_K_FORWARD_HRF    97
#define REQUEST_CONFIG_K_FORWARD_VB     101
#define REQUEST_CONFIG_K_FORWARD_VF     105
#define REQUEST_CONFIG_K_FORWARD_VL     109
#define REQUEST_CONFIG_K_FORWARD_VR     113

#define REQUEST_CONFIG_K_BACKWARD_HLB   117
#define REQUEST_CONFIG_K_BACKWARD_HLF   121
#define REQUEST_CONFIG_K_BACKWARD_HRB   125
#define REQUEST_CONFIG_K_BACKWARD_HRF   129
#define REQUEST_CONFIG_K_BACKWARD_VB    133
#define REQUEST_CONFIG_K_BACKWARD_VF    137
#define REQUEST_CONFIG_K_BACKWARD_VL    141
#define REQUEST_CONFIG_K_BACKWARD_VR    145

#define REQUEST_CONFIG_CHECKSUM         149




#define RESPONSE_LENGTH                 20

#define RESPONSE_ROLL                   0
#define RESPONSE_PITCH                  2
#define RESPONSE_YAW                    4

#define RESPONSE_ROLL_SPEED             6
#define RESPONSE_PITCH_SPEED            8
#define RESPONSE_YAW_SPEED              10

#define RESPONSE_PRESSURE               12

#define RESPONSE_BT                      14

#define RESPONSE_MOTOR_ERRORS           21

#define RESPONSE_CHECKSUM               23
