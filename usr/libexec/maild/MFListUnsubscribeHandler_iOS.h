//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDListUnsubscribeHandler.h>

@class EDOutgoingMessageRepository;

@interface MFListUnsubscribeHandler_iOS : EDListUnsubscribeHandler
{
    EDOutgoingMessageRepository *_outgoingMessageRepository;	// 8 = 0x8
}

+ (id)log;	// IMP=0x0040000000085a60
- (void).cxx_destruct;	// IMP=0x0020000000086251
@property(readonly, nonatomic) EDOutgoingMessageRepository *outgoingMessageRepository; // @synthesize outgoingMessageRepository=_outgoingMessageRepository;
- (void)unsubscribeMailtoWithCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085d4d
- (void)ignoreWithCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085bbf
- (id)initWithOutgoingMessageRepository:(id)arg1;	// IMP=0x0010000000085b3d

@end

