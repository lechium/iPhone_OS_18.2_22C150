//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE;

@interface MoveSpeakerIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x000000000020300e
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000202ee2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000202e35
- (id)init;	// IMP=0x0000000000202dcc
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000202d4f
@property(nonatomic) long long code; // @synthesize code;

@end

