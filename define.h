#ifndef __DEFINE__H
#define __DEFINE__H

#define MAXCOMMAND 30

//
const int INSPERTRIGGER = 40;
const int INSPerConParam = 100;
const int ConParmPerState = 40;
const int NUMTRIGGER = 20;
const int PARAMS = 10;
const int T_TRIGGERALL = 192;
// û�в���
const int NOPARAM = -333;

//#define MAX_PATH 255

enum {
	MAINMENU=0,
	STAGE=1,
	ENGINE=2,
	P1=3,
	P2=4,
	P3=5,
	P4=6
};



//Define  Controller buttoms
enum KEY_NAMES
{
	KEY_UP,
	KEY_DOWN,
	KEY_LEFT,
	KEY_RIGHT,
	KEY_BUTTON_A,
	KEY_BUTTON_B,
	KEY_BUTTON_C,
	KEY_BUTTON_X,
	KEY_BUTTON_Y,
	KEY_BUTTON_Z,
	KEY_BUTTON_START,
	KEY_BUTTON_PAUSE,
	KEY_COUNT
};


// ������ʶ��
enum OPCODES
{
	OP_PUSH=0,
	OP_POP,
	OP_ADD,
	OP_SUB,
	OP_MUL,
	OP_DIV,
	OP_EQUAL,
	OP_NOTEQUAL,
	OP_LESS,
	OP_GREATER,
	OP_LESSEQUAL,
	OP_GRAETEREQUAL,
	OP_INTERVALOP1,
	OP_INTERVALOP2,
	OP_INTERVALOP3,
	OP_INTERVALOP4,
	OP_INTERVALOP5,
	OP_INTERVALOP6,
	OP_INTERVALOP7,
	OP_INTERVALOP8,
	OP_LOGNOT,
	OP_LOGAND,
	OP_LOGOR,
	OP_LOGXOR,
	OP_NOT,
	OP_AND,
	OP_OR,
	OP_XOR,
	OP_SQUARE,
	OP_NEG,


	OP_Abs,
	OP_Acos,
	OP_Alive,
	OP_Anim,
	OP_AnimElem,
	OP_AnimElemNo,
	OP_AnimElemTime,
	OP_AnimExist,
	OP_AnimTime,
	OP_Asin,
	OP_Atan,
	OP_AuthorName,
	OP_BackEdgeBodyDist,
	OP_BackEdgeDist,
	OP_CanRecover,
	OP_Ceil,
	OP_Command,
	OP_Const,
	OP_Cos,
	OP_Ctrl,
	OP_DrawGame,
	OP_E,
	OP_Exp,
	OP_Facing,
	OP_Floor,
	OP_FrontEdgeBodyDist,
	OP_FrontEdgeDist,
	OP_FVar,
	OP_GameTime,
	OP_GetHitVar,
	OP_HitCount,
	OP_HitDefAttr,
	OP_HitFall,
	OP_HitOver,
	OP_HitPauseTime,
	OP_HitShakeOver,
	OP_HitVel,
	OP_ID,
	OP_IfElse,
	OP_InGuardDist,
	OP_IsHelper,
	OP_IsHomeTeam,
	OP_Life,
	OP_LifeMax,
	OP_Log,
	OP_Ln,
	OP_Lose,
	OP_MatchNo,
	OP_MatchOver,
	OP_MoveContact,
	OP_MoveGuarded,
	OP_MoveHit,
	OP_MoveType,
	OP_MoveReversed,
	OP_Name,
	OP_NumEnemy,
	OP_NumExplod,
	OP_NumHelper,
	OP_NumPartner,
	OP_NumProj,
	OP_NumProjID,
	OP_NumTarget,
	OP_P1Name,
	OP_P2BodyDist,
	OP_P2Dist,
	OP_P2Life,
	OP_P2MoveType,
	OP_P2Name,
	OP_P2StateNo,
	OP_P2StateType,
	OP_P3Name,
	OP_P4Name,
	OP_PalNo,
	OP_ParentDist,
	OP_Pi,
	OP_Pos,
	OP_Power,
	OP_PowerMax,
	OP_PlayerIDExist,
	OP_PrevStateNo,
	OP_ProjCancelTime,
	OP_ProjContact,
	OP_ProjContactTime,
	OP_ProjGuarded,
	OP_ProjGuardedTime,
	OP_ProjHit,
	OP_ProjHitTime,
	OP_Random,
	OP_RootDist,
	OP_RoundNo,
	OP_RoundsExisted,
	OP_RoundState,
	OP_ScreenPos,
	OP_SelfAnimExist,
	OP_Sin,
	OP_StateNo,
	OP_StateType,
	OP_SysFVar,
	OP_SysVar,
	OP_Tan,
	OP_TeamMode,
	OP_TeamSide,
	OP_TicksPerSecond,
	OP_Time,
	OP_TimeMod,
	OP_UniqHitCount,
	OP_Var,
	OP_Vel,
	OP_Win,
	OP_MOD,
	OP_NOP,
	OP_STOP,

};


