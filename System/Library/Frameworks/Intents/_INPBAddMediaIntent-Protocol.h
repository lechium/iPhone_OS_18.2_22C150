//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBMediaDestination, _INPBMediaItemValue, _INPBMediaSearch, _INPBPrivateAddMediaIntentData;

@protocol _INPBAddMediaIntent <NSObject>
+ (Class)mediaItemsType;
@property(readonly, nonatomic) _Bool hasPrivateAddMediaIntentData;
@property(retain, nonatomic) _INPBPrivateAddMediaIntentData *privateAddMediaIntentData;
@property(readonly, nonatomic) _Bool hasMediaSearch;
@property(retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
@property(copy, nonatomic) NSArray *mediaItems;
@property(readonly, nonatomic) _Bool hasMediaDestination;
@property(retain, nonatomic) _INPBMediaDestination *mediaDestination;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
- (_INPBMediaItemValue *)mediaItemsAtIndex:(unsigned long long)arg1;
- (void)addMediaItems:(_INPBMediaItemValue *)arg1;
- (void)clearMediaItems;
@end

