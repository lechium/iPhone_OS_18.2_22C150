//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSRateLimiter, CKServerChangeToken, NSData, NSDate, NSString;

@interface CKKSZoneStateEntry
{
    _Bool _ckzonecreated;	// 8 = 0x8
    _Bool _ckzonesubscribed;	// 9 = 0x9
    _Bool _moreRecordsInCloudKit;	// 10 = 0xa
    NSString *_contextID;	// 16 = 0x10
    NSString *_ckzone;	// 24 = 0x18
    NSData *_encodedChangeToken;	// 32 = 0x20
    NSDate *_lastFetchTime;	// 40 = 0x28
    NSDate *_lastLocalKeychainScanTime;	// 48 = 0x30
    unsigned long long _lastFixup;	// 56 = 0x38
    CKKSRateLimiter *_rateLimiter;	// 64 = 0x40
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x004000000008be46
+ (id)sqlColumns;	// IMP=0x001000000008be39
+ (id)sqlTable;	// IMP=0x001000000008be2c
+ (id)tryFromDatabase:(id)arg1 zoneName:(id)arg2 error:(id *)arg3;	// IMP=0x001000000008bc9e
+ (id)fromDatabase:(id)arg1 zoneName:(id)arg2 error:(id *)arg3;	// IMP=0x001000000008bb10
+ (id)contextID:(id)arg1 zoneName:(id)arg2;	// IMP=0x001000000008b98e
- (void).cxx_destruct;	// IMP=0x002000000008b919
@property(retain) CKKSRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property unsigned long long lastFixup; // @synthesize lastFixup=_lastFixup;
@property(retain) NSDate *lastLocalKeychainScanTime; // @synthesize lastLocalKeychainScanTime=_lastLocalKeychainScanTime;
@property(retain) NSDate *lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property _Bool moreRecordsInCloudKit; // @synthesize moreRecordsInCloudKit=_moreRecordsInCloudKit;
@property(retain) NSData *encodedChangeToken; // @synthesize encodedChangeToken=_encodedChangeToken;
@property _Bool ckzonesubscribed; // @synthesize ckzonesubscribed=_ckzonesubscribed;
@property _Bool ckzonecreated; // @synthesize ckzonecreated=_ckzonecreated;
@property(retain) NSString *ckzone; // @synthesize ckzone=_ckzone;
@property(readonly) NSString *contextID; // @synthesize contextID=_contextID;
- (id)sqlValues;	// IMP=0x001000000008b2a0
- (id)whereClauseToFindSelf;	// IMP=0x001000000008b183
@property(retain) NSData *encodedRateLimiter;
@property(retain, getter=getChangeToken, setter=setChangeToken:) CKServerChangeToken *changeToken;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008a7e3
- (id)description;	// IMP=0x001000000008a6ce
- (id)initWithContextID:(id)arg1 zoneName:(id)arg2 zoneCreated:(_Bool)arg3 zoneSubscribed:(_Bool)arg4 changeToken:(id)arg5 moreRecordsInCloudKit:(_Bool)arg6 lastFetch:(id)arg7 lastScan:(id)arg8 lastFixup:(unsigned long long)arg9 encodedRateLimiter:(id)arg10;	// IMP=0x001000000008a545

@end

