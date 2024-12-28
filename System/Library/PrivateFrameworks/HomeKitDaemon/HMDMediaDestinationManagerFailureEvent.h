//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationManagerFailureEvent : HMMLogEvent
{
    NSString *_errorDomain;	// 8 = 0x8
    NSNumber *_errorCode;	// 16 = 0x10
    NSNumber *_failureCode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000f98984
@property(readonly, copy) NSNumber *failureCode; // @synthesize failureCode=_failureCode;
@property(readonly, copy) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, copy) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
- (id)attributeDescriptions;	// IMP=0x0000000000f9879e
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithFailureCode:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000000f9855e

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end
