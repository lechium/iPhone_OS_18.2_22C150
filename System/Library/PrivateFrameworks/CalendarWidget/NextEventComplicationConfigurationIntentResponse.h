//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE, NSArray;

@interface NextEventComplicationConfigurationIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x000000000010ba60
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000010b8d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010b810
- (id)init;	// IMP=0x000000000010b770
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000010b690
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic, copy) NSArray *calendars; // @dynamic calendars;

@end

