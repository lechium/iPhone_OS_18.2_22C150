//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest
{
    CDUnknownBlockType _recordArchivedBlock;	// 8 = 0x8
    NSMutableDictionary *_zoneIDToRecordIDs;	// 16 = 0x10
    NSMutableDictionary *_recordZoneIDByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c35b0
@property(retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // @synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID;
@property(retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs; // @synthesize zoneIDToRecordIDs=_zoneIDToRecordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000001c326b
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001c2f90
- (id)generateRequestOperations;	// IMP=0x00000000001c2b8f
- (id)requestOperationClasses;	// IMP=0x00000000001c2b23
- (id)zoneIDsToLock;	// IMP=0x00000000001c2ad3
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x00000000001c29e1
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000001c28e8
- (id)initWithOperation:(id)arg1 recordIDsToArchive:(id)arg2;	// IMP=0x00000000001c2631

@end

