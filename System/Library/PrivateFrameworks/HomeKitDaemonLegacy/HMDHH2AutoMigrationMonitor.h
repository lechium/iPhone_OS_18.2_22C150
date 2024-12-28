//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHH2AutoMigrationEligibilityChecker, HMDHomeManager, NSString;
@protocol HMDBackgroundSystemTaskSchedulerInterfacing, HMDFeaturesDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDHH2AutoMigrationMonitor : HMFObject
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
    id <HMDBackgroundSystemTaskSchedulerInterfacing> _taskScheduler;	// 16 = 0x10
    HMDHH2AutoMigrationEligibilityChecker *_eligibilityChecker;	// 24 = 0x18
    id <HMDFeaturesDataSource> _featuresDataSource;	// 32 = 0x20
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000977355
- (void).cxx_destruct;	// IMP=0x0000000000975fc0
- (void)attemptAutoMigrationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000975d9e
- (void)stopMonitoring;	// IMP=0x0000000000975c46
- (void)startMonitoring;	// IMP=0x0000000000975ac9
- (id)initWithHomeManager:(id)arg1 backgroundTaskScheduler:(id)arg2 eligibilityChecker:(id)arg3 featuresDataSource:(id)arg4 logEventSubmitter:(id)arg5;	// IMP=0x0000000000975939
- (id)initWithHomeManager:(id)arg1 eligibilityChecker:(id)arg2;	// IMP=0x000000000097586b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
