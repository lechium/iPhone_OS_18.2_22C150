//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaLibrary, MPModelPlaylist, MPPropertySet, MPSectionedCollection;

__attribute__((visibility("hidden")))
@interface MPModelLibraryPlaylistEditPlaylistDataSource
{
    MPMediaLibrary *_library;	// 8 = 0x8
    MPModelPlaylist *_playlist;	// 16 = 0x10
    MPSectionedCollection *_initialTrackList;	// 24 = 0x18
    MPPropertySet *_playlistPropertySet;	// 32 = 0x20
    _Bool _hasPerformedInitialLoad;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006402e
- (id)_defaultPlaylistEntryPropertySet;	// IMP=0x0000000000063f73
- (void)loadEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063c0b
- (id)description;	// IMP=0x0000000000063bc3
- (id)initWithLibrary:(id)arg1 playlist:(id)arg2 initialTrackList:(id)arg3 playlistEntryProperties:(id)arg4;	// IMP=0x0000000000063880

@end

