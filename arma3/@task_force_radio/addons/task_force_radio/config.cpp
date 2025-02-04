class CfgPatches
{
	class task_force_radio
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = { "CBA_Main", "task_force_radio_items"};
		author[] = {"[TF]Nkey"};
		authorUrl = "https://github.com/michail-nikolaev/task-force-arma-3-radio";
		version = 0.9.8;
		versionStr = "0.9.8";
		versionAr[] = {0,9,8};
	};
};

#include "\task_force_radio\CfgFunctions.h"
class task_force_radio_settings {
	#include "\userconfig\task_force_radio\radio_settings.hpp"
};
#include "\task_force_radio\description.h"
#include "\task_force_radio\RscTitles.hpp"

class CfgSounds
{
	class TFAR_rotatorPush
	{
		name = "TFAR - Rotator Switch (Push)";
		sound[] = {"\task_force_radio\sounds\hardPush.wss",0.5,1};
		titles[] = {};
	};
	class TFAR_rotatorClick
	{
		name = "TFAR - Rotator Switch (Click)";
		sound[] = {"\A3\ui_f\data\sound\RscButton\soundEscape.wss",0.5,1};
		titles[] = {};
	};
};