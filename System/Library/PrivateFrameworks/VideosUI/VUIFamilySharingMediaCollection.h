//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaCollection.h"

@class NSArray, NSString, VUIFamilySharingEntity;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingMediaCollection : VUIMediaCollection
{
    NSString *_artworkURL;	// 8 = 0x8
    NSString *_amsShowIdentifier;	// 16 = 0x10
    NSString *_amsSeasonIdentifier;	// 24 = 0x18
    NSArray *_seasonNumbers;	// 32 = 0x20
    VUIFamilySharingEntity *_entity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000351fbb
@property(retain, nonatomic) VUIFamilySharingEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSArray *seasonNumbers; // @synthesize seasonNumbers=_seasonNumbers;
@property(retain, nonatomic) NSString *amsSeasonIdentifier; // @synthesize amsSeasonIdentifier=_amsSeasonIdentifier;
@property(retain, nonatomic) NSString *amsShowIdentifier; // @synthesize amsShowIdentifier=_amsShowIdentifier;
@property(retain, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
- (id)showTitle;	// IMP=0x0000000000351ee5
- (id)duration;	// IMP=0x0000000000351daa
- (id)genreTitle;	// IMP=0x0000000000351d5a
- (id)releaseYear;	// IMP=0x0000000000351c8f
- (id)releaseDate;	// IMP=0x0000000000351c3f
- (id)contentDescription;	// IMP=0x0000000000351bef
- (id)contentRating;	// IMP=0x0000000000351b9f
- (id)seasonCount;	// IMP=0x0000000000351afc
- (id)seasonNumber;	// IMP=0x000000000035189e
- (id)title;	// IMP=0x00000000003517d3
- (id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 mediaEntityType:(id)arg3;	// IMP=0x000000000035168b

@end
