//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC14NearbySessions29IncomingInvitationJoinRequest : NSObject
{
    MISSING_TYPE *invitationID;	// 8970 = 0x230a
    MISSING_TYPE *remotePseudonym;	// 389424 = 0x5f130
    MISSING_TYPE *remotePublicKey;	// 0 = 0x0
    MISSING_TYPE *displayName;	// 2 = 0x2
    MISSING_TYPE *destinationToken;	// 0 = 0x0
    MISSING_TYPE *userInfo;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *hostInfo;	// 1887007839 = 0x7079745f
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000004b510
- (void).cxx_destruct;	// IMP=0x000000000004bf30
- (id)init;	// IMP=0x000000000004bee0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004be80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004b7f0
@property(nonatomic, readonly) NSString *description;

@end

