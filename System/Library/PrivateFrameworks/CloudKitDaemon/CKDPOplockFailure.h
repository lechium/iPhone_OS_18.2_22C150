//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

@interface CKDPOplockFailure : PBCodable
{
    CKDPRecord *_recordForOplockFailure;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000203b6f
@property(retain, nonatomic) CKDPRecord *recordForOplockFailure; // @synthesize recordForOplockFailure=_recordForOplockFailure;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000203af1
- (unsigned long long)hash;	// IMP=0x0000000000203ad4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000203a44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002039cc
- (void)copyTo:(id)arg1;	// IMP=0x00000000002039a2
- (void)writeTo:(id)arg1;	// IMP=0x000000000020397e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000203971
- (id)dictionaryRepresentation;	// IMP=0x000000000020373d
- (id)description;	// IMP=0x000000000020368e
@property(readonly, nonatomic) _Bool hasRecordForOplockFailure;

@end