//All triggers       
static char * strTriggerType[] = {
	"Abs",
	"Acos",
	"Alive",
	"Anim",
	"AnimElem",
	"AnimElemNo",
	"AnimElemTime",
	"AnimExist",
	"AnimTime",
	"Asin",
	"Atan",
	"AuthorName",
	"BackEdgeBodyDist",
	"BackEdgeDist",
	"CanRecover",
	"Ceil",
	"Command",
	"Const",
	"Cos",
	"Ctrl",
	"DrawGame",
	"E",
	"Exp",
	"Facing",
	"Floor",
	"FrontEdgeBodyDist",
	"FrontEdgeDist",
	"FVar",
	"GameTime",
	"GetHitVar",
	"HitCount",
	"HitDefAttr",
	"HitFall",
	"HitOver",
	"HitPauseTime",
	"HitShakeOver",
	"HitVel",
	"ID",
	"IfElse",
	"InGuardDist",
	"IsHelper",
	"IsHomeTeam",
	"Life",
	"LifeMax",
	"Log",
	"Ln",
	"Lose",
	"MatchNo",
	"MatchOver",
	"MoveContact",
	"MoveGuarded",
	"MoveHit",
	"MoveType",
	"MoveReversed",
	"Name",
	"NumEnemy",
	"NumExplod",
	"NumHelper",
	"NumPartner",
	"NumProj",
	"NumProjID",
	"NumTarget",
	"P1Name",
	"P2BodyDist",
	"P2Dist",
	"P2Life",
	"P2MoveType",
	"P2Name",
	"P2StateNo",
	"P2StateType",
	"P3Name",
	"P4Name",
	"PalNo",
	"ParentDist",
	"Pi",
	"Pos",
	"Power",
	"PowerMax",
	"PlayerIDExist",
	"PrevStateNo",
	"ProjCancelTime",
	"ProjContact",
	"ProjContactTime",
	"ProjGuarded",
	"ProjGuardedTime",
	"ProjHit",
	"ProjHitTime",
	"Random",
	"RootDist",
	"RoundNo",
	"RoundsExisted",
	"RoundState",
	"ScreenPos",
	"SelfAnimExist",
	"Sin",
	"StateNo",
	"StateType",
	"SysFVar",
	"SysVar",
	"Tan",
	"TeamMode",
	"TeamSide",
	"TicksPerSecond",
	"Time",
	"TimeMod",
	"UniqHitCount",
	"Var",
	"Vel",
	"Win",
	0,
};

// ��Ϸ�Զ������
enum PARAMVALUES
{
	PA_VALUE=128,
	PA_XVALUE,
	PA_YVALUE,
	PA_VAR,
	PA_FVAR,
	PA_SYSVAR,
	PA_SYSFVAR,


};

//This are all documented Controllers
//TODO: find the undocumented controllers
static char* strControllerTypes[] = {
	"AfterImage",
	"AfterImageTime",
	"AllPalFX",
	"AngleAdd",
	"AngleDraw",
	"AngleMul",
	"AngleSet",
	"AppendToClipboard",
	"AssertSpecial",
	"AttackDist",
	"AttackMulSet",
	"BGPalFX",
	"BindToParent",
	"BindToRoot",
	"BindToTarget",
	"ChangeAnim",
	"ChangeAnim2",
	"ChangeState",
	"ClearClipboard",
	"CtrlSet",
	"DefenceMulSet",
	"DestroySelf",
	"DisplayToClipboard",
	"EnvColor",
	"EnvShake",
	"Explod",
	"ExplodBindTime",
	"ForceFeedback",
	"FallEnvShake",
	"GameMakeAnim",
	"Gravity",
	"Helper",
	"HitAdd",
	"HitBy",
	"HitDef",
	"HitFallDamage",
	"HitFallSet",
	"HitFallVel",
	"HitOverride",
	"HitVelSet",
	"LifeAdd",
	"LifeSet",
	"MakeDust",
	"ModifyExplod",
	"MoveHitReset",
	"NotHitBy",
	"Null",
	"Offset",
	"PalFX",
	"ParentVarAdd",
	"ParentVarSet",
	"Pause",
	"PlayerPush",
	"PlaySnd",
	"PosAdd",
	"PosFreeze",
	"PosSet",
	"PowerAdd",
	"PowerSet",
	"Projectile",
	"RemoveExplod",
	"ReversalDef",
	"ScreenBound",
	"SelfState",
	"SprPriority",
	"StateTypeSet",
	"SndPan",
	"StopSnd",
	"SuperPause",
	"TargetBind",
	"TargetDrop",
	"TargetFacing",
	"TargetLifeAdd",
	"TargetPowerAdd",
	"TargetState",
	"TargetVelAdd",
	"TargetVelSet",
	"Trans",
	"Turn",
	"VarAdd",
	"VarRandom",
	"VarRangeSet",
	"VarSet",
	"VelAdd",
	"VelMul",
	"VelSet",
	"Width",
	0,
};

