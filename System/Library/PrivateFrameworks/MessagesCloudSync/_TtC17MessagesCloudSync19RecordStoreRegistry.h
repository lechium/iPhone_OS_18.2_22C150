//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC17MessagesCloudSync19RecordStoreRegistry : _TtCs12_SwiftObject
{
    MISSING_TYPE *recordStore;	// 16 = 0x10
}

- (void)registerRecordStoreWithType:(long long)arg1 store:(id)arg2;	// IMP=0x000000000005b520
- (id)assetStore;	// IMP=0x000000000005b500
- (id)deletingStoreFor:(long long)arg1;	// IMP=0x000000000005b450
- (id)recordStoreFor:(long long)arg1;	// IMP=0x000000000005b390

@end

