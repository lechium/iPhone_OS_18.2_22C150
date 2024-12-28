//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsSuggestionsEntry, NSString, UIImage, _TtC4Maps16MapsFavoriteItem;

@interface SuggestionShortcutsRowCellModel
{
    UIImage *_image;	// 24 = 0x18
    unsigned long long _imageCount;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_subtitle;	// 48 = 0x30
    MapsSuggestionsEntry *_entryLegacy;	// 56 = 0x38
    _TtC4Maps16MapsFavoriteItem *_entry;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000002ee1d6
@property(readonly, nonatomic) _TtC4Maps16MapsFavoriteItem *entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) MapsSuggestionsEntry *entryLegacy; // @synthesize entryLegacy=_entryLegacy;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x00100000002ee1a2
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000002ee058
- (_Bool)_shouldFetchMissingImage;	// IMP=0x00100000002ede9a
- (void)_setFetchedImage:(id)arg1;	// IMP=0x00100000002ede0f
- (void)_fetchImageWithImageCount:(unsigned long long)arg1 retryCount:(unsigned long long)arg2;	// IMP=0x00100000002ed840
- (void)_sceneDidActivate:(id)arg1;	// IMP=0x00100000002ed82e
- (void)_updateTitlesFromEntry;	// IMP=0x00100000002ed755
- (void)fetchImageIfMissing;	// IMP=0x00100000002ed695
- (void)fetchImage;	// IMP=0x00100000002ed66f
- (_Bool)vibrantBackground;	// IMP=0x00100000002ed622
- (id)image;	// IMP=0x00100000002ed5eb
- (id)subtitleColor;	// IMP=0x00100000002ed559
- (id)subtitle;	// IMP=0x00100000002ed544
- (id)title;	// IMP=0x00100000002ed52f
- (id)_maps_diffableDataSourceIdentifier;	// IMP=0x00100000002ed4d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002ed3fd
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x00100000002ed2d2
- (id)initWithMapsFavoriteItem:(id)arg1;	// IMP=0x00100000002ed129
- (id)initWithMapsSuggestionsEntry:(id)arg1;	// IMP=0x00100000002ecf80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
