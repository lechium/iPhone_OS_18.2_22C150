//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC18ActivityProgressUI36BackgroundActivitySessionsController : NSObject
{
    MISSING_TYPE *listener;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *activityProgressUIClient;	// 24 = 0x18
    MISSING_TYPE *_backgroundActivitySessionsByTaskID;	// 0 = 0x0
    MISSING_TYPE *_jindoSessionsByBundleID;	// 0 = 0x0
    MISSING_TYPE *lockStateMonitor;	// 0 = 0x0
    MISSING_TYPE *pillController;	// 0 = 0x0
    MISSING_TYPE *appIconProvider;	// 0 = 0x0
    MISSING_TYPE *hapticGenerator;	// 0 = 0x0
    MISSING_TYPE *shouldPlayHapticOnSceneActivation;	// 25 = 0x19
    MISSING_TYPE *isSystemApertureEnabled;	// 0 = 0x0
    MISSING_TYPE *queue;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0020000000017cd0
- (void)dealloc;	// IMP=0x0010000000017c60
- (id)init;	// IMP=0x0010000000017be0
- (void)updateActivityName:(id)arg1 activityDescription:(id)arg2 withHaptic:(id)arg3 forIdentifier:(id)arg4;	// IMP=0x001000000001c0a0
- (void)updateActivityName:(id)arg1 activityDescription:(id)arg2 forIdentifier:(id)arg3;	// IMP=0x001000000001b370
- (void)updateProgress:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x001000000001b0b0
- (void)startActivityForIdentifier:(id)arg1 bundleIdentifier:(id)arg2 imageUTI:(id)arg3 activityName:(id)arg4 activityDescription:(id)arg5 progress:(id)arg6;	// IMP=0x001000000001aaa0
- (void)startActivityForIdentifier:(id)arg1 bundleIdentifier:(id)arg2 activityName:(id)arg3 activityDescription:(id)arg4 progress:(id)arg5;	// IMP=0x00100000000198e0
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000001c850

@end

