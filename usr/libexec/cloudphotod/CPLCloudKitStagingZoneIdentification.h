//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitLibraryShareZoneIdentification;

@interface CPLCloudKitStagingZoneIdentification
{
    CPLCloudKitLibraryShareZoneIdentification *_stagedZoneIdentification;	// 40 = 0x28
}

+ (id)libraryInfoRecordName;	// IMP=0x00400000000a8045
+ (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x00100000000a8013
+ (id)shareTypes;	// IMP=0x00100000000a7ffa
+ (id)shareRecordName;	// IMP=0x00100000000a7fe1
+ (_Bool)supportsCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x00100000000a7c17
+ (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x00100000000a7b52
+ (long long)proposedScopeTypeForCloudKitScope:(id)arg1;	// IMP=0x00100000000a7adb
+ (id)recordsToFetchToIdentifyZoneID:(id)arg1 proposedScopeType:(long long)arg2 currentUserID:(id)arg3;	// IMP=0x00100000000a7a02
- (void).cxx_destruct;	// IMP=0x00000000000a808a
- (id)shareRecordIDToDelete;	// IMP=0x00100000000a806e
- (_Bool)supportsZoneCreation;	// IMP=0x00100000000a8066
- (_Bool)supportsZoneDelete;	// IMP=0x00100000000a805e
- (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x00100000000a802c
- (id)scopeChangeFromCKRecords:(id)arg1 currentUserID:(id)arg2 previousScopeChange:(id)arg3;	// IMP=0x00100000000a7c34

@end
