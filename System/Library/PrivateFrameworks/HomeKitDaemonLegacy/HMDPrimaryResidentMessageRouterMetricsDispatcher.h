//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDPrimaryResidentMessageRouterMetricsDispatcher : HMFObject
{
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000353aba
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
- (void)submitFailureEventWithMessageName:(id)arg1 failureType:(long long)arg2;	// IMP=0x00000000003538e4
- (id)initWithLogEventSubmitter:(id)arg1;	// IMP=0x0000000000353876

@end

