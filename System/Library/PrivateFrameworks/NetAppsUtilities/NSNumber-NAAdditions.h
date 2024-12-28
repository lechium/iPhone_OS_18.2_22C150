//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@interface NSNumber (NAAdditions)
- (id)na_smallerNumber:(id)arg1;	// IMP=0x0030000000018cb2
- (id)na_largerNumber:(id)arg1;	// IMP=0x0030000000018c59
- (long long)na_compareAbsoluteValue:(id)arg1;	// IMP=0x0030000000018bc8
- (id)na_valueRoundedToNearestStepValue:(id)arg1 relativeToBaseValue:(id)arg2;	// IMP=0x0030000000018880
@property(readonly, copy, nonatomic) NSNumber *na_absoluteValue;
@property(readonly, nonatomic) _Bool na_isSignedValue;
@property(readonly, nonatomic) _Bool na_isFloatValue;
@end
