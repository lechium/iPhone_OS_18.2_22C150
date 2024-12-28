//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

@class NSString;

@interface CKRecordID (BRCItemAdditions)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x0010000000103891
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x001000000010379e
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;	// IMP=0x0010000000328854
- (_Bool)locateSideCarServerZone:(id *)arg1 withSession:(id)arg2;	// IMP=0x0010000000104a5c
- (BOOL)brc_itemType;	// IMP=0x00100000001048f1
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x00100000001048df
- (id)brc_itemIDWithSession:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000104674
- (id)brc_itemIDWithSession:(id)arg1;	// IMP=0x001000000010451f
- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;	// IMP=0x0010000000103c9c
- (_Bool)brc_isZoneRootRecordID;	// IMP=0x0010000000103bf0
- (id)brc_appLibraryDocumentsZoneName;	// IMP=0x0010000000103b09
- (_Bool)brc_isAppLibraryDocumentsRecordID;	// IMP=0x0010000000103abe
- (id)brc_appLibraryRootZoneName;	// IMP=0x00100000001039d7
- (_Bool)brc_isAppLibraryRootRecordID;	// IMP=0x001000000010398c
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x0010000000103733
- (id)brc_collaborationIdentifierWithCachedCurrentUserRecordName:(id)arg1;	// IMP=0x0010000000328c74
- (id)brc_shareItemID;	// IMP=0x00100000003287fd
- (id)brc_shareZoneName;	// IMP=0x00100000003287ad
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;	// IMP=0x001000000032872d
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;	// IMP=0x0010000000328677
- (id)initShareIDWithShareableItem:(id)arg1;	// IMP=0x00100000003285bf
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000003284a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
