//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKCodeRecordTransport;

@interface CKDPTranscodeResponse : PBCodable
{
    CKCodeRecordTransport *_record;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d443d
@property(retain, nonatomic) CKCodeRecordTransport *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d43bf
- (unsigned long long)hash;	// IMP=0x00000000001d43a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d4312
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d429a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d4270
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d424c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d40a2
- (id)dictionaryRepresentation;	// IMP=0x00000000001d4018
- (id)description;	// IMP=0x00000000001d3f69
@property(readonly, nonatomic) _Bool hasRecord;

@end

