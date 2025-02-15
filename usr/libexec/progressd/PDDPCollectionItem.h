//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPCollectionItem : PBCodable
{
    NSString *_collectionId;	// 8 = 0x8
    PDDPDate *_dateCreated;	// 16 = 0x10
    PDDPDate *_dateLastModified;	// 24 = 0x18
    NSMutableArray *_itemIds;	// 32 = 0x20
    NSString *_objectId;	// 40 = 0x28
    int _type;	// 48 = 0x30
    CDStruct_f953fb60 _has;	// 52 = 0x34
}

+ (Class)itemIdsType;	// IMP=0x00200000000dcedb
- (void).cxx_destruct;	// IMP=0x00200000000ddfb4
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSMutableArray *itemIds; // @synthesize itemIds=_itemIds;
@property(retain, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ddcb1
- (unsigned long long)hash;	// IMP=0x00100000000ddbe4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000dda76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000dd7d4
- (void)copyTo:(id)arg1;	// IMP=0x00100000000dd669
- (void)writeTo:(id)arg1;	// IMP=0x00100000000dd48d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000dd480
- (id)dictionaryRepresentation;	// IMP=0x00100000000dcfc5
- (id)description;	// IMP=0x00100000000dcf16
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
- (id)itemIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000dcebe
- (unsigned long long)itemIdsCount;	// IMP=0x00100000000dcea1
- (void)addItemIds:(id)arg1;	// IMP=0x00100000000dce37
- (void)clearItemIds;	// IMP=0x00100000000dce1a
@property(readonly, nonatomic) _Bool hasCollectionId;
// Error: Property attributes should begin with the type ('T') attribute, property name: hasObjectId
// Property attributes: (null)

- (int)StringAsType:(id)arg1;	// IMP=0x00100000000dcd59
- (id)typeAsString:(int)arg1;	// IMP=0x00100000000dcd10
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

