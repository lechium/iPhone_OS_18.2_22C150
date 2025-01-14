//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCoreDataCloudTransformableLocalModelOnly : NSObject
{
}

+ (void)addToUpdates:(id)arg1 objectID:(id)arg2 properties:(id)arg3;	// IMP=0x0010000000f7edc6
+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000f7edbe
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000f7ece8
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0010000000f7ece0
+ (id)createWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000f7ec1c
+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000f7eb58
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000f7ea82
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000f7e9ac
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0010000000f7e8df
+ (id)logCategory;	// IMP=0x0010000000f7e8c6
+ (id)new;	// IMP=0x0010000000f7e81e
- (id)createLocalModelWithContext:(id)arg1;	// IMP=0x0000000000f7f1a2
- (id)fetchLocalModelWithContext:(id)arg1;	// IMP=0x0000000000f7f0ee
- (id)init;	// IMP=0x0000000000f7f046

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

