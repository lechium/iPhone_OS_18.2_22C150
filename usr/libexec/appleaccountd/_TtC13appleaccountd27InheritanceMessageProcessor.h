//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13appleaccountd27InheritanceMessageProcessor : NSObject
{
    MISSING_TYPE *accountStore;	// 8 = 0x8
    MISSING_TYPE *invitationHandler;	// 48 = 0x30
    MISSING_TYPE *invitationResponseHandler;	// 88 = 0x58
    MISSING_TYPE *accessKeyMessageHandler;	// 128 = 0x80
    MISSING_TYPE *beneficiaryRemovedMessageHandler;	// 168 = 0xa8
    MISSING_TYPE *coder;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000001babc0
- (id)init;	// IMP=0x00100000001bab60
- (void)messageService:(id)arg1 didReceiveMessage:(id)arg2 fromID:(id)arg3;	// IMP=0x00100000001baa90

@end

