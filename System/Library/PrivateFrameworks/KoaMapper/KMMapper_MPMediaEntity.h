//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface KMMapper_MPMediaEntity : NSObject
{
    KVItemBuilder *_builder;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
}

+ (Class)externalObjectClass;	// IMP=0x00100000000134e0
- (void).cxx_destruct;	// IMP=0x00000000000134b8
- (_Bool)_itemsFromMediaPlaylist:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013353
- (_Bool)_itemsFromMediaItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013260
- (_Bool)_mapMusicVideoItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012faf
- (_Bool)_mapMovieItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012e4a
- (_Bool)_mapTVShowItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012b99
- (_Bool)_mapAudioBookItem:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000128e8
- (_Bool)_mapPodcastItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012370
- (_Bool)_mapMusicItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011df8
- (_Bool)_addItemWithItemId:(id)arg1 itemIdType:(long long)arg2 fields:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000011949
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000011881
- (long long)targetItemType;	// IMP=0x0000000000011876
- (id)init;	// IMP=0x0000000000011820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

