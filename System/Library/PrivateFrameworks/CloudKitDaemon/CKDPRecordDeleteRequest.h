//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

@interface CKDPRecordDeleteRequest : PBRequest
{
    NSString *_etag;	// 8 = 0x8
    NSMutableArray *_pluginFields;	// 16 = 0x10
    NSMutableArray *_publicKeys;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
    _Bool _participantKeyLost;	// 40 = 0x28
    struct {
        unsigned int participantKeyLost:1;
    } _has;	// 44 = 0x2c
}

+ (Class)publicKeysType;	// IMP=0x00100000001d1b5e
+ (Class)pluginFieldsType;	// IMP=0x00100000001d1a47
+ (id)options;	// IMP=0x00100000001d190c
- (void).cxx_destruct;	// IMP=0x00000000001d2f78
@property(retain, nonatomic) NSMutableArray *publicKeys; // @synthesize publicKeys=_publicKeys;
@property(nonatomic) _Bool participantKeyLost; // @synthesize participantKeyLost=_participantKeyLost;
@property(retain, nonatomic) NSMutableArray *pluginFields; // @synthesize pluginFields=_pluginFields;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d2c1a
- (unsigned long long)hash;	// IMP=0x00000000001d2b69
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d2a27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d26c7
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d250c
- (Class)responseClass;	// IMP=0x00000000001d24fb
- (unsigned int)requestTypeCode;	// IMP=0x00000000001d24f0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d2279
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d226c
- (id)dictionaryRepresentation;	// IMP=0x00000000001d1c1e
- (id)description;	// IMP=0x00000000001d1b6f
- (id)publicKeysAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d1b41
- (unsigned long long)publicKeysCount;	// IMP=0x00000000001d1b24
- (void)addPublicKeys:(id)arg1;	// IMP=0x00000000001d1aba
- (void)clearPublicKeys;	// IMP=0x00000000001d1a9d
@property(nonatomic) _Bool hasParticipantKeyLost;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d1a2a
- (unsigned long long)pluginFieldsCount;	// IMP=0x00000000001d1a0d
- (void)addPluginFields:(id)arg1;	// IMP=0x00000000001d19a3
- (void)clearPluginFields;	// IMP=0x00000000001d1986
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

