//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriKitRuntime/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface SKRConversationTurnDataXPC : NSObject <NSSecureCoding>
{
    MISSING_TYPE *executionRequestId;	// 8 = 0x8
    MISSING_TYPE *rootRequestId;	// 24 = 0x18
    MISSING_TYPE *sessionId;	// 40 = 0x28
    MISSING_TYPE *requestContextData;	// 48 = 0x30
    MISSING_TYPE *conversationLoggingId;	// 56 = 0x38
    MISSING_TYPE *flowTask;	// 64 = 0x40
    MISSING_TYPE *invokedByPeerToPeerEORR;	// 72 = 0x48
    MISSING_TYPE *scopedRRData;	// 80 = 0x50
    MISSING_TYPE *proxiedRequestContext;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000288690
- (void).cxx_destruct;	// IMP=0x0000000000289680
- (id)init;	// IMP=0x0000000000289620
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002894d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000288ec0

@end
