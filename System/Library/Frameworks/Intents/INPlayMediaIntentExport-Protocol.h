//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INMediaItem, INMediaSearch, INPrivatePlayMediaIntentData, NSArray, NSDate, NSNumber, NSString;

@protocol INPlayMediaIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property(copy, nonatomic) NSString *proxiedBundleIdentifier;
@property(nonatomic) long long parsecCategory;
@property(copy, nonatomic) NSArray *alternativeResults;
@property(copy, nonatomic) NSArray *audioSearchResults;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) INMediaSearch *mediaSearch;
@property(copy, nonatomic) NSNumber *playbackSpeed;
@property(nonatomic) long long playbackQueueLocation;
@property(copy, nonatomic) NSString *recoID;
@property(copy, nonatomic) NSArray *buckets;
@property(copy, nonatomic) NSDate *expirationDate;
@property(copy, nonatomic) NSNumber *resumePlayback;
@property(nonatomic) long long playbackRepeatMode;
@property(copy, nonatomic) NSNumber *playShuffled;
@property(copy, nonatomic) INMediaItem *mediaContainer;
@property(copy, nonatomic) NSArray *mediaItems;
- (id)init;
@end

