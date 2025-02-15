//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsSubscription/NFCopying-Protocol.h>
#import <NewsSubscription/NSObject-Protocol.h>

@class FCAssetHandle, NSArray, NSDate, NSString;
@protocol FCPuzzleTypeProviding;

@protocol FCPuzzleProviding <NSObject, NFCopying>
@property(readonly, nonatomic) unsigned long long behaviorFlags;
@property(readonly, nonatomic) _Bool ignoreFromStatsAndStreaks;
@property(readonly, nonatomic) _Bool showInfoModalOnFirstPlay;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *teaserNumber;
@property(readonly, nonatomic) NSString *teaserDirection;
@property(readonly, nonatomic) NSString *teaserInfo;
@property(readonly, nonatomic) NSString *teaserAnswer;
@property(readonly, nonatomic) NSString *teaserClue;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic, getter=isDraft) _Bool draft;
@property(readonly, nonatomic, getter=isDeprecated) _Bool deprecated;
@property(readonly, nonatomic) NSDate *loadDate;
@property(readonly, nonatomic) FCAssetHandle *thumbnailLargeImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *thumbnailSmallImageAssetHandle;
@property(readonly, copy, nonatomic) NSArray *relatedPuzzleIDs;
@property(readonly, copy, nonatomic) NSString *difficultyDescription;
@property(readonly, nonatomic) long long difficulty;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, copy, nonatomic) NSString *publishDateString;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSArray *authors;
@property(readonly, copy, nonatomic) NSString *dataResourceID;
@property(readonly, retain, nonatomic) id <FCPuzzleTypeProviding> puzzleType;
@property(readonly, copy, nonatomic) NSString *puzzleDescription;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

