//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SECC2MPCloudKitOperationInfo : PBCodable
{
    unsigned int _operationGroupIndex;	// 8 = 0x8
    NSString *_operationId;	// 16 = 0x10
    NSString *_operationType;	// 24 = 0x18
    _Bool _operationTriggered;	// 32 = 0x20
    struct {
        unsigned int operationGroupIndex:1;
        unsigned int operationTriggered:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00200000001908b6
@property(nonatomic) unsigned int operationGroupIndex; // @synthesize operationGroupIndex=_operationGroupIndex;
@property(nonatomic) _Bool operationTriggered; // @synthesize operationTriggered=_operationTriggered;
@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001907ac
- (unsigned long long)hash;	// IMP=0x001000000019070e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001905f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019051d
- (void)copyTo:(id)arg1;	// IMP=0x001000000019047d
- (void)writeTo:(id)arg1;	// IMP=0x00100000001903cf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001903c2
- (id)dictionaryRepresentation;	// IMP=0x001000000019027a
- (id)description;	// IMP=0x00100000001901cb
@property(nonatomic) _Bool hasOperationGroupIndex;
@property(nonatomic) _Bool hasOperationTriggered;
@property(readonly, nonatomic) _Bool hasOperationType;
@property(readonly, nonatomic) _Bool hasOperationId;

@end

