//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemTrackInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;	// 32 = 0x20
    int _trackID;	// 40 = 0x28
    unsigned int _mediaType;	// 44 = 0x2c
    AVWeakReference *_weakReferenceToAsset;	// 48 = 0x30
}

- (unsigned long long)hash;	// IMP=0x000000000012d4e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012d449
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000012d431
- (struct CGAffineTransform)preferredTransform;	// IMP=0x000000000012d3f0
- (struct CGSize)dimensions;	// IMP=0x000000000012d3d4
- (struct CGSize)naturalSize;	// IMP=0x000000000012d3b8
- (float)peakDataRate;	// IMP=0x000000000012d3af
- (float)estimatedDataRate;	// IMP=0x000000000012d38a
- (CDStruct_e83c9415)timeRange;	// IMP=0x000000000012d32e
- (_Bool)isEnabled;	// IMP=0x000000000012d30c
- (id)formatDescriptions;	// IMP=0x000000000012d2f0
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x000000000012d27a
- (struct OpaqueFigPlaybackItem *)_playbackItem;	// IMP=0x000000000012d269
- (id)mediaType;	// IMP=0x000000000012d217
- (unsigned int)_figMediaType;	// IMP=0x000000000012d207
- (int)trackID;	// IMP=0x000000000012d1f7
- (id)asset;	// IMP=0x000000000012d1da
- (void)dealloc;	// IMP=0x000000000012d183
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x000000000012cfc3

@end
