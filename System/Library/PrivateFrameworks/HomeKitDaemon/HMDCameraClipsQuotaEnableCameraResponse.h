//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaEnableCameraResponse : PBCodable
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000723ced
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000723ca2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000723c69
- (void)copyTo:(id)arg1;	// IMP=0x0000000000723c63
- (void)writeTo:(id)arg1;	// IMP=0x0000000000723c5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000723b61
- (id)dictionaryRepresentation;	// IMP=0x0000000000723b48
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

