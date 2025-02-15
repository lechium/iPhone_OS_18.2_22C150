//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ABSPBAccountsSyncObject : PBCodable
{
    NSString *_primaryiCloudAccountCardDAVAccountExternalIdentifier;	// 8 = 0x8
    _Bool _localContainerEnabled;	// 16 = 0x10
    struct {
        unsigned int localContainerEnabled:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000002521b
@property(retain, nonatomic) NSString *primaryiCloudAccountCardDAVAccountExternalIdentifier; // @synthesize primaryiCloudAccountCardDAVAccountExternalIdentifier=_primaryiCloudAccountCardDAVAccountExternalIdentifier;
@property(nonatomic) _Bool localContainerEnabled; // @synthesize localContainerEnabled=_localContainerEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000025183
- (unsigned long long)hash;	// IMP=0x0010000000025136
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000025070
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000024fdc
- (void)copyTo:(id)arg1;	// IMP=0x0010000000024f79
- (void)writeTo:(id)arg1;	// IMP=0x0010000000024f12
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000024f05
- (id)dictionaryRepresentation;	// IMP=0x0010000000024c62
- (id)description;	// IMP=0x0010000000024bb3
@property(readonly, nonatomic) _Bool hasPrimaryiCloudAccountCardDAVAccountExternalIdentifier;
@property(nonatomic) _Bool hasLocalContainerEnabled;

@end

