//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ACXGizmoStateManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSMutableDictionary *_stateMap;	// 16 = 0x10
}

+ (id)sharedStateManager;	// IMP=0x004000000001fb8a
- (void).cxx_destruct;	// IMP=0x0020000000020c3b
@property(readonly, nonatomic) NSMutableDictionary *stateMap; // @synthesize stateMap=_stateMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)noteDatabaseRebuild;	// IMP=0x0010000000020b65
- (void)noteTrustObtainedForApps:(id)arg1 trustRemovedForApps:(id)arg2;	// IMP=0x00100000000209bd
- (void)noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 transitioningAppBundleIDs:(id)arg4;	// IMP=0x0010000000020123
- (id)stateForActivePairedDevice;	// IMP=0x001000000002009c
- (id)stateForPairingID:(id)arg1;	// IMP=0x001000000001fff2
- (id)stateForDevice:(id)arg1;	// IMP=0x001000000001fcb0
- (id)init;	// IMP=0x001000000001fc17

@end
