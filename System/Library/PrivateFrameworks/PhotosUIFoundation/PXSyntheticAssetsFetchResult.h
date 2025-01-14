//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PXSyntheticAssetsFetchResult : NSObject
{
    NSArray *_assets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005b66d
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005b64d
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x000000000005b63d
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x000000000005b62d
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000005b5eb
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000005b5d5
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000005b5bf
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005b5a9
@property(readonly, nonatomic) long long count;
- (id)init;	// IMP=0x000000000005b57a
- (id)initWithAssets:(id)arg1;	// IMP=0x000000000005b507

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

