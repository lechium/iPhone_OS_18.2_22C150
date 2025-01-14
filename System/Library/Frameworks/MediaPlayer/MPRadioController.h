//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPRadioController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    _Bool _hasLaunchedService;	// 24 = 0x18
    _Bool _isRadioAvailable;	// 25 = 0x19
    BKSProcessAssertion *_remoteProcessAssertion;	// 32 = 0x20
    CDUnknownBlockType _remoteProcessAssertionCompletionHandler;	// 40 = 0x28
    long long _remoteProcessAssertionCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000424ee
- (void)_getConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004244d
- (void)_setRadioAvailable:(_Bool)arg1;	// IMP=0x00000000000423a7
- (void)_endRemoteProcessAssertion;	// IMP=0x0000000000042342
- (void)_beginRemoteProcessAssertionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004215c
- (void)getRecentStationGroupsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000420cf
@property(readonly, nonatomic, getter=isRadioAvailable) _Bool radioAvailable;
- (void)clientRadioControllerRecentStationsDidChange;	// IMP=0x0000000000041fd4
- (void)clientRadioControllerRadioAvailabilityDidChange:(_Bool)arg1;	// IMP=0x0000000000041f86
- (void)dealloc;	// IMP=0x0000000000041f2b
- (id)init;	// IMP=0x0000000000041ea1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

