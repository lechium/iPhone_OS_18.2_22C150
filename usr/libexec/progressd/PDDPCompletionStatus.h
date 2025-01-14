//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPCompletionStatus : PBCodable
{
    NSMutableArray *_classIds;	// 8 = 0x8
    PDDPDate *_dateLastCompleted;	// 16 = 0x10
    PDDPDate *_dateLastModified;	// 24 = 0x18
    NSString *_parentObjectId;	// 32 = 0x20
    NSString *_personId;	// 40 = 0x28
    int _status;	// 48 = 0x30
    struct {
        unsigned int status:1;
    } _has;	// 52 = 0x34
}

+ (Class)classIdsType;	// IMP=0x00200000000701b8
- (void).cxx_destruct;	// IMP=0x0020000000071217
@property(retain, nonatomic) NSMutableArray *classIds; // @synthesize classIds=_classIds;
@property(retain, nonatomic) NSString *personId; // @synthesize personId=_personId;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateLastCompleted; // @synthesize dateLastCompleted=_dateLastCompleted;
@property(retain, nonatomic) NSString *parentObjectId; // @synthesize parentObjectId=_parentObjectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000070f3c
- (unsigned long long)hash;	// IMP=0x0010000000070e75
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000070d07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000070a7c
- (void)copyTo:(id)arg1;	// IMP=0x0010000000070918
- (void)writeTo:(id)arg1;	// IMP=0x0010000000070749
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007073c
- (id)dictionaryRepresentation;	// IMP=0x0010000000070278
- (id)description;	// IMP=0x00100000000701c9
- (id)classIdsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007019b
- (unsigned long long)classIdsCount;	// IMP=0x001000000007017e
- (void)addClassIds:(id)arg1;	// IMP=0x0010000000070114
- (void)clearClassIds;	// IMP=0x00100000000700f7
@property(readonly, nonatomic) _Bool hasPersonId;
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateLastCompleted;
- (int)StringAsStatus:(id)arg1;	// IMP=0x001000000006ffc6
- (id)statusAsString:(int)arg1;	// IMP=0x001000000006ff7d
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasParentObjectId;

@end

