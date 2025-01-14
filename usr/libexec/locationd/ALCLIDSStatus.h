//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ALCLIDSStatus : PBCodable
{
    unsigned int _connectionStatus;	// 8 = 0x8
    NSString *_pairedModelId;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *pairedModelId; // @synthesize pairedModelId=_pairedModelId;
@property(nonatomic) unsigned int connectionStatus; // @synthesize connectionStatus=_connectionStatus;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000078a476
- (unsigned long long)hash;	// IMP=0x001000000078a43b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000078a3d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000078a34a
- (void)copyTo:(id)arg1;	// IMP=0x001000000078a313
- (void)writeTo:(id)arg1;	// IMP=0x001000000078a2c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000078a2bc
- (id)dictionaryRepresentation;	// IMP=0x001000000078a042
- (id)description;	// IMP=0x0010000000789fcb
@property(readonly, nonatomic) _Bool hasPairedModelId;
- (void)dealloc;	// IMP=0x0010000000789f76

@end

