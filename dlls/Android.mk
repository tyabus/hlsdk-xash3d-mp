#HLSDK server Android port
#Copyright (c) nicknekit

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := server

include $(XASH3D_CONFIG)

ifeq ($(TARGET_ARCH_ABI),armeabi-v7a-hard)
LOCAL_MODULE_FILENAME = libserver_hardfp
endif

LOCAL_CFLAGS += -D_LINUX -DCLIENT_WEAPONS -Dstricmp=strcasecmp -Dstrnicmp=strncasecmp -D_snprintf=snprintf \
	-fno-exceptions -DNO_VOICEGAMEMGR -w

LOCAL_CPPFLAGS := $(LOCAL_CFLAGS)

LOCAL_C_INCLUDES := $(SDL_PATH)/include \
		    $(LOCAL_PATH)/. \
		    $(LOCAL_PATH)/wpn_shared \
		    $(LOCAL_PATH)/../common \
		    $(LOCAL_PATH)/../engine/common \
		    $(LOCAL_PATH)/../engine \
		    $(LOCAL_PATH)/../public \
		    $(LOCAL_PATH)/../pm_shared \
		    $(LOCAL_PATH)/../game_shared

LOCAL_SRC_FILES := animating.cpp \
           animation.cpp \
           bmodels.cpp \
           buttons.cpp \
           cbase.cpp \
           client.cpp \
           combat.cpp \
           crossbow.cpp \
           crowbar.cpp \
           defaultai.cpp \
           doors.cpp \
           effects.cpp \
           explode.cpp \
           func_break.cpp \
           func_tank.cpp \
           game.cpp \
           gamerules.cpp \
           gauss.cpp \
	   skill.cpp \
           ggrenade.cpp \
           globals.cpp \
           glock.cpp \
           h_ai.cpp \
           h_battery.cpp \
	   h_cycler.cpp \
           h_export.cpp \
           handgrenade.cpp \
           healthkit.cpp \
           hornet.cpp \
           hornetgun.cpp \
           items.cpp \
           lights.cpp \
           maprules.cpp \
           monsters.cpp \
           monsterstate.cpp \
	   mortar.cpp \
           mp5.cpp \
           multiplay_gamerules.cpp \
           nodes.cpp \
	   observer.cpp \
           pathcorner.cpp \
           plats.cpp \
           player.cpp \
           python.cpp \
           rpg.cpp \
           satchel.cpp \
           schedule.cpp \
           shotgun.cpp \
           sound.cpp \
           soundent.cpp \
           spectator.cpp \
           squeakgrenade.cpp \
           subs.cpp \
           triggers.cpp \
           tripmine.cpp \
           util.cpp \
           weapons.cpp \
           world.cpp \
	   stub.cpp \
	   xenlite.cpp \
	   ../pm_shared/pm_debug.c \
	   ../pm_shared/pm_math.c \
	   ../pm_shared/pm_shared.c

LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)
