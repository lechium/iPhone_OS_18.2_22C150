//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapItemStorage, MISSING_TYPE, NSNumber, NSString, NSUUID;

@interface _TtC8MapsSync24MapsSyncHistoryPlaceItem
{
    MISSING_TYPE *_mapItemStorage;	// 0 = 0x0
    MISSING_TYPE *_supersededSearchId;	// 0 = 0x0
    MISSING_TYPE *_latitude;	// 0 = 0x0
    MISSING_TYPE *_longitude;	// 0 = 0x0
    MISSING_TYPE *_muid;	// 0 = 0x0
}

+ (void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00600000000d64f0
- (void).cxx_destruct;	// IMP=0x00000000000d72a0
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000d7150
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d6fa0
- (Class)managedObjectClass;	// IMP=0x00000000000d6ee0
- (Class)mutableObjectClass;	// IMP=0x00000000000d6ed0
- (void)setPropertiesWithObject:(id)arg1;	// IMP=0x00000000000d6e70
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d6b40
@property(nonatomic, readonly) NSNumber *muid;
@property(nonatomic, readonly) NSNumber *longitude;
@property(nonatomic, readonly) NSNumber *latitude;
@property(nonatomic, readonly) NSUUID *supersededSearchId;
@property(nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property(nonatomic, readonly) NSString *description;

@end