enum{
	ControlType_AfterImage =0,
	ControlType_AfterImageTime,
	ControlType_AllPalFX,
	ControlType_AngleAdd,
	ControlType_AngleDraw,
	ControlType_AngleMul,
	ControlType_AngleSet,
	ControlType_AppendToClipboard,
	ControlType_AssertSpecial,
	ControlType_AttackDist,
	ControlType_AttackMulSet,
	ControlType_BGPalFX,
	ControlType_BindToParent,
	ControlType_BindToRoot,
	ControlType_BindToTarget,
	ControlType_ChangeAnim,
	ControlType_ChangeAnim2,
	ControlType_ChangeState,
	ControlType_ClearClipboard,
	ControlType_CtrlSet,
	ControlType_DefenceMulSet,
	ControlType_DestroySelf,
	ControlType_DisplayToClipboard,
	ControlType_EnvColor,
	ControlType_EnvShake,
	ControlType_Explod,
	ControlType_ExplodBindTime,
	ControlType_ForceFeedback,
	ControlType_FallEnvShake,
	ControlType_GameMakeAnim,
	ControlType_Gravity,
	ControlType_Helper,
	ControlType_HitAdd,
	ControlType_HitBy,
	ControlType_HitDef,
	ControlType_HitFallDamage,
	ControlType_HitFallSet,
	ControlType_HitFallVel,
	ControlType_HitOverride,
	ControlType_HitVelSet,
	ControlType_LifeAdd,
	ControlType_LifeSet,
	ControlType_MakeDust,
	ControlType_ModifyExplod,
	ControlType_MoveHitReset,
	ControlType_NotHitBy,
	ControlType_Null,
	ControlType_Offset,
	ControlType_PalFX,
	ControlType_ParentVarAdd,
	ControlType_ParentVarSet,
	ControlType_Pause,
	ControlType_PlayerPush,
	ControlType_PlaySnd,
	ControlType_PosAdd,
	ControlType_PosFreeze,
	ControlType_PosSet,
	ControlType_PowerAdd,
	ControlType_PowerSet,
	ControlType_Projectile,
	ControlType_RemoveExplod,
	ControlType_ReversalDef,
	ControlType_ScreenBound,
	ControlType_SelfState,
	ControlType_SprPriority,
	ControlType_StateTypeSet,
	ControlType_SndPan,
	ControlType_StopSnd,
	ControlType_SuperPause,
	ControlType_TargetBind,
	ControlType_TargetDrop,
	ControlType_TargetFacing,
	ControlType_TargetLifeAdd,
	ControlType_TargetPowerAdd,
	ControlType_TargetState,
	ControlType_TargetVelAdd,
	ControlType_TargetVelSet,
	ControlType_Trans,
	ControlType_Turn,
	ControlType_VarAdd,
	ControlType_VarRandom,
	ControlType_VarRangeSet,
	ControlType_VarSet,
	ControlType_VelAdd,
	ControlType_VelMul,
	ControlType_VelSet,
	ControlType_Width,

};



// control�����õ�����ö�٣���ص���һ������ʽ����ֱ�Ӹ�ֵ
enum ConParmName
{
	CPN_value = 1,
	CPN_emem,
	CPN_anim,
	CPN_ctrl,
	CPN_x,
	CPN_y,
};



//StateTypes
enum Types
{
	stand=0,
	crouch,
	air,
	liedown,
	attack,
	idle,
	hit,
	none,
	untouch
};


//FlipFlags for air manager
// ��ȡair�ļ�ʱ��ʹ��
enum FlipFlag
{
	HFLIPFLAG=1,
	VFLIPFLAG=2,
	HVFLIPFLAG=3

};


// ����ʱ���Լ���״̬
enum HitDef_Attr_SelfType_Enum
{
	HitDef_Attr_SelfType_Stand=0,
	HitDef_Attr_SelfType_Crouch,
	HitDef_Attr_SelfType_Aerial
};
static char HitDef_Attr_SelfType[] = {'S','C','A'};

// �����ĵȼ�
enum HitDef_Attr_LevelType_Enum
{
	HitDef_Attr_AtkLevel_Normal=0,
	HitDef_Attr_AtkLevel_Special,
	HitDef_Attr_AtkLevel_Hyper
};
static char HitDef_Attr_LevelType[] = {'N','S','H'};


// ��������
enum HitDef_Attr_AtkType_Enum
{
	HitDef_Attr_AtkType_Attack=0,
	HitDef_Attr_AtkType_Throw,
	HitDef_Attr_AtkType_Projectile
};
static char HitDef_Attr_AtkType[] = {'A','T','P'};


// constö��
static char* strConstType[] = {
	"Data.life",
	0,
};

enum ConstType_Enum
{
	Const_Data_Life=0,
};


#endif