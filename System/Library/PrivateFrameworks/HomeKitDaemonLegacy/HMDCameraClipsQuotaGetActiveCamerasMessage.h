//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaGetActiveCamerasMessage : PBCodable
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000021f87f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021f834
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021f7fb
- (void)copyTo:(id)arg1;	// IMP=0x000000000021f7f5
- (void)writeTo:(id)arg1;	// IMP=0x000000000021f7ef
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021f6f3
- (id)dictionaryRepresentation;	// IMP=0x000000000021f6da
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
