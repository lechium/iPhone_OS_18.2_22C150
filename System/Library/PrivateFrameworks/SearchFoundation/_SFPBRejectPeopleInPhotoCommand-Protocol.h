//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBPerson, _SFPBPhotosLibraryImage;

@protocol _SFPBRejectPeopleInPhotoCommand <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage;
@property(copy, nonatomic) NSArray *rejectedPeoples;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPerson *)rejectedPeopleAtIndex:(unsigned long long)arg1;
- (unsigned long long)rejectedPeopleCount;
- (void)addRejectedPeople:(_SFPBPerson *)arg1;
- (void)clearRejectedPeople;
@end
