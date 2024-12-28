//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapItemStorage, MISSING_TYPE, NSData, NSDate, NSNumber, NSString, NSUUID;

@interface MSCollectionPlaceItem
{
    MISSING_TYPE *_customName;	// 0 = 0x0
    MISSING_TYPE *_droppedPinCoordinate;	// 0 = 0x0
    MISSING_TYPE *_droppedPinFloorOrdinal;	// 0 = 0x0
    MISSING_TYPE *_latitude;	// 0 = 0x0
    MISSING_TYPE *_longitude;	// 0 = 0x0
    MISSING_TYPE *_mapItemAddress;	// 0 = 0x0
    MISSING_TYPE *_mapItemCategory;	// 0 = 0x0
    MISSING_TYPE *_mapItemLastRefreshed;	// 0 = 0x0
    MISSING_TYPE *_mapItemName;	// 0 = 0x0
    MISSING_TYPE *_muid;	// 0 = 0x0
    MISSING_TYPE *_origin;	// 0 = 0x0
    MISSING_TYPE *_originalIdentifier;	// 0 = 0x0
    MISSING_TYPE *_placeItemNote;	// 0 = 0x0
    MISSING_TYPE *_type;	// 0 = 0x0
    MISSING_TYPE *_mapItemStorage;	// 0 = 0x0
}

+ (Class)managedClass;	// IMP=0x0040000000035090
+ (id)strippedMapItemWith:(id)arg1;	// IMP=0x00400000000c1db0
+ (id)optionsWith:(id)arg1;	// IMP=0x00400000000c1d40
- (void).cxx_destruct;	// IMP=0x000000000003c0d0
- (id)initWithObject:(id)arg1 store:(id)arg2 lazyLoad:(_Bool)arg3;	// IMP=0x000000000003bf60
@property(nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property(nonatomic) short type;
@property(nonatomic, copy) NSString *placeItemNote;
@property(nonatomic, copy) NSUUID *originalIdentifier;
@property(nonatomic) short origin;
@property(nonatomic, retain) NSNumber *muid;
@property(nonatomic, copy) NSString *mapItemName;
@property(nonatomic, copy) NSDate *mapItemLastRefreshed;
@property(nonatomic, copy) NSString *mapItemCategory;
@property(nonatomic, copy) NSString *mapItemAddress;
@property(nonatomic, retain) NSNumber *longitude;
@property(nonatomic, retain) NSNumber *latitude;
@property(nonatomic) int droppedPinFloorOrdinal;
@property(nonatomic, copy) NSData *droppedPinCoordinate;
@property(nonatomic, copy) NSString *customName;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1 lazyLoad:(_Bool)arg2;	// IMP=0x0000000000035820
- (id)initWithStore:(id)arg1 customName:(id)arg2 droppedPinCoordinate:(id)arg3 droppedPinFloorOrdinal:(int)arg4 latitude:(id)arg5 longitude:(id)arg6 mapItemAddress:(id)arg7 mapItemCategory:(id)arg8 mapItemLastRefreshed:(id)arg9 mapItemName:(id)arg10 muid:(id)arg11 origin:(short)arg12 originalIdentifier:(id)arg13 placeItemNote:(id)arg14 type:(short)arg15;	// IMP=0x0000000000034d40
- (id)initWithCustomName:(id)arg1 droppedPinCoordinate:(id)arg2 droppedPinFloorOrdinal:(int)arg3 latitude:(id)arg4 longitude:(id)arg5 mapItemAddress:(id)arg6 mapItemCategory:(id)arg7 mapItemLastRefreshed:(id)arg8 mapItemName:(id)arg9 muid:(id)arg10 origin:(short)arg11 originalIdentifier:(id)arg12 placeItemNote:(id)arg13 type:(short)arg14;	// IMP=0x0000000000033e00

@end
