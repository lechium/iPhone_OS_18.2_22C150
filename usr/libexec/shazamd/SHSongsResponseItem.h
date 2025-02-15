//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface SHSongsResponseItem : NSObject
{
    NSDictionary *_songItemDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004869f
@property(readonly, nonatomic) NSDictionary *songItemDictionary; // @synthesize songItemDictionary=_songItemDictionary;
- (struct CGSize)targetArtworkImageSizeFromOriginalSize:(struct CGSize)arg1;	// IMP=0x001000000004862e
- (id)artworkURLFromDictionary:(id)arg1;	// IMP=0x0010000000048579
- (id)extractIDsFromRelation:(id)arg1;	// IMP=0x001000000004832e
- (id)rawResponseWithCampaignToken:(id)arg1;	// IMP=0x00100000000480ff
@property(readonly, copy, nonatomic) NSArray *musicVideoRelationIDs;
@property(readonly, copy, nonatomic) NSArray *lyricsRelationIDs;
@property(readonly, copy, nonatomic) NSString *isrc;
@property(readonly, copy, nonatomic) NSString *albumName;
@property(readonly, nonatomic) _Bool isExplicitContent;
@property(readonly, nonatomic) NSDate *releaseDate;
@property(readonly, nonatomic) NSArray *genreNames;
@property(readonly, nonatomic) NSDictionary *spatialOffsets;
// Error: Property attributes should begin with the type ('T') attribute, property name: durationInMilliseconds
// Property attributes: (null)

@property(readonly, nonatomic) NSURL *hapticsURL;
@property(readonly, copy, nonatomic) NSString *appleMusicURLString;
@property(readonly, nonatomic) NSURL *artworkURL;
@property(readonly, copy, nonatomic) NSString *appleMusicID;
- (id)initWithSongItemDictionary:(id)arg1;	// IMP=0x0010000000047882

@end

