//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PGFeatureExtractor.h"

@class MISSING_TYPE, NSArray, NSString;

@interface PGFeatureExtractorAssetAverage : PGFeatureExtractor
{
    MISSING_TYPE *featureExtractor;	// 8 = 0x8
    MISSING_TYPE *skipAssetsWithErrors;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000284670
- (id)init;	// IMP=0x0000000000284610
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSArray *featureNames;
@property(nonatomic, readonly) long long featureLength;
- (id)floatVectorWithEntity:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000284190
- (id)initWithFeatureExtractor:(id)arg1 skipAssetsWithErrors:(_Bool)arg2;	// IMP=0x0000000000283d70

@end
