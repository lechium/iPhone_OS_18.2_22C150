//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBPerson, _SFPBPhotosLibraryImage, _SFPBPunchout, _SFPBScene;

@protocol _SFPBShowPhotosOneUpViewCommand <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBPunchout *photoFilePunchout;
@property(copy, nonatomic) NSArray *matchedPeoples;
@property(copy, nonatomic) NSArray *matchedScenes;
@property(retain, nonatomic) _SFPBPerson *matchedPerson;
@property(retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPerson *)matchedPeopleAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedPeopleCount;
- (void)addMatchedPeople:(_SFPBPerson *)arg1;
- (void)clearMatchedPeople;
- (_SFPBScene *)matchedScenesAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedScenesCount;
- (void)addMatchedScenes:(_SFPBScene *)arg1;
- (void)clearMatchedScenes;
@end
