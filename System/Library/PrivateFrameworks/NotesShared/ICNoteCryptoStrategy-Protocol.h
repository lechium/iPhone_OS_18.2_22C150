//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICCloudSyncingObjectCryptoStrategy-Protocol.h>

@class CKRecord, NSData, NSMergeConflict;

@protocol ICNoteCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>
- (void)mergeEncryptedData:(NSData *)arg1 mergeConflict:(NSMergeConflict *)arg2;
- (NSData *)decryptNotePrimitiveData;
- (NSData *)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(CKRecord *)arg1;
- (_Bool)decrypt;
- (_Bool)writeEncryptedNoteData:(NSData *)arg1;
@end

