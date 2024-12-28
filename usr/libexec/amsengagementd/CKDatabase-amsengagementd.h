//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabase.h>

@class NSString;

@interface CKDatabase (amsengagementd)
+ (id)_stringForDatabaseScope:(long long)arg1;	// IMP=0x002000000019dee1
+ (id)_fetchChangeTokenWithDatabaseScope:(long long)arg1 recordZoneName:(id)arg2;	// IMP=0x001000000019da89
+ (id)_fetchChangeTokenWithDatabaseScope:(long long)arg1;	// IMP=0x001000000019d7ff
+ (id)_zoneIdentifiersWithExpiredTokensFrom:(id)arg1 andErrors:(id)arg2;	// IMP=0x001000000019d22b
+ (id)_changeTokenKeyForDatabaseScope:(long long)arg1 recordZoneName:(id)arg2;	// IMP=0x001000000019bf30
- (_Bool)_handleError:(id)arg1 andErrors:(id)arg2;	// IMP=0x002000000019ceb2
- (id)_fetchChangedRecordsInRecordZonesWithWithRecordZoneIDs:(id)arg1 changeTokens:(id)arg2;	// IMP=0x001000000019c2a7
- (id)_fetchChangedRecordZonesWithServerChangeToken:(id)arg1;	// IMP=0x001000000019bfc9
- (id)_subscribeWithIdentifier:(id)arg1 recordZoneIdentifier:(id)arg2 attempt:(unsigned long long)arg3;	// IMP=0x001000000019b331
- (id)subscribeWithIdentifier:(id)arg1 recordZoneIdentifier:(id)arg2;	// IMP=0x001000000019b31c
- (id)subscribeWithIdentifier:(id)arg1;	// IMP=0x001000000019b305
- (id)shareForRecordZoneIdentifier:(id)arg1;	// IMP=0x001000000019b26f
- (id)saveRecordZone:(id)arg1;	// IMP=0x001000000019af81
- (id)saveRecord:(id)arg1;	// IMP=0x001000000019ac93
- (void)persistChangedRecordsChangeToken:(id)arg1 forRecordZoneIdentifier:(id)arg2;	// IMP=0x001000000019a553
- (void)persistChangedRecordZonesChangeToken:(id)arg1;	// IMP=0x001000000019a041
- (id)fetchRecordZones;	// IMP=0x0010000000199d05
- (id)fetchRecordWithRecordIdentifier:(id)arg1;	// IMP=0x00100000001998a7
- (id)fetchRecordWithName:(id)arg1 zoneIdentifier:(id)arg2;	// IMP=0x00100000001997c2
- (id)fetchChangedRecordZones;	// IMP=0x00100000001995d4
- (id)fetchChangedRecordsInRecordZonesWithRecordZoneIdentifiers:(id)arg1;	// IMP=0x00100000001993f3
- (id)deleteRecordZonesWithRecordZoneIdentifiers:(id)arg1;	// IMP=0x0010000000199184
- (id)deleteRecordWithRecordIdentifier:(id)arg1 missingEncryptionIdentity:(_Bool)arg2;	// IMP=0x0010000000198e83
- (id)deleteRecordWithRecordIdentifier:(id)arg1;	// IMP=0x0010000000198e6f
- (id)createRecordZoneWithRecordZoneName:(id)arg1;	// IMP=0x0010000000198e22
- (id)createRecordWithRecordName:(id)arg1 recordType:(id)arg2 recordZone:(id)arg3;	// IMP=0x0010000000198cfb
- (id)addRecordsToSave:(id)arg1 recordIdentifiersToDelete:(id)arg2;	// IMP=0x0010000000198945
@property(readonly, nonatomic) NSString *hashedDescription;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic, getter=isSharedDatabase) _Bool sharedDatabase;
@property(readonly, nonatomic, getter=isPublicDatabase) _Bool publicDatabase;
@property(readonly, nonatomic, getter=isPrivateDatabase) _Bool privateDatabase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
