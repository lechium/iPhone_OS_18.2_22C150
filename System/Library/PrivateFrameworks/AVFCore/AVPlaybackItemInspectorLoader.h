//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemInspectorLoader
{
    struct OpaqueFigPlaybackItem *_playbackItem;	// 72 = 0x48
    NSArray *_trackIDs;	// 80 = 0x50
    _Bool _shouldCacheDuration;	// 88 = 0x58
    CDStruct_1b6d18a9 _cachedDuration;	// 92 = 0x5c
}

- (CDStruct_1b6d18a9)duration;	// IMP=0x0000000000121bf9
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;	// IMP=0x0000000000121b4e
- (id)_playbackItemPropertiesForKeys:(id)arg1;	// IMP=0x0000000000121aa7
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// IMP=0x0000000000121a7b
- (_Bool)_inspectionRequiresAFormatReader;	// IMP=0x0000000000121a73
- (struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)arg1;	// IMP=0x0000000000121a10
- (Class)_classForTrackInspectors;	// IMP=0x00000000001219ff
@property(readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem *playbackItem;
- (void)cancelLoading;	// IMP=0x000000000012198f
- (id)assetInspector;	// IMP=0x000000000012193a
- (unsigned long long)hash;	// IMP=0x00000000001218e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012186f
- (void)dealloc;	// IMP=0x000000000012180b
- (void)_removeFigObjectNotifications;	// IMP=0x0000000000121743
- (void)_addFigObjectNotifications;	// IMP=0x00000000001213e7
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem *)arg2 trackIDs:(id)arg3 dynamicBehavior:(_Bool)arg4;	// IMP=0x0000000000121320

@end
