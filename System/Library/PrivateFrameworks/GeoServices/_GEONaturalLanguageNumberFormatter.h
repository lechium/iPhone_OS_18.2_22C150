//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumberFormatter.h>

__attribute__((visibility("hidden")))
@interface _GEONaturalLanguageNumberFormatter : NSNumberFormatter
{
}

- (int)_tenthsDecimalPlace:(double)arg1;	// IMP=0x00000000011253fb
- (_Bool)_isNumberNearNaturalNumber:(double)arg1 outIsExact:(out _Bool *)arg2;	// IMP=0x0000000001125397
- (_Bool)_isHalfDecimal:(double)arg1 outIsExact:(out _Bool *)arg2;	// IMP=0x0000000001125361
- (id)_string_nAndAHalfDistance:(id)arg1 isApproximate:(_Bool)arg2;	// IMP=0x000000000112520b
- (id)_string_nDistance:(id)arg1 isApproximate:(_Bool)arg2;	// IMP=0x0000000001125004
- (id)stringFromDistanceMeasurement:(id)arg1 roundedDistanceMeasurement:(id)arg2;	// IMP=0x0000000001124cab

@end
