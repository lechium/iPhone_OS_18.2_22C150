//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NTKDFaceSnapshotController;
@protocol OS_dispatch_queue;

@interface NTKDFaceSnapshotCoordinator : NSObject
{
    NSMutableSet *_clients;	// 8 = 0x8
    NTKDFaceSnapshotController *_snapshotController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcIncomingMessageQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 40 = 0x28
}

+ (void)updateAllSnapshots;	// IMP=0x002000000000c8f0
+ (id)sharedInstance;	// IMP=0x001000000000c89b
+ (void)runSnapshotServer;	// IMP=0x001000000000c7cb
- (void).cxx_destruct;	// IMP=0x002000000000d84d
- (void)_prewarmForActivity:(id)arg1;	// IMP=0x001000000000d410
- (void)_setupXPCEventListner;	// IMP=0x001000000000d03b
- (void)_updateAllSnapshots;	// IMP=0x001000000000cf54
- (void)_handleCurrentLocaleDidChangeNotification;	// IMP=0x001000000000ced2
- (void)_handleCalendarDayChangedNotification;	// IMP=0x001000000000ce50
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000cb1b
- (id)init;	// IMP=0x001000000000c934

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
