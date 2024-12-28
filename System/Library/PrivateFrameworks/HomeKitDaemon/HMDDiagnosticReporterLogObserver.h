//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;
@protocol HMMLogEventDispatching, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDiagnosticReporterLogObserver : HMFObject
{
    id <HMMLogEventDispatching> _logEventDispatcher;	// 8 = 0x8
    unsigned long long _memoryExceptionThreshold;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000f85c57
+ (_Bool)isSupportedEvent:(id)arg1;	// IMP=0x0010000000f85bd5
+ (id)supportedEventClasses;	// IMP=0x0010000000f85ba5
- (void).cxx_destruct;	// IMP=0x0000000000f85b59
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) unsigned long long memoryExceptionThreshold; // @synthesize memoryExceptionThreshold=_memoryExceptionThreshold;
@property(readonly, nonatomic) __weak id <HMMLogEventDispatching> logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000f85a4c
- (void)stop;	// IMP=0x0000000000f85936
- (void)start;	// IMP=0x0000000000f857f3
- (id)initWithLogEventDispatcher:(id)arg1;	// IMP=0x0000000000f85677
- (_Bool)shouldSubmitEvent:(id)arg1;	// IMP=0x0000000000f85629

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
