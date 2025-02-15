//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE, NSDate, NSString;

@interface GetBloodPressureIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x0000000000133f90
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000133d40
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000133bc0
- (id)init;	// IMP=0x0000000000133a50
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000133930
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic) double diastolic; // @dynamic diastolic;
@property(nonatomic) double diastolicMaximum; // @dynamic diastolicMaximum;
@property(nonatomic) double diastolicMinimum; // @dynamic diastolicMinimum;
@property(nonatomic, copy) NSDate *sampleEndDate; // @dynamic sampleEndDate;
@property(nonatomic, copy) NSDate *sampleStartDate; // @dynamic sampleStartDate;
@property(nonatomic) double systolic; // @dynamic systolic;
@property(nonatomic) double systolicMaximum; // @dynamic systolicMaximum;
@property(nonatomic) double systolicMinimum; // @dynamic systolicMinimum;
@property(nonatomic, copy) NSString *unit; // @dynamic unit;

@end

