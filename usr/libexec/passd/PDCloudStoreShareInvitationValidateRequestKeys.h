//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKCloudStoreZoneInvitation;

@interface PDCloudStoreShareInvitationValidateRequestKeys
{
    PKCloudStoreZoneInvitation *_invitation;	// 48 = 0x30
    NSString *_recipientHandle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001f21ce
@property(readonly, copy, nonatomic) NSString *recipientHandle; // @synthesize recipientHandle=_recipientHandle;
@property(readonly, nonatomic) PKCloudStoreZoneInvitation *invitation; // @synthesize invitation=_invitation;
- (id)description;	// IMP=0x00100000001f20c7
- (_Bool)canCoalesceRequest:(id)arg1;	// IMP=0x00100000001f1dfe
- (id)initWithInvitation:(id)arg1 recipientHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f1d51

@end
