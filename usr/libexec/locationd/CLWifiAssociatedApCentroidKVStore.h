//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUbiquitousKeyValueStore;

@interface CLWifiAssociatedApCentroidKVStore : NSObject
{
    NSUbiquitousKeyValueStore *_kvStore;	// 8 = 0x8
}

@property(readonly, nonatomic) NSUbiquitousKeyValueStore *kvStore; // @synthesize kvStore=_kvStore;
- (basic_string_76cbfbed)getBasicInfo;	// IMP=0x0010000000c7c680
- (id)getSampleMacs:(int)arg1;	// IMP=0x0010000000c7c656
- (_Bool)isEmpty;	// IMP=0x0010000000c7c63e
- (int)count;	// IMP=0x0010000000c7c617
- (id)fetchRecord:(id)arg1;	// IMP=0x0010000000c7c57d
- (_Bool)purgeOlderRecords;	// IMP=0x0010000000c7c34f
- (_Bool)deleteRecordsOlderThan:(double)arg1;	// IMP=0x0010000000c7c0d5
- (void)deleteRecordsByMac:(id)arg1;	// IMP=0x0010000000c7c069
- (_Bool)deleteAllRecords;	// IMP=0x0010000000c7bf1f
- (void)addRecord:(id)arg1;	// IMP=0x0010000000c7becc
- (struct CLWifiAssociatedApCentroidKVStoreDictionary)getKVStoreDictionary;	// IMP=0x0010000000c7be9c
- (id)initKVStore;	// IMP=0x0010000000c7bc87

@end
