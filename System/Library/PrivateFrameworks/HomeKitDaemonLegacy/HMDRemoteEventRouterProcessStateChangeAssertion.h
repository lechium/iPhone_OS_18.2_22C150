//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol HMDRemoteEventRouterProcessStateChangeAssertionDataSource, HMETimerProvider, HMFCancellable, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProcessStateChangeAssertion : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <HMETimerProvider> _timerProvider;	// 16 = 0x10
    id <HMDRemoteEventRouterProcessStateChangeAssertionDataSource> _dataSource;	// 24 = 0x18
    NSDictionary *_applicationsAndIntervals;	// 32 = 0x20
    NSMutableSet *_foregroundProcesses;	// 40 = 0x28
    NSMutableDictionary *_backgroundProcesses;	// 48 = 0x30
    id <HMFCancellable> _eventRouterActiveAssertion;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000080b495
- (void).cxx_destruct;	// IMP=0x000000000080ae1f
@property(retain, nonatomic) id <HMFCancellable> eventRouterActiveAssertion; // @synthesize eventRouterActiveAssertion=_eventRouterActiveAssertion;
@property(readonly, nonatomic) NSMutableDictionary *backgroundProcesses; // @synthesize backgroundProcesses=_backgroundProcesses;
@property(readonly, nonatomic) NSMutableSet *foregroundProcesses; // @synthesize foregroundProcesses=_foregroundProcesses;
@property(readonly, copy, nonatomic) NSDictionary *applicationsAndIntervals; // @synthesize applicationsAndIntervals=_applicationsAndIntervals;
@property(readonly, nonatomic) __weak id <HMDRemoteEventRouterProcessStateChangeAssertionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) __weak id <HMETimerProvider> timerProvider; // @synthesize timerProvider=_timerProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_backgroundTimerDidExpire:(id)arg1;	// IMP=0x000000000080a8b4
- (void)_removeBackgroundTimer:(id)arg1;	// IMP=0x000000000080a76d
- (id)_enableBackgroundTimerWithBundleIdentifier:(id)arg1;	// IMP=0x000000000080a4e8
- (void)handleProcessWithBundleIdentifier:(id)arg1 updatedIsActive:(_Bool)arg2;	// IMP=0x000000000080a2f9
- (id)initWithQueue:(id)arg1 timerProvider:(id)arg2 applicationsAndIntervals:(id)arg3 dataSource:(id)arg4;	// IMP=0x000000000080a188

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
