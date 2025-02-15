//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTableEntry.h>

@class NSData, NSDate, NSNumber, NSSet, NSString;

@interface CKDRecordCacheEntry : CKSQLiteCacheTableEntry
{
    NSString *_rowID;	// 8 = 0x8
    NSString *_recordID;	// 16 = 0x10
    NSString *_zoneIdentifier;	// 24 = 0x18
    NSNumber *_environment;	// 32 = 0x20
    NSNumber *_databaseScope;	// 40 = 0x28
    NSString *_etag;	// 48 = 0x30
    NSDate *_modificationTime;	// 56 = 0x38
    NSData *_recordData;	// 64 = 0x40
    NSSet *_knownUserKeys;	// 72 = 0x48
    NSString *_dsid;	// 80 = 0x50
    NSNumber *_size;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000003554b
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSSet *knownUserKeys; // @synthesize knownUserKeys=_knownUserKeys;
@property(retain, nonatomic) NSData *recordData; // @synthesize recordData=_recordData;
@property(retain, nonatomic) NSDate *modificationTime; // @synthesize modificationTime=_modificationTime;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSNumber *databaseScope; // @synthesize databaseScope=_databaseScope;
@property(retain, nonatomic) NSNumber *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSString *rowID; // @synthesize rowID=_rowID;
- (id)description;	// IMP=0x0000000000035398

@end

