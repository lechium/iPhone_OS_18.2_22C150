//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSMutableArray, Protocol;
@protocol SFQueueingServiceViewControllerProxyDelegate;

__attribute__((visibility("hidden")))
@interface SFQueueingServiceViewControllerProxy : NSProxy
{
    NSMutableArray *_queuedInvocations;	// 8 = 0x8
    Protocol *_protocol;	// 16 = 0x10
    id _target;	// 24 = 0x18
    id <SFQueueingServiceViewControllerProxyDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ea3e1
@property(nonatomic) __weak id <SFQueueingServiceViewControllerProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000ea38e
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000ea29b
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000ea22a
- (id)initWithProtocol:(id)arg1;	// IMP=0x00000000000ea019

@end

