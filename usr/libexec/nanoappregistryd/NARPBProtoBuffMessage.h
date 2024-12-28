//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NARPBApplicationWrapper, NARPBWorkspaceMetadata;

@interface NARPBProtoBuffMessage : PBCodable
{
    NARPBApplicationWrapper *_applicationWrapper;	// 8 = 0x8
    NARPBWorkspaceMetadata *_workspaceMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000004cf7
@property(retain, nonatomic) NARPBWorkspaceMetadata *workspaceMetadata; // @synthesize workspaceMetadata=_workspaceMetadata;
@property(retain, nonatomic) NARPBApplicationWrapper *applicationWrapper; // @synthesize applicationWrapper=_applicationWrapper;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000004c1e
- (unsigned long long)hash;	// IMP=0x0010000000004bd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000004b19
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000004a7b
- (void)copyTo:(id)arg1;	// IMP=0x0010000000004a18
- (void)writeTo:(id)arg1;	// IMP=0x00100000000049bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000049ae
- (id)dictionaryRepresentation;	// IMP=0x00100000000046ee
- (id)description;	// IMP=0x001000000000463f
@property(readonly, nonatomic) _Bool hasWorkspaceMetadata;
@property(readonly, nonatomic) _Bool hasApplicationWrapper;

@end
