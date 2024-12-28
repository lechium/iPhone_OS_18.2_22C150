//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSObject, NSString, NSURL;
@protocol HMDFileManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLaunchHandler : HMFObject
{
    NSURL *_relaunchPlistFileURL;	// 8 = 0x8
    id <HMDFileManager> _fileManager;	// 16 = 0x10
    CDUnknownBlockType _jetsamPriorityHandler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 32 = 0x20
    NSMutableSet *_registeredRelaunchClients;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000b15911
+ (id)sharedHandler;	// IMP=0x0010000000b158ae
- (void).cxx_destruct;	// IMP=0x0000000000b152d1
@property(readonly, nonatomic) NSMutableSet *registeredRelaunchClients; // @synthesize registeredRelaunchClients=_registeredRelaunchClients;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(readonly, nonatomic) CDUnknownBlockType jetsamPriorityHandler; // @synthesize jetsamPriorityHandler=_jetsamPriorityHandler;
@property(readonly, nonatomic) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, copy, nonatomic) NSURL *relaunchPlistFileURL; // @synthesize relaunchPlistFileURL=_relaunchPlistFileURL;
- (void)_setJetsamPriorityElevated:(_Bool)arg1;	// IMP=0x0000000000b1505c
- (void)_updateOrRemoveRelaunchPlist;	// IMP=0x0000000000b14ad9
- (void)deregisterRelaunchClientWithUUID:(id)arg1;	// IMP=0x0000000000b14a21
- (void)registerRelaunchClientWithUUID:(id)arg1;	// IMP=0x0000000000b14968
- (void)removePersistentRelaunchRegistrationsIfNecessary;	// IMP=0x0000000000b148f7
- (id)initWithRelaunchPlistFileURL:(id)arg1 fileManager:(id)arg2 jetsamPriorityHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b147a0
- (id)init;	// IMP=0x0000000000b146ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
