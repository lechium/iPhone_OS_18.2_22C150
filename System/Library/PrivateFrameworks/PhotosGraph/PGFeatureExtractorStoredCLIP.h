//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PGAssetFeatureExtractor.h"

@class NSArray, NSString;

@interface PGFeatureExtractorStoredCLIP : PGAssetFeatureExtractor
{
}

- (id)init;	// IMP=0x000000000020dfa0
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSArray *featureNames;
@property(nonatomic, readonly) long long featureLength;
- (id)floatVectorWithEntity:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020de00

@end
