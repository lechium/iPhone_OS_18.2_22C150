//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAssetCache.h"

@class AVAssetDownloadCacheInternal;

__attribute__((visibility("hidden")))
@interface AVAssetDownloadCache : AVAssetCache
{
    AVAssetDownloadCacheInternal *_internal;	// 8 = 0x8
}

- (_Bool)isDefunct;	// IMP=0x000000000013760a
- (void)dealloc;	// IMP=0x00000000001375aa
- (_Bool)isPlayableOffline;	// IMP=0x000000000013752e
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;	// IMP=0x0000000000137255
- (id)URL;	// IMP=0x00000000001371e1
- (id)_asset;	// IMP=0x00000000001371c8
- (id)initWithAsset:(id)arg1;	// IMP=0x0000000000137125

@end

