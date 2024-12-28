//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapItemStorage, MISSING_TYPE, NSNumber, NSString;

@interface MSHistoryMarkedLocation
{
    MISSING_TYPE *_customName;	// 0 = 0x0
    MISSING_TYPE *_floorOrdinal;	// 0 = 0x0
    MISSING_TYPE *_latitude;	// 0 = 0x0
    MISSING_TYPE *_longitude;	// 0 = 0x0
    MISSING_TYPE *_mapItemStorage;	// 0 = 0x0
    MISSING_TYPE *_muid;	// 0 = 0x0
}

+ (Class)managedClass;	// IMP=0x0040000000009fc0
- (void).cxx_destruct;	// IMP=0x000000000000cb10
- (id)initWithObject:(id)arg1 store:(id)arg2 lazyLoad:(_Bool)arg3;	// IMP=0x000000000000ca20
@property(nonatomic, retain) NSNumber *muid;
@property(nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property(nonatomic, retain) NSNumber *longitude;
@property(nonatomic, retain) NSNumber *latitude;
@property(nonatomic) int floorOrdinal;
@property(nonatomic, copy) NSString *customName;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1 lazyLoad:(_Bool)arg2;	// IMP=0x000000000000a2b0
- (id)initWithStore:(id)arg1 customName:(id)arg2 floorOrdinal:(int)arg3 latitude:(id)arg4 longitude:(id)arg5 mapItemStorage:(id)arg6 muid:(id)arg7;	// IMP=0x0000000000009e80
- (id)initWithCustomName:(id)arg1 floorOrdinal:(int)arg2 latitude:(id)arg3 longitude:(id)arg4 mapItemStorage:(id)arg5 muid:(id)arg6;	// IMP=0x00000000000096a0

@end
