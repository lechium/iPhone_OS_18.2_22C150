//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData, NSString;

@interface _TtC8MapsSync26MapsSyncHistoryTransitItem
{
    MISSING_TYPE *_transitLineStorage;	// 0 = 0x0
    MISSING_TYPE *_muid;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000c2960
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000c28c0
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2770
- (Class)managedObjectClass;	// IMP=0x00000000000c2680
- (Class)mutableObjectClass;	// IMP=0x00000000000c2660
- (void)setPropertiesWithObject:(id)arg1;	// IMP=0x00000000000c2600
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c2430
@property(nonatomic, readonly) unsigned long long muid;
@property(nonatomic, readonly) NSData *transitLineItemStorageData;
@property(nonatomic, readonly) NSString *description;

@end
