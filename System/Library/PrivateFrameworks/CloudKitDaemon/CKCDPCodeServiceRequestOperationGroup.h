//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceRequestOperationGroup : PBCodable
{
    long long _operationGroupQuantity;	// 8 = 0x8
    NSString *_operationGroupId;	// 16 = 0x10
    NSString *_operationGroupName;	// 24 = 0x18
    NSString *_operationId;	// 32 = 0x20
    struct {
        unsigned int operationGroupQuantity:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002521cf
@property(nonatomic) long long operationGroupQuantity; // @synthesize operationGroupQuantity=_operationGroupQuantity;
@property(retain, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(retain, nonatomic) NSString *operationGroupId; // @synthesize operationGroupId=_operationGroupId;
@property(retain, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002520ab
- (unsigned long long)hash;	// IMP=0x0000000000252019
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000251f0a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000251e25
- (void)copyTo:(id)arg1;	// IMP=0x0000000000251d81
- (void)writeTo:(id)arg1;	// IMP=0x0000000000251ce1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000251cd4
- (id)dictionaryRepresentation;	// IMP=0x0000000000251994
- (id)description;	// IMP=0x00000000002518e5
@property(nonatomic) _Bool hasOperationGroupQuantity;
@property(readonly, nonatomic) _Bool hasOperationGroupName;
@property(readonly, nonatomic) _Bool hasOperationGroupId;
@property(readonly, nonatomic) _Bool hasOperationId;

@end

