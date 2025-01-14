//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector;

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetEntry : NSObject
{
    _Bool _assetLockedInhibitsRemoval;	// 8 = 0x8
    MAAutoAssetSelector *_assetSelector;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003ef00
- (void).cxx_destruct;	// IMP=0x000000000003f275
@property(nonatomic) _Bool assetLockedInhibitsRemoval; // @synthesize assetLockedInhibitsRemoval=_assetLockedInhibitsRemoval;
@property(retain, nonatomic) MAAutoAssetSelector *assetSelector; // @synthesize assetSelector=_assetSelector;
- (id)summary;	// IMP=0x000000000003f18e
- (id)description;	// IMP=0x000000000003f17c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f031
- (id)copy;	// IMP=0x000000000003ef08
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003ee63
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003edb2
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 withAssetVersion:(id)arg3 usingDecryptionKey:(id)arg4 assetLockedInhibitsRemoval:(_Bool)arg5;	// IMP=0x000000000003ecd4
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 withAssetVersion:(id)arg3 assetLockedInhibitsRemoval:(_Bool)arg4;	// IMP=0x000000000003ecb2
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 usingDecryptionKey:(id)arg3 assetLockedInhibitsRemoval:(_Bool)arg4;	// IMP=0x000000000003ec8a
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 usingDecryptionKey:(id)arg3;	// IMP=0x000000000003ec62
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 assetLockedInhibitsRemoval:(_Bool)arg3;	// IMP=0x000000000003ec3d
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2 matchingAssetVersion:(id)arg3;	// IMP=0x000000000003ec18
- (id)initForAssetType:(id)arg1 withAssetSpecifier:(id)arg2;	// IMP=0x000000000003ebf0

@end

