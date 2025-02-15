//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

@interface KCSharingPBLocalEntryData : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_cloudKitRecord;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000228dd9
@property(retain, nonatomic) NSData *cloudKitRecord; // @synthesize cloudKitRecord=_cloudKitRecord;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000228d7b
- (unsigned long long)hash;	// IMP=0x0010000000228d5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000228cce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000228c43
- (void)writeTo:(id)arg1;	// IMP=0x0010000000228be8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000228a38
- (id)dictionaryRepresentation;	// IMP=0x0010000000228987
- (id)description;	// IMP=0x00100000002288d8
@property(readonly, nonatomic) _Bool hasCloudKitRecord;

@end

