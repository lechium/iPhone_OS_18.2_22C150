//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class MapsSyncManagedCollectionPlaceItem, MapsSyncManagedFavoriteItem, MapsSyncManagedHistoryPlaceItem, NSData, NSDate;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedMixinMapItem : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0040000000008410

// Remaining properties
@property(nonatomic, retain) MapsSyncManagedCollectionPlaceItem *collectionPlaceItem; // @dynamic collectionPlaceItem;
@property(nonatomic, copy) NSDate *createTime; // @dynamic createTime;
@property(nonatomic, retain) MapsSyncManagedFavoriteItem *favoriteItem; // @dynamic favoriteItem;
@property(nonatomic, retain) MapsSyncManagedHistoryPlaceItem *historyPlaceItem; // @dynamic historyPlaceItem;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic, copy) NSData *mapItemStorage; // @dynamic mapItemStorage;
@property(nonatomic, copy) NSDate *modificationTime; // @dynamic modificationTime;

@end

