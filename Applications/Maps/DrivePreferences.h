//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DrivePreferences
{
    _Bool _avoidTolls;	// 8 = 0x8
    _Bool _avoidHighways;	// 9 = 0x9
    _Bool _ignoreLiveTraffic;	// 10 = 0xa
}

@property(nonatomic) _Bool ignoreLiveTraffic; // @synthesize ignoreLiveTraffic=_ignoreLiveTraffic;
@property(nonatomic) _Bool avoidHighways; // @synthesize avoidHighways=_avoidHighways;
@property(nonatomic) _Bool avoidTolls; // @synthesize avoidTolls=_avoidTolls;
- (id)_values;	// IMP=0x0010000000bc4c22
- (id)_keys;	// IMP=0x0010000000bc4c15
- (void)loadValuesFromDefaults;	// IMP=0x0010000000bc4b26
- (_Bool)hasAnyNonStandardPreferences;	// IMP=0x0010000000bc4aed
- (id)automobileOptions;	// IMP=0x0010000000bc4a1f
- (id)initWithCopy:(id)arg1;	// IMP=0x0010000000bc4981
- (id)initWithDefaults:(id)arg1;	// IMP=0x0010000000bc4952
- (id)initWithAutomobileOptions:(id)arg1 defaults:(id)arg2;	// IMP=0x0010000000bc485e
- (id)initWithAvoidTolls:(_Bool)arg1 avoidHighways:(_Bool)arg2 ignoreLiveTraffic:(_Bool)arg3 defaults:(id)arg4;	// IMP=0x0010000000bc47f4

@end
