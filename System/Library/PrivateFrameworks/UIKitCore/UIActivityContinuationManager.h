//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;
@protocol UIActivityContinuationManagerApplicationContext;

__attribute__((visibility("hidden")))
@interface UIActivityContinuationManager : NSObject
{
    id <UIActivityContinuationManagerApplicationContext> _context;	// 8 = 0x8
    NSString *_currentActivityContinuationType;	// 16 = 0x10
    NSString *_currentActivityContinuationUUIDString;	// 24 = 0x18
    NSProgress *_currentActivityContinuationProgress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000183008b
@property(retain, nonatomic, getter=_currentActivityContinuationProgress, setter=_setCurrentActivityContinuationProgress:) NSProgress *currentActivityContinuationProgress; // @synthesize currentActivityContinuationProgress=_currentActivityContinuationProgress;
@property(copy, nonatomic, getter=_currentActivityContinuationUUIDString, setter=_setCurrentActivityContinuationUUIDString:) NSString *currentActivityContinuationUUIDString; // @synthesize currentActivityContinuationUUIDString=_currentActivityContinuationUUIDString;
@property(copy, nonatomic, getter=_currentActivityContinuationType, setter=_setCurrentActivityContinuationType:) NSString *currentActivityContinuationType; // @synthesize currentActivityContinuationType=_currentActivityContinuationType;
- (void)removeResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;	// IMP=0x000000000182fce1
- (void)_cleanupUserActivity:(id)arg1 activityIdentifier:(id)arg2;	// IMP=0x000000000182fc63
- (void)addResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;	// IMP=0x000000000182f95b
- (void)userActivityWillSave:(id)arg1;	// IMP=0x000000000182f899
- (void)_userActivityWillSave:(id)arg1;	// IMP=0x000000000182f4a4
- (_Bool)isTrackingActivityContinuationForResponder:(id)arg1 document:(id)arg2 userActivity:(id)arg3;	// IMP=0x000000000182f34a
- (_Bool)activityContinuationsAreBeingTracked;	// IMP=0x000000000182f32a
- (id)activityContinuationDictionaryWithAction:(id)arg1 sourceApplication:(id)arg2 originatingProcess:(id)arg3;	// IMP=0x000000000182ee64
- (void)handleActivityContinuation:(id)arg1 isSuspended:(_Bool)arg2;	// IMP=0x000000000182e4fd
- (void)_clearCurrentActivityContinuationCancelingProgress:(_Bool)arg1;	// IMP=0x000000000182e485
- (id)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000182e201
- (_Bool)_delegateHandledContinueActivityWithType:(id)arg1;	// IMP=0x000000000182e11b
- (void)_didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;	// IMP=0x000000000182e099
- (_Bool)_continueUserActivity:(id)arg1;	// IMP=0x000000000182e03a
- (void)_endCurrentActivityContinuationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000182dfcc
- (void)_endCurrentActivityContinuationAndDisplayError:(id)arg1;	// IMP=0x000000000182df5e
- (void)_hideCurrentActivityContinuationProgressUI;	// IMP=0x000000000182df26
- (void)_displayCurrentActivityContinuationProgressUI;	// IMP=0x000000000182ddd4
- (id)initWithApplicationContext:(id)arg1;	// IMP=0x000000000182dd70
- (id)init;	// IMP=0x000000000182dce9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
