//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TileMetadata
{
}

+ (id)_predicateForTileType:(long long)arg1;	// IMP=0x00400000001cf40f
+ (id)passUniqueIdentifiersInDatabase:(id)arg1 withTileOfType:(long long)arg2;	// IMP=0x00100000001cf18b
+ (id)insertMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001cee2d
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000001cebfc
+ (id)databaseTable;	// IMP=0x00100000001cebef
- (id)metadata;	// IMP=0x00400000001cf46a
- (long long)type;	// IMP=0x00100000001cf136
- (_Bool)deleteFromDatabase;	// IMP=0x00100000001cf0c1
- (id)initWithMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001cec71

@end
