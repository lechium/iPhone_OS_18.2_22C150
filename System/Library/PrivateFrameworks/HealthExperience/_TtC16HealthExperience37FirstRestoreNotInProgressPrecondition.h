//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC16HealthExperience37FirstRestoreNotInProgressPrecondition : NSObject
{
    MISSING_TYPE *cloudSyncObserver;	// 8 = 0x8
    MISSING_TYPE *preconditionCompletion;	// 16 = 0x10
    MISSING_TYPE *healthStore;	// 32 = 0x20
    MISSING_TYPE *shouldProceedOnErrorRequiringUserAction;	// 40 = 0x28
    MISSING_TYPE *waitUntilShouldProceed;	// 41 = 0x29
    MISSING_TYPE *completionQueue;	// 48 = 0x30
    MISSING_TYPE *lock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000008c490
- (id)init;	// IMP=0x000000000008ca20
@property(nonatomic, readonly) NSString *description;
- (void)dealloc;	// IMP=0x000000000008c400
- (void)cloudSyncObserver:(id)arg1 didFailToPopulateStatusWithError:(id)arg2;	// IMP=0x000000000008d0b0
- (void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2;	// IMP=0x000000000008d030
- (void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2;	// IMP=0x000000000008cac0
- (void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2;	// IMP=0x000000000008caa0
- (void)cloudSyncObserverSyncCompleted:(id)arg1;	// IMP=0x000000000008ca80

@end

