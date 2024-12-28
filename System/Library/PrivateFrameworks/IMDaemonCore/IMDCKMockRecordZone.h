//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKVStore, NSString;
@protocol OS_dispatch_queue;

@interface IMDCKMockRecordZone : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    IDSKVStore *_recordStore;	// 24 = 0x18
}

@property(retain, nonatomic) IDSKVStore *recordStore; // @synthesize recordStore=_recordStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_handleModifyRecordsOperation:(id)arg1;	// IMP=0x0000000000147f39
- (id)_serializedCKRecordData:(id)arg1;	// IMP=0x0000000000147e36
- (void)_handleFetchZoneChangesOperation:(id)arg1;	// IMP=0x0000000000147627
- (id)_ckRecordFromData:(id)arg1;	// IMP=0x000000000014752c
- (unsigned long long)_fetchResultLimit:(id)arg1;	// IMP=0x0000000000147501
- (id)_fetchRecordZoneChangesOptionsFromOperation:(id)arg1;	// IMP=0x00000000001474c7
- (void)handleOperation:(id)arg1;	// IMP=0x0000000000147250
- (void)dealloc;	// IMP=0x00000000001471fd
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000147154
- (id)_kvStorePath;	// IMP=0x0000000000147124

@end
