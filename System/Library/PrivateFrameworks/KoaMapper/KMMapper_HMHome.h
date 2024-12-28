//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface KMMapper_HMHome : NSObject
{
    KVItemBuilder *_builder;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
}

+ (Class)externalObjectClass;	// IMP=0x0010000000015808
- (void).cxx_destruct;	// IMP=0x00000000000157e0
- (_Bool)_addItemWithItemId:(id)arg1 assistantHomeKitId:(id)arg2 fieldType:(long long)arg3 name:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000155ce
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000014463
- (long long)targetItemType;	// IMP=0x0000000000014458
- (id)init;	// IMP=0x0000000000014402

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
