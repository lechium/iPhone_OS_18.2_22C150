//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (GKCollectionUtils)
- (unsigned long long)_gkIndexOfObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00600000000037b3
- (_Bool)_gkContainsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0060000000003790
- (id)_gkFoldWithInitialValue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00600000000035b8
- (id)_gkFirstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0060000000003566
- (id)_gkFirstObject;	// IMP=0x0060000000003554
- (id)_gkDistinctValuesForKeyPath:(id)arg1;	// IMP=0x0060000000003380
- (id)_gkValuesForKeyPath:(id)arg1;	// IMP=0x00600000000031ac
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;	// IMP=0x0060000000002ecc
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;	// IMP=0x0060000000002eb8
- (id)_gkSubarraysByKeyWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000002cd1
- (id)_gkFilterWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000002b98
- (id)_gkMapWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000002a3a
- (id)_gkMapConcurrentlyWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00600000000028e0
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x00600000000261eb
- (void)_gkUpdateInternalPlayersScopedIDs:(CDUnknownBlockType)arg1;	// IMP=0x006000000007f706
- (void)_gkValidatePlayersForReturnFromAPI;	// IMP=0x00600000000803be
- (id)_gkInternalsFromUncheckedPlayers;	// IMP=0x0060000000080390
- (id)_gkInternalsFromPlayers;	// IMP=0x006000000008012d
- (id)_gkPlayersFromInternals;	// IMP=0x006000000007ff94
- (id)_gkPlayersIDsFromInternals;	// IMP=0x006000000007fe02
- (id)_gkPlayersIDsFromPlayers;	// IMP=0x006000000007fc4a
- (id)_gkIncompletePlayersFromPlayerIDs;	// IMP=0x006000000007fab1
- (id)_gkGuestPlayersFromPlayers;	// IMP=0x0060000000080805
- (id)_gkNonGuestPlayersFromPlayers;	// IMP=0x006000000008078b
@end

