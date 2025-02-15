//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface PGMusicCurationRecentlyUsedSongs : NSObject
{
    MISSING_TYPE *mostRecentlyUsedSongIDDateMap;	// 8 = 0x8
    MISSING_TYPE *recentlyUsedToExclude;	// 16 = 0x10
}

+ (id)recentlyUsedFlexMusicSongsFromPhotoLibrary:(id)arg1;	// IMP=0x0060000000044980
+ (id)recentlyUsedAppleMusicSongsFromPhotoLibrary:(id)arg1;	// IMP=0x0060000000044910
+ (id)recentlyUsedAppleMusicSongsForCollectionsFromPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000044a40
+ (id)recentlyUsedFlexMusicSongsForCollectionsFromPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000044a10
- (void).cxx_destruct;	// IMP=0x0000000000044030
- (id)init;	// IMP=0x0000000000043fa0
- (void)appendWithOtherRecentlyUsed:(id)arg1;	// IMP=0x0000000000043e80
- (id)allEntries;	// IMP=0x0000000000043cc0
- (void)addSongIDs:(id)arg1 date:(id)arg2;	// IMP=0x0000000000043b90
- (void)addWithSongIDDateMap:(id)arg1;	// IMP=0x00000000000431f0
- (void)addMusicCuration:(id)arg1 date:(id)arg2;	// IMP=0x00000000000441a0
- (void)addFlexMusicCuration:(id)arg1 date:(id)arg2;	// IMP=0x00000000000443b0
@property(nonatomic, readonly) NSString *description;

@end

