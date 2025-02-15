//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PSYInitialSyncStateObserver, PSYSyncCoordinator;

@interface PCSPairedSyncDelegate : NSObject
{
    PSYSyncCoordinator *_coordinator;	// 8 = 0x8
    PSYInitialSyncStateObserver *_stateObserver;	// 16 = 0x10
}

+ (id)sharedSyncDelegate;	// IMP=0x0020000000011030
- (void).cxx_destruct;	// IMP=0x00200000000114d8
@property(readonly) PSYInitialSyncStateObserver *stateObserver; // @synthesize stateObserver=_stateObserver;
@property(readonly) PSYSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000011193
- (_Bool)syncingIsRestrictedForPairingID:(id)arg1;	// IMP=0x001000000001118b
- (id)init;	// IMP=0x00100000000110d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

