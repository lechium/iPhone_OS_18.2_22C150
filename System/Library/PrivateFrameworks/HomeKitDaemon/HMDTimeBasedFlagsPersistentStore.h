//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HMDPersistentStore;

__attribute__((visibility("hidden")))
@interface HMDTimeBasedFlagsPersistentStore : NSObject
{
    id <HMDPersistentStore> _persistentStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000022bc88
@property(readonly, nonatomic) __weak id <HMDPersistentStore> persistentStore; // @synthesize persistentStore=_persistentStore;
- (id)unarchiveLegacyEventFlags;	// IMP=0x000000000022bb34
- (id)unarchive;	// IMP=0x000000000022b872
- (void)archiveDictionary:(id)arg1;	// IMP=0x000000000022b77f
- (id)initWithPersistentStore:(id)arg1;	// IMP=0x000000000022b71b

@end
