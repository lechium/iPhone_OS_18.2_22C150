//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface _TtC13HomeKitDaemon31HMDHomeKeySetupWalletLogEventV2 : HMMLogEvent
{
    MISSING_TYPE *success;	// 8 = 0x8
    MISSING_TYPE *coreAnalyticsEventName;	// 16 = 0x10
    MISSING_TYPE *coreAnalyticsEventOptions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000007fb0
- (id)initWithStartTime:(double)arg1;	// IMP=0x0000000000007ef0
- (id)init;	// IMP=0x0000000000007db0
@property(nonatomic) unsigned long long coreAnalyticsEventOptions; // @synthesize coreAnalyticsEventOptions;
@property(nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property(nonatomic, copy) NSString *coreAnalyticsEventName;

@end
