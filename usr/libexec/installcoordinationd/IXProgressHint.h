//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

@interface IXProgressHint : NSObject
{
    NSNumber *_compressedAppAssetSizeInBytes;	// 8 = 0x8
    NSNumber *_uncompressedAppAssetSizeInBytes;	// 16 = 0x10
    NSNumber *;	// 24 = 0x18
    NSNumber *_totalODRAssetSizeInBytes;	// 32 = 0x20
    NSNumber *_totalExpectedEssentialAssetSizeInBytes;	// 40 = 0x28
    NSNumber *_loadingPhaseProportion;	// 48 = 0x30
    NSNumber *_installingPhaseProportion;	// 56 = 0x38
    NSNumber *_postProcessingPhaseProportion;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000775c
- (void).cxx_destruct;	// IMP=0x0020000000008ac3
@property(readonly, nonatomic) NSNumber *postProcessingPhaseProportion; // @synthesize postProcessingPhaseProportion=_postProcessingPhaseProportion;
@property(readonly, nonatomic) NSNumber *installingPhaseProportion; // @synthesize installingPhaseProportion=_installingPhaseProportion;
@property(readonly, nonatomic) NSNumber *loadingPhaseProportion; // @synthesize loadingPhaseProportion=_loadingPhaseProportion;
@property(retain, nonatomic) NSNumber *totalExpectedEssentialAssetSizeInBytes; // @synthesize totalExpectedEssentialAssetSizeInBytes=_totalExpectedEssentialAssetSizeInBytes;
@property(retain, nonatomic) NSNumber *totalODRAssetSizeInBytes; // @synthesize totalODRAssetSizeInBytes=_totalODRAssetSizeInBytes;
@property(retain, nonatomic) NSNumber *filesInAppAssetCount; // @synthesize filesInAppAssetCount=_filesInAppAssetCount;
@property(retain, nonatomic) NSNumber *uncompressedAppAssetSizeInBytes; // @synthesize uncompressedAppAssetSizeInBytes=_uncompressedAppAssetSizeInBytes;
@property(retain, nonatomic) NSNumber *compressedAppAssetSizeInBytes; // @synthesize compressedAppAssetSizeInBytes=_compressedAppAssetSizeInBytes;
- (id)description;	// IMP=0x0010000000008933
- (_Bool)setPhaseProportionsForLoadingPhase:(id)arg1 installingPhase:(id)arg2 postProcessingPhase:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000854f
@property(readonly, copy, nonatomic) NSDictionary *progressProportionsDictionaryForLaunchServices;
- (unsigned long long)hash;	// IMP=0x001000000000825e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000007d3e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000007b85
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000799d
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000007793
- (id)init;	// IMP=0x0010000000007764

@end

