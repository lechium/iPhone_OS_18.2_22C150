//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol STKeyValueStore;

@interface STPersistentFamilyMemberGenesisStateStore : NSObject
{
    id <STKeyValueStore> _keyValueStore;	// 8 = 0x8
    NSDictionary *_genesisStateItemsByUserDSID;	// 16 = 0x10
}

+ (id)_loadFromKeyValueStore:(id)arg1;	// IMP=0x0020000000063aba
- (void).cxx_destruct;	// IMP=0x0020000000063d36
@property(retain, nonatomic) NSDictionary *genesisStateItemsByUserDSID; // @synthesize genesisStateItemsByUserDSID=_genesisStateItemsByUserDSID;
@property(readonly) id <STKeyValueStore> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
- (void)_saveToKeyValueStore;	// IMP=0x00100000000639a8
- (id)readFamilyMemberGenesisStateItems;	// IMP=0x0010000000063924
- (void)writeFamilyMemberGenesisStateItems:(id)arg1;	// IMP=0x00100000000636b6
- (id)initWithKeyValueStore:(id)arg1;	// IMP=0x0010000000063614

@end

