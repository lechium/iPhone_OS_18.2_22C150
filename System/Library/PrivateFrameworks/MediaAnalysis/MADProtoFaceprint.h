//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MADProtoFaceprint : PBCodable
{
    long long _faceprintVersion;	// 8 = 0x8
    NSData *_faceprintData;	// 16 = 0x10
    struct {
        unsigned int faceprintVersion:1;
    } _has;	// 24 = 0x18
}

+ (id)protoFromPhotosFaceprint:(id)arg1;	// IMP=0x001000000026a1ea
- (void).cxx_destruct;	// IMP=0x0000000000144602
@property(retain, nonatomic) NSData *faceprintData; // @synthesize faceprintData=_faceprintData;
@property(nonatomic) long long faceprintVersion; // @synthesize faceprintVersion=_faceprintVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000144568
- (unsigned long long)hash;	// IMP=0x000000000014451e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000144462
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001443ce
- (void)copyTo:(id)arg1;	// IMP=0x000000000014436a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000144304
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001442f7
- (id)dictionaryRepresentation;	// IMP=0x0000000000144058
- (id)description;	// IMP=0x0000000000143fa9
@property(readonly, nonatomic) _Bool hasFaceprintData;
@property(nonatomic) _Bool hasFaceprintVersion;
- (id)vcpFaceprintWithDetectionType:(short)arg1;	// IMP=0x000000000026a28b

@end

