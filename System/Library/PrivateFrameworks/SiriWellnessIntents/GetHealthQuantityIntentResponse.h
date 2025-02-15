//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE, NSDate, NSString;

@interface GetHealthQuantityIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x0000000000119770
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000119520
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001193a0
- (id)init;	// IMP=0x0000000000119230
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000119110
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic) double average; // @dynamic average;
@property(nonatomic) double maximum; // @dynamic maximum;
@property(nonatomic) double minimum; // @dynamic minimum;
@property(nonatomic) double mostRecent; // @dynamic mostRecent;
@property(nonatomic, copy) NSDate *sampleEndDate; // @dynamic sampleEndDate;
@property(nonatomic, copy) NSDate *sampleStartDate; // @dynamic sampleStartDate;
@property(nonatomic) double total; // @dynamic total;
@property(nonatomic, copy) NSString *unit; // @dynamic unit;

@end

