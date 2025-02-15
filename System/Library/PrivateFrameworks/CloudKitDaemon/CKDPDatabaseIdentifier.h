//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, NSString;

@interface CKDPDatabaseIdentifier : PBCodable
{
    NSString *_containerName;	// 8 = 0x8
    int _containerType;	// 16 = 0x10
    CKDPIdentifier *_databaseOwnerId;	// 24 = 0x18
    int _databaseType;	// 32 = 0x20
    struct {
        unsigned int containerType:1;
        unsigned int databaseType:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000002d73b6
@property(retain, nonatomic) CKDPIdentifier *databaseOwnerId; // @synthesize databaseOwnerId=_databaseOwnerId;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002d72af
- (unsigned long long)hash;	// IMP=0x00000000002d7206
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d70f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d7016
- (void)copyTo:(id)arg1;	// IMP=0x00000000002d6f6f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d6ec4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d6bba
- (id)dictionaryRepresentation;	// IMP=0x00000000002d6a0d
- (id)description;	// IMP=0x00000000002d695e
- (int)StringAsContainerType:(id)arg1;	// IMP=0x00000000002d68f3
- (id)containerTypeAsString:(int)arg1;	// IMP=0x00000000002d689d
@property(nonatomic) _Bool hasContainerType;
@property(nonatomic) int containerType; // @synthesize containerType=_containerType;
@property(readonly, nonatomic) _Bool hasDatabaseOwnerId;
- (int)StringAsDatabaseType:(id)arg1;	// IMP=0x00000000002d6767
- (id)databaseTypeAsString:(int)arg1;	// IMP=0x00000000002d671c
@property(nonatomic) _Bool hasDatabaseType;
@property(nonatomic) int databaseType; // @synthesize databaseType=_databaseType;
@property(readonly, nonatomic) _Bool hasContainerName;

@end

