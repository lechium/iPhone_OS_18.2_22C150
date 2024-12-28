//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface SAMLConditions
{
    NSArray *_conditions;	// 8 = 0x8
}

+ (id)createElement:(id *)arg1;	// IMP=0x0060000000001493
- (void).cxx_destruct;	// IMP=0x0000000000001c9c
@property(readonly, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
- (_Bool)assertionMeetsConditions:(id *)arg1;	// IMP=0x0000000000001b99
@property(readonly, nonatomic) NSNumber *proxyRestrictionAudienceCount;
@property(readonly, nonatomic) NSArray *proxyRestrictions;
@property(readonly, nonatomic) _Bool oneTimeUse;
@property(readonly, nonatomic) NSArray *audienceRestrictions;
@property(readonly, nonatomic) NSDate *notOnOrAfter;
@property(readonly, nonatomic) NSDate *notBefore;

@end
