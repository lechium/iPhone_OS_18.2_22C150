//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationManagerMetricsDispatcher : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000f6c860
- (void).cxx_destruct;	// IMP=0x0000000000f6c82f
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x0000000000f6c7b3
- (void)submitFailureEventWithFailureCode:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000000f6c616
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x0000000000f6c574

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
