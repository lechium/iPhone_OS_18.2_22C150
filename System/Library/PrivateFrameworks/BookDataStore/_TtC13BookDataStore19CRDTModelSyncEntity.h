//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCCloudData.h"

@class MISSING_TYPE, NSData, NSString;

@interface _TtC13BookDataStore19CRDTModelSyncEntity : BCCloudData
{
    MISSING_TYPE *$__lazy_storage_$_logger;	// 0 = 0x0
}

+ (id)propertyIDKey;	// IMP=0x001000000008eb10
- (void).cxx_destruct;	// IMP=0x000000000008ecb0
- (void).cxx_construct;	// IMP=0x000000000008ec70
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000008ebf0
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x000000000008ea70
- (_Bool)isEqualExceptForDate:(id)arg1 ignoringEmptySalt:(_Bool)arg2;	// IMP=0x000000000008d660
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x000000000008d390
- (id)zoneName;	// IMP=0x000000000008f210
- (id)identifier;	// IMP=0x000000000008f150
- (id)recordType;	// IMP=0x000000000008f060
@property(nonatomic, readonly) NSString *debugDescription;
- (id)mutableCopy;	// IMP=0x000000000008edc0

// Remaining properties
@property(nonatomic, copy) NSData *protoData; // @dynamic protoData;
@property(nonatomic, copy) NSString *type; // @dynamic type;

@end
