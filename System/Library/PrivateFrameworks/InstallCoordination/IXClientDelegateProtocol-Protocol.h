//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class LSRecordPromise, NSError, NSUUID;

@protocol IXClientDelegateProtocol <NSObject>
- (oneway void)_client_promiseWithUUID:(NSUUID *)arg1 didCancelWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorWithUUID:(NSUUID *)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;
- (oneway void)_client_coordinatorWithUUID:(NSUUID *)arg1 didCancelWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(NSUUID *)arg1 forRecordPromise:(LSRecordPromise *)arg2;
- (oneway void)_client_coordinatorShouldBeginPostProcessingWithUUID:(NSUUID *)arg1 forRecordPromise:(LSRecordPromise *)arg2;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(NSUUID *)arg1 forRecordPromise:(LSRecordPromise *)arg2;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorWithUUID:(NSUUID *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(NSUUID *)arg1;
@end
