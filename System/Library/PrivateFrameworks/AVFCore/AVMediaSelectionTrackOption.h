//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVMediaSelectionOption.h"

@class AVAssetTrack, AVWeakReference, NSArray, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    id _groupID;	// 16 = 0x10
    AVAssetTrack *_track;	// 24 = 0x18
    NSDictionary *_dictionary;	// 32 = 0x20
    AVWeakReference *_weakReferenceToGroup;	// 40 = 0x28
    _Bool _displaysNonForcedSubtitles;	// 48 = 0x30
    NSNumber *_audioCompositionPresetIndex;	// 56 = 0x38
    NSArray *_audioCompositionPresetIndexesForFallbackIDs;	// 64 = 0x40
}

- (int)trackID;	// IMP=0x00000000001446b5
- (id)track;	// IMP=0x00000000001446a4
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;	// IMP=0x0000000000144531
- (id)metadataForFormat:(id)arg1;	// IMP=0x0000000000144514
- (id)availableMetadataFormats;	// IMP=0x00000000001444f7
- (id)commonMetadata;	// IMP=0x00000000001444da
- (id)locale;	// IMP=0x00000000001444bd
- (_Bool)isPlayable;	// IMP=0x00000000001442ba
- (id)mediaSubTypes;	// IMP=0x0000000000143ef6
- (id)_track;	// IMP=0x0000000000143ee5
- (id)mediaType;	// IMP=0x0000000000143ec8
- (id)_audioCompositionPresetIndexesForFallbackIDs;	// IMP=0x0000000000143eb7
- (id)_audioCompositionPresetIndex;	// IMP=0x0000000000143ea6
- (_Bool)displaysNonForcedSubtitles;	// IMP=0x0000000000143e96
- (id)_groupID;	// IMP=0x0000000000143e85
- (id)group;	// IMP=0x0000000000143e68
- (id)dictionary;	// IMP=0x0000000000143e57
- (unsigned long long)hash;	// IMP=0x0000000000143dd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000143cce
- (void)dealloc;	// IMP=0x0000000000143c3e
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;	// IMP=0x0000000000143a43

@end
