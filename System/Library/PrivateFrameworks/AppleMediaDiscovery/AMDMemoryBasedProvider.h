//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMDFeatureProvider.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMDMemoryBasedProvider : AMDFeatureProvider
{
    NSMutableDictionary *_featureStore;	// 8 = 0x8
}

+ (_Bool)isValidFeatureObject:(id)arg1;	// IMP=0x00600000000681f0
+ (_Bool)isValidMultiArray:(id)arg1;	// IMP=0x0060000000067cb0
+ (id)sharedProvider;	// IMP=0x0060000000067210
- (void).cxx_destruct;	// IMP=0x0000000000068940
@property(retain, nonatomic) NSMutableDictionary *featureStore; // @synthesize featureStore=_featureStore;
- (void)storeOutputRemapData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067b80
- (void)storeFeatureData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067680
- (id)fetchOutputRemapDictForUsecase:(id)arg1;	// IMP=0x0000000000067570
- (id)getFeatureWithName:(id)arg1 withColumn:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000067300

@end
