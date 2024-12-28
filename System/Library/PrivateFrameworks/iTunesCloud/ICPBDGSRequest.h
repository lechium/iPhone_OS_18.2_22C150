//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

__attribute__((visibility("hidden")))
@interface ICPBDGSRequest : PBRequest
{
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;	// 8 = 0x8
    ICPBDGSStartDelegationRequest *_startDelegationRequest;	// 16 = 0x10
    unsigned int _uniqueID;	// 24 = 0x18
    struct {
        unsigned int uniqueID:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000173d1f
- (unsigned long long)hash;	// IMP=0x0000000000173ca0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000173bbd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000173afa
- (void)writeTo:(id)arg1;	// IMP=0x0000000000173a77
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000173a6a
- (id)dictionaryRepresentation;	// IMP=0x0000000000173939
- (id)description;	// IMP=0x000000000017388a

@end
