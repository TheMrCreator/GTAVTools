/*****************************************************************************\

Copyright (C) 2013, GTA-Network Team <contact at gta-network dot net>

This software is provided 'as-is', without any express or implied
warranty.  In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software. If you use this software
in a product, an acknowledgment in the product documentation would be
appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.

\*****************************************************************************/

class CGTAVSpace_Tasks {
public:

	enum eVTasks {
		TASK_TOGGLE_DUCK = 0,
		TASK_PAUSE,
		TASK_STAND_STILL,
		TASK_COWER,
		TASK_ACHIEVE_HEADING,
		TASK_FOLLOW_POINT_ROUTE,
		TASK_WANDER_STANDARD,
		TASK_TURN_PED_TO_FACE_COORD,
		TASK_CLIMB_LADDER,
		TASK_GUARD_SPHERE_DEFENSIVE_AREA,
		TASK_STAND_GUARD,
		TASK_SWAP_WEAPON,
		TASK_PARACHUTE,
		TASK_PARACHUTE_TO_TARGET,
		TASK_RAPPEL_FROM_HELI,
		TASK_PATROL,
		TASK_STAY_IN_COVER,
		TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS,
		TASK_FOLLOW_WAYPOINT_RECORDING,
		TASK_JUMP,
		TASK_GO_STRAIGHT_TO_COORD,
		TASK_WANDER_IN_AREA,
		TASK_COMBAT_HATED_PED_IN_AREA,
		TASK_COMBAT_HATED_TARGETS_AROUND_PED,
		TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED,
		TASK_PERFORM_SEQUENCE,
		TASK_CLIMB,
		TASK_PERFORM_SEQUENCE_FROM_PROGRESS,
		TASK_PED_SLIDE_TO_COORD_HDG_RATE,
		TASK_START_SCENARIO_IN_PLACE,
		TASK_START_SCENARIO_AT_POSITION,
		TASK_SKY_DIVE,
		TASK_HANDS_UP,
		TASK_OPEN_VEHICLE_DOOR,
		TASK_ENTER_VEHICLE,
		TASK_LEAVE_VEHICLE,
		TASK_VEHICLE_DRIVE_TO_COORD,
		TASK_VEHICLE_DRIVE_WANDER,
		TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY,
		TASK_FOLLOW_TO_OFFSET_OF_ENTITY,
		TASK_SMART_FLEE_POINT,
		TASK_SMART_FLEE_PED,
		TASK_REACT_AND_FLEE_PED,
		TASK_SHOCKING_EVENT_REACT,
		TASK_COMBAT_PED,
		TASK_COMBAT_TIMED,
		TASK_FOLLOW_NAVMESH_TO_COORD,
		TASK_FOLLOW_NAVMESH_TO_COORD_ADVANCED,
		TASK_GO_TO_COORD_ANY_MEANS,
		TASK_PLAY_ANIM,
		TASK_SCRIPTED_ANIMATION,
		TASK_SYNCHRONIZED_SCENE,
		TASK_LEAVE_ANY_VEHICLE,
		TASK_TURN_PED_TO_FACE_ENTITY,
		TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT,
		TASK_EVERYONE_LEAVE_VEHICLE,
		TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD,
		TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY,
		TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD,
		TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD,
		TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY,
		TASK_VEHICLE_TEMP_ACTION,
		TASK_VEHICLE_MISSION,
		TASK_VEHICLE_MISSION_PED_TARGET,
		TASK_HELI_MISSION,
		TASK_PLANE_MISSION,
		TASK_BOAT_MISSION,
		TASK_STEALTH_KILL,
		TASK_PLANT_BOMB,
		TASK_PLANE_CHASE,
		TASK_HELI_CHASE,
		TASK_DRIVE_BY,
		TASK_USE_MOBILE_PHONE_TIMED,
		TASK_CHAT_TO_PED,
		TASK_WARP_PED_INTO_VEHICLE,
		TASK_GOTO_ENTITY_AIMING,
		TASK_SET_DECISION_MAKER,
		TASK_SET_PED_SPHERE_DEFENSIVE_AREA,
		TASK_CLEAR_DEFENSIVE_AREA,
		TASK_GUARD_CURRENT_POS,
		TASK_USE_NEAREST_SCENARIO_TO_COORD,
		TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP,
		TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD,
		TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP,
		TASK_RELOAD_WEAPON,
		TASK_VEHICLE_SHOOT_AT_PED,
		TASK_VEHICLE_AIM_AT_PED,
		TASK_VEHICLE_SHOOT_AT_COORD,
		TASK_VEHICLE_AIM_AT_COORD,
		TASK_FORCE_MOTION_STATE,
		TASK_GENERAL_SWEEP,
		TASK_ARREST_PED,
		TASK_GOTO_ENTITY,
		TASK_THROW_PROJECTILE,
		TASK_AIM_GUN_SCRIPTED,
		TASK_AIM_GUN_SCRIPTED_WITH_TARGET,
		TASK_AIM_GUN_AT_ENTITY,
		TASK_AIM_GUN_AT_COORD,
		TASK_SHOOT_GUN_AT_COORD,
		TASK_GOTO_ENTITY_OFFSET,
		TASK_GOTO_ENTITY_OFFSET_XY,
		TASK_VEHICLE_CHASE,
		TASK_SHOOT_AT_ENTITY,
		TASK_SEEK_COVER_FROM_POS,
		TASK_SEEK_COVER_FROM_PED,
		TASK_SEEK_COVER_TO_COVER_POINT,
		TASK_SEEK_COVER_TO_COVER_COORD,
		TASK_PUT_PED_DIRECTLY_INTO_COVER,
		TASK_WRITHE,
		TASK_MOVE_NETWORK,
		TASK_MOVE_NETWORK_ADVANCED,
		TASK_VEHICLE_PARK,
		TASK_VEHICLE_ESCORT,
		TASK_VEHICLE_FOLLOW,
		TASK_VEHICLE_HELI_PROTECT,
		TASK_VEHICLE_GOTO_NAVMESH,
		TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING,
		TASK_USE_MOBILE_PHONE,
		TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED,
		TASK_VEHICLE_CRASH
	};
};