//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface SDNotificationManager : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSMutableDictionary *_autoFillRequests;	// 16 = 0x10
    UNUserNotificationCenter *_homePodNotifCenter;	// 24 = 0x18
    UNUserNotificationCenter *_homePodMiniNotificationCenter;	// 32 = 0x20
    _Bool _homePodNotifGranted;	// 40 = 0x28
    NSMutableDictionary *_homePodRequests;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    NSMutableDictionary *_tvKeyboardRequests;	// 64 = 0x40
    UNUserNotificationCenter *_tvNotifCenter;	// 72 = 0x48
    _Bool _tvNotifGranted;	// 80 = 0x50
    NSMutableDictionary *_watchKeyboardRequests;	// 88 = 0x58
    UNUserNotificationCenter *_watchNotifCenter;	// 96 = 0x60
    _Bool _watchNotifGranted;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
}

+ (id)sharedManager;	// IMP=0x002000000018ec38
- (void).cxx_destruct;	// IMP=0x0020000000196f9b
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testWatchKeyboardAutoFill;	// IMP=0x0010000000196ea2
- (void)testWatchKeyboard;	// IMP=0x0010000000196dd6
- (void)testKeyboardUpdate;	// IMP=0x0010000000196d09
- (void)testKeyboardRemove;	// IMP=0x0010000000196c3d
- (void)testKeyboardPostAutoFill;	// IMP=0x0010000000196b5d
- (void)testKeyboardPost;	// IMP=0x0010000000196a8f
- (void)testHandoffPost;	// IMP=0x00100000001968fe
- (void)testAutoFillRemove;	// IMP=0x0010000000196832
- (void)testAutofillPost;	// IMP=0x0010000000196766
- (void)testPostBasic;	// IMP=0x001000000019662f
- (void)testPost:(id)arg1;	// IMP=0x001000000019645c
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000195ecc
- (void)_homePodHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001959dc
- (void)_homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x00100000001954ce
- (void)homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x00100000001953f6
- (void)_homePodHandoffRemoveAll;	// IMP=0x0010000000195346
- (void)homePodHandoffRemoveAll;	// IMP=0x00100000001952e5
- (void)_homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000195072
- (void)homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000194fb1
- (void)_homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x0010000000194ddb
- (void)homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x0010000000194d03
- (id)homePodHandoffContentForDevice:(id)arg1 info:(id)arg2;	// IMP=0x00100000001947af
- (void)_watchHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000194713
- (void)_watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000019409f
- (void)watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x0010000000193fc7
- (void)_watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000193b41
- (void)watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000193a69
- (void)_watchKeyboardRemoveAll;	// IMP=0x00100000001939e5
- (void)watchKeyboardRemoveAll;	// IMP=0x0010000000193984
- (void)_watchKeyboardRemove:(id)arg1;	// IMP=0x00100000001937fe
- (void)watchKeyboardRemove:(id)arg1;	// IMP=0x0010000000193754
- (void)_watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x00100000001935cd
- (void)watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x0010000000193523
- (id)watchKeyboardContentForDevice:(id)arg1;	// IMP=0x00100000001931e1
- (void)_tvAutoFillRemoveAll;	// IMP=0x0010000000193151
- (void)tvAutoFillRemoveAll;	// IMP=0x00100000001930f0
- (void)_tvAutoFillRemove:(id)arg1;	// IMP=0x0010000000192f6a
- (void)tvAutoFillRemove:(id)arg1;	// IMP=0x0010000000192ec0
- (void)_tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x0010000000192b80
- (void)tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x0010000000192ad6
@property(readonly, copy, nonatomic) NSSet *activeTVAutoFillPrompts;
- (void)_riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x00100000001923cb
- (void)riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x00100000001922f3
- (void)_riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000191e6d
- (void)riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000191d95
- (void)_riServerRemoveAll;	// IMP=0x0010000000191d11
- (void)riServerRemoveAll;	// IMP=0x0010000000191cb0
- (void)_riServerRemove:(id)arg1;	// IMP=0x0010000000191b2a
- (void)riServerRemove:(id)arg1;	// IMP=0x0010000000191a80
- (void)_riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x00100000001918cf
- (void)riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x001000000019180f
- (id)riServerContentForDevice:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x00100000001914f3
- (void)_tvHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000190e95
- (id)attachmentFromURL:(id)arg1;	// IMP=0x0010000000190c90
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3 isHomePodMini:(_Bool)arg4;	// IMP=0x00100000001903a7
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3;	// IMP=0x0010000000190392
- (void)_homePodEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018fc21
- (void)_watchEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f86a
- (void)_riServerEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f4a6
- (void)_update;	// IMP=0x001000000018f448
- (void)prefsChanged;	// IMP=0x000000000018f436
- (void)_invalidate;	// IMP=0x001000000018f3e9
- (void)invalidate;	// IMP=0x001000000018f388
- (void)_activate;	// IMP=0x001000000018f307
- (void)activate;	// IMP=0x001000000018f2a4
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x001000000018ec8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
