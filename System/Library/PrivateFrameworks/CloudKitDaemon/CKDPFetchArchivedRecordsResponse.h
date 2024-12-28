//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPFetchArchivedRecordsResponse : PBCodable
{
    NSData *_archiveContinuationToken;	// 8 = 0x8
    NSMutableArray *_records;	// 16 = 0x10
    int _status;	// 24 = 0x18
    CDStruct_47fe53f2 _has;	// 28 = 0x1c
}

+ (Class)recordType;	// IMP=0x00100000003434ba
- (void).cxx_destruct;	// IMP=0x000000000034440d
@property(retain, nonatomic) NSData *archiveContinuationToken; // @synthesize archiveContinuationToken=_archiveContinuationToken;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000344229
- (unsigned long long)hash;	// IMP=0x00000000003441b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003440d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000343e9f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000343d9b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000343c15
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000343c08
- (id)dictionaryRepresentation;	// IMP=0x00000000003436b7
- (id)description;	// IMP=0x0000000000343608
- (int)StringAsStatus:(id)arg1;	// IMP=0x000000000034359d
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000343547
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasArchiveContinuationToken;
- (id)recordAtIndex:(unsigned long long)arg1;	// IMP=0x000000000034349d
- (unsigned long long)recordsCount;	// IMP=0x0000000000343480
- (void)addRecord:(id)arg1;	// IMP=0x0000000000343416
- (void)clearRecords;	// IMP=0x00000000003433f9

@end
