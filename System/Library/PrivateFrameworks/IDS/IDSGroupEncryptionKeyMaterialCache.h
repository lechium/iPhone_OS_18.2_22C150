//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSGroupEncryptionKeyMaterialCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_cache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004f993
- (void)enumerateCachedKeyMaterialUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004f813
- (void)invalidateKeyMaterialByKeyIndexes:(id)arg1;	// IMP=0x000000000004f406
- (void)recvKeyMaterial:(id)arg1;	// IMP=0x000000000004f2f2
- (id)init;	// IMP=0x000000000004f21a

@end
