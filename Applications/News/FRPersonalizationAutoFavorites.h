//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface FRPersonalizationAutoFavorites : NSObject
{
    NSDictionary *_autoFavoriteTagIDsToScores;	// 8 = 0x8
    NSSet *_groupableFavoriteTagIDs;	// 16 = 0x10
    NSSet *_defaultCandidates;	// 24 = 0x18
    NSSet *_internalSignalAutoFavoriteCandidates;	// 32 = 0x20
    NSSet *_existingInternalSignalAutoFavoriteCandidates;	// 40 = 0x28
    NSSet *_groupableCandidates;	// 48 = 0x30
    NSSet *_portraitAutoFavoriteCandidates;	// 56 = 0x38
    NSSet *_appUsageAutoFavoriteCandidates;	// 64 = 0x40
    NSSet *_safariAutoFavoriteCandidates;	// 72 = 0x48
    NSSet *_locationAutoFavoriteCandidates;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002b6be
- (void).cxx_destruct;	// IMP=0x002000000002b7c0
@property(copy, nonatomic) NSSet *locationAutoFavoriteCandidates; // @synthesize locationAutoFavoriteCandidates=_locationAutoFavoriteCandidates;
@property(copy, nonatomic) NSSet *safariAutoFavoriteCandidates; // @synthesize safariAutoFavoriteCandidates=_safariAutoFavoriteCandidates;
@property(copy, nonatomic) NSSet *appUsageAutoFavoriteCandidates; // @synthesize appUsageAutoFavoriteCandidates=_appUsageAutoFavoriteCandidates;
@property(copy, nonatomic) NSSet *portraitAutoFavoriteCandidates; // @synthesize portraitAutoFavoriteCandidates=_portraitAutoFavoriteCandidates;
@property(copy, nonatomic) NSSet *groupableCandidates; // @synthesize groupableCandidates=_groupableCandidates;
@property(copy, nonatomic) NSSet *existingInternalSignalAutoFavoriteCandidates; // @synthesize existingInternalSignalAutoFavoriteCandidates=_existingInternalSignalAutoFavoriteCandidates;
@property(copy, nonatomic) NSSet *internalSignalAutoFavoriteCandidates; // @synthesize internalSignalAutoFavoriteCandidates=_internalSignalAutoFavoriteCandidates;
@property(copy, nonatomic) NSSet *defaultCandidates; // @synthesize defaultCandidates=_defaultCandidates;
@property(copy, nonatomic) NSSet *groupableFavoriteTagIDs; // @synthesize groupableFavoriteTagIDs=_groupableFavoriteTagIDs;
@property(copy, nonatomic) NSDictionary *autoFavoriteTagIDsToScores; // @synthesize autoFavoriteTagIDsToScores=_autoFavoriteTagIDsToScores;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002b46e
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002b0f1
- (id)activeInternalUsageAutoFavorites;	// IMP=0x001000000002ae5e
- (id)activeLocationAutoFavorites;	// IMP=0x001000000002acb9
- (id)activePortraitAutoFavorites;	// IMP=0x001000000002ab51
- (id)activeSafariAutoFavorites;	// IMP=0x001000000002aa18
- (id)activeAppUsageAutoFavorites;	// IMP=0x001000000002a968
@property(readonly, copy, nonatomic) NSSet *autoFavoriteTagIDs;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002a6bf

@end
