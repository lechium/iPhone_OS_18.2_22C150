//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC27HealthMenstrualCyclesDaemon20HDMCPregnancyManager : NSObject
{
    MISSING_TYPE *profile;	// 8 = 0x8
    MISSING_TYPE *protectedDataOperation;	// 16 = 0x10
    MISSING_TYPE *lockedOperationState;	// 24 = 0x18
    MISSING_TYPE *lockedPregnancyModel;	// 32 = 0x20
    MISSING_TYPE *significantTimeChangeToken;	// 40 = 0x28
    MISSING_TYPE *queue;	// 48 = 0x30
    MISSING_TYPE *notificationProvider;	// 56 = 0x38
    MISSING_TYPE *shouldReRequestWork;	// 64 = 0x40
    MISSING_TYPE *observers;	// 72 = 0x48
    MISSING_TYPE *userInitiatedObservers;	// 80 = 0x50
    MISSING_TYPE *calendarCache;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000074100
- (id)init;	// IMP=0x0000000000075140
- (void)significantTimeChangeDidOccur;	// IMP=0x00000000000750c0
- (void)dealloc;	// IMP=0x00000000000740e0
- (id)initWithProfile:(id)arg1 operation:(id)arg2 experienceModelProvider:(id)arg3 notificationProvider:(id)arg4 calendarCache:(id)arg5;	// IMP=0x0000000000073180
- (void)performWorkForOperation:(id)arg1 profile:(id)arg2 databaseAccessibilityAssertion:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000756a0
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;	// IMP=0x00000000000757d0
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;	// IMP=0x0000000000075770
- (id)diagnosticDescription;	// IMP=0x0000000000075a90
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000075dd0
- (void)registerObserver:(id)arg1 isUserInitiated:(_Bool)arg2;	// IMP=0x0000000000075d70
- (id)getCurrentPregnancyModel;	// IMP=0x0000000000075ce0
- (void)experienceModelManagerDidUpdateModel;	// IMP=0x0000000000075ff0

@end
