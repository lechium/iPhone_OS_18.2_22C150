//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFFuture, EFPromise, MFMailMessage, MISSING_TYPE, NSString;

@interface _MFMFMailboxMessageBodyProcessorLoaderClient : NSObject
{
    EFPromise *_promise;	// 8 = 0x8
    MFMailMessage *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000087d6c
@property(readonly, nonatomic) MFMailMessage *message; // @synthesize message=_message;
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x0010000000087d5c
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;	// IMP=0x0010000000087d56
- (void)notifyFullMessageContentsAvailableForMessage:(id)arg1;	// IMP=0x0010000000087d40
- (MISSING_TYPE *)notifyFullMessageContentsUnavailableForMessage:error: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000087d27
- (_Bool)wantsContentsOfType:(long long)arg1;	// IMP=0x0010000000087d1a
- (double)ordering;	// IMP=0x0010000000087c5b
- (long long)priority;	// IMP=0x0010000000087c4e
@property(readonly, nonatomic) EFFuture *future;
- (id)initWithMessage:(id)arg1;	// IMP=0x0010000000087b8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

