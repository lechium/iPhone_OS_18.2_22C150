//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSCloudKitQueryProvider : NSObject
{
}

- (id)_shardRecordTypeForType:(long long)arg1;	// IMP=0x000000000004db11
- (id)_shardRecordNameForType:(long long)arg1 index:(long long)arg2 count:(long long)arg3;	// IMP=0x000000000004dacc
- (id)queryForFetchItemsWithStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3;	// IMP=0x000000000004d86e
- (id)queryForFetchShardIdentifier:(id)arg1;	// IMP=0x000000000004d6dc
- (id)queryForFetchConfigItemWithType:(long long)arg1;	// IMP=0x000000000004d3ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

