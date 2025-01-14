//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, HKMedicationsNumberToStringMap, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface HKMedicationsResolver : NSObject
{
    HDSQLiteDatabase *_db;	// 8 = 0x8
    NSURL *_assetUrl;	// 16 = 0x10
    _Bool _dbReady;	// 24 = 0x18
    long long _numberOfNewNgrams;	// 32 = 0x20
    long long _numberOfUsedNgrams;	// 40 = 0x28
    HKMedicationsNumberToStringMap *_ingredients;	// 48 = 0x30
    HKMedicationsNumberToStringMap *_tradenames;	// 56 = 0x38
    NSDictionary *_abbreviations;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000009750
- (_Bool)hkt_setUpDatabase;	// IMP=0x0000000000009661
- (_Bool)hkt_looksLikeGenericInText:(id)arg1;	// IMP=0x0000000000009654
- (id)hkt_ngramsWithError:(inout id *)arg1;	// IMP=0x0000000000009500
- (long long)hkt_ngramIdCountWithError:(inout id *)arg1;	// IMP=0x000000000000941d
- (id)hkt_createNgramMapsWithError:(inout id *)arg1;	// IMP=0x0000000000009410
- (_Bool)hkt_prepareNgramAssetWithError:(inout id *)arg1;	// IMP=0x00000000000093d2
- (id)hkt_ngramsFrom:(id)arg1 minLength:(long long)arg2 maxLength:(long long)arg3;	// IMP=0x00000000000093bf
- (long long)countOfContinousDigitsInLine:(id)arg1;	// IMP=0x000000000000930b
- (long long)consecutiveLCSUsingTranscript:(id)arg1 prediction:(id)arg2;	// IMP=0x000000000000914a
- (id)filterAndAddGenerics:(id)arg1 transcripts:(id)arg2 criterion:(float)arg3 limit:(long long)arg4 error:(inout id *)arg5;	// IMP=0x00000000000074cd
- (id)resolveText:(id)arg1 error:(inout id *)arg2;	// IMP=0x0000000000006917
- (void)processNgramLine:(id)arg1 n:(long long)arg2;	// IMP=0x000000000000570f
- (_Bool)resetInMemoryDBWithError:(inout id *)arg1;	// IMP=0x00000000000049d5
- (_Bool)resetResolverWithError:(inout id *)arg1;	// IMP=0x00000000000049bc
- (void)dealloc;	// IMP=0x0000000000004771
- (id)initWithAssetUrl:(id)arg1;	// IMP=0x0000000000004697

@end

