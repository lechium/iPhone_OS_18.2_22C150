//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _HMAccessoryCollectionSettingItemClassManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_classes;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00400000002f7386
+ (id)defaultItemValueClasses;	// IMP=0x00400000002f72bb
- (void).cxx_destruct;	// IMP=0x00000000002f72ab
- (void)removeItemValueClassesForKeyPath:(id)arg1;	// IMP=0x00000000002f7242
- (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000002f716d
- (id)itemValueClassesForKeyPath:(id)arg1;	// IMP=0x00000000002f7094
- (_Bool)hasCustomItemValueClassesForKeyPath:(id)arg1;	// IMP=0x00000000002f700f
- (id)init;	// IMP=0x00000000002f6fa9

@end

