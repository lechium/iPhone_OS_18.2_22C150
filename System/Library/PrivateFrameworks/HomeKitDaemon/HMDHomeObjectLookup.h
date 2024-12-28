//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHome;

__attribute__((visibility("hidden")))
@interface HMDHomeObjectLookup
{
    HMDHome *_home;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0060000000918840
- (void).cxx_destruct;	// IMP=0x000000000091882f
@property __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x0000000000918788
- (void)_scanUsers;	// IMP=0x00000000009184f0
- (void)_scanMediaSystems;	// IMP=0x000000000091829d
- (void)_scanResidentDevices;	// IMP=0x0000000000918081
- (void)_scanTriggers;	// IMP=0x0000000000917cbb
- (void)_scanServiceGroups;	// IMP=0x0000000000917ac0
- (void)_scanActionSets;	// IMP=0x00000000009176e4
- (void)_scanZones;	// IMP=0x00000000009174e9
- (void)_scanRooms;	// IMP=0x0000000000917215
- (void)_scanSettings:(id)arg1;	// IMP=0x0000000000917016
- (void)_scanAccessoriesAndServices;	// IMP=0x00000000009169dd
- (void)scanObjects;	// IMP=0x000000000091684e
- (id)initWithHome:(id)arg1;	// IMP=0x00000000009167bc

@end
