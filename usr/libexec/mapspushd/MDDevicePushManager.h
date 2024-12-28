//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDState, MapsPushManager, NSString, RAPSubmissionStatusSyncHandler;

@interface MDDevicePushManager : NSObject
{
    MDState *_state;	// 8 = 0x8
    MapsPushManager *_pushManager;	// 16 = 0x10
    RAPSubmissionStatusSyncHandler *_syncHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000010854
- (void)clearRAPStatusChangeNotificationWithManager:(id)arg1;	// IMP=0x001000000001080e
- (void)pushManager:(id)arg1 receivedClearedPhotoAttributionNotificationWithTitle:(id)arg2 message:(id)arg3;	// IMP=0x0010000000010786
- (void)pushManager:(id)arg1 receivedPhotoLivenessMUID:(id)arg2 title:(id)arg3 message:(id)arg4 actionURL:(id)arg5;	// IMP=0x00100000000106df
- (void)pushManager:(id)arg1 receivedRAPStatusChangeNotification:(id)arg2;	// IMP=0x001000000001066f
- (void)pushManager:(id)arg1 receivedFixedProblemNotification:(id)arg2 manifestToken:(id)arg3;	// IMP=0x00100000000102fe
- (void)pushManager:(id)arg1 gotPushData:(id)arg2;	// IMP=0x001000000000ffb3
- (void)_cleanupRAPNotifications;	// IMP=0x001000000000fdf0
- (_Bool)_shouldDisplayNotificationForProblemStatus:(id)arg1;	// IMP=0x001000000000fd50
- (void)simulateRAPStatusChangeNotification;	// IMP=0x001000000000fd3a
- (void)simulateUGCPhotoAttributionClearedNotification;	// IMP=0x001000000000fd24
- (void)simulateUGCPhotoSubmissionResolution;	// IMP=0x001000000000fd0e
- (void)simulateProblemResolution;	// IMP=0x001000000000fcf8
- (id)devicePushToken;	// IMP=0x001000000000fce2
- (void)dealloc;	// IMP=0x001000000000fc8c
- (id)initWithState:(id)arg1;	// IMP=0x001000000000fbb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
