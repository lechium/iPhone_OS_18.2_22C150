//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMessageHandlerMetricsDispatcher : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x006000000079cc08
- (void).cxx_destruct;	// IMP=0x000000000079cbd7
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)attributeDescriptions;	// IMP=0x000000000079cadf
- (id)privateDescription;	// IMP=0x000000000079cacd
- (id)logIdentifier;	// IMP=0x000000000079ca7d
- (void)submitFailureEventOfType:(unsigned long long)arg1 message:(id)arg2;	// IMP=0x000000000079c8a6
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x000000000079c7e2

@end

