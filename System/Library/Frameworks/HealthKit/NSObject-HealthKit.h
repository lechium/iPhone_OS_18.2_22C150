//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (HealthKit)
- (id)_hk_valueForSafeValueForKeyPath:(id)arg1;	// IMP=0x00700000001635ef
- (id)hk_classNameWithTag:(id)arg1;	// IMP=0x0070000000163566
- (_Bool)hk_expectMissingKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00700000001634d8
- (id)hk_safeNumberIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000016346f
- (id)hk_safeStringIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x0070000000163406
- (id)hk_safeDictionaryIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000016339d
- (id)hk_safeArrayIfExistsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x0070000000163334
- (id)hk_safeValueIfExistsForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x00700000001632ad
- (id)hk_safeNumberForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x0070000000163224
- (id)hk_safeStringForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x007000000016319b
- (id)hk_safeDictionaryForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x0070000000163112
- (id)hk_safeArrayForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x0070000000163089
- (id)hk_safeValueForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x0070000000163000
- (_Bool)hk_hasValueForKeyPath:(id)arg1;	// IMP=0x0070000000162fcd
@end

