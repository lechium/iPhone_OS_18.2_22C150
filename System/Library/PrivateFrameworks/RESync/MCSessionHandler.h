//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCSession, NSLock, NSString;
@protocol MCSessionPrivateDelegate;

__attribute__((visibility("hidden")))
@interface MCSessionHandler : NSObject
{
    struct MultipeerProtocolLayer *_protocolLayer;	// 8 = 0x8
    struct ProtocolLayerListener *_listener;	// 16 = 0x10
    MCSession *_session;	// 24 = 0x18
    NSLock *_handlesLock;	// 32 = 0x20
    id <MCSessionPrivateDelegate> _nextDelegate;	// 40 = 0x28
    DynamicArray_2debbf54 _handles;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0000000000048aba
- (void).cxx_destruct;	// IMP=0x0000000000048a7f
@property(nonatomic) __weak id <MCSessionPrivateDelegate> nextDelegate; // @synthesize nextDelegate=_nextDelegate;
@property(nonatomic) DynamicArray_2debbf54 handles; // @synthesize handles=_handles;
@property(retain, nonatomic) NSLock *handlesLock; // @synthesize handlesLock=_handlesLock;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
@property(nonatomic) struct ProtocolLayerListener *listener; // @synthesize listener=_listener;
@property(nonatomic) struct MultipeerProtocolLayer *protocolLayer; // @synthesize protocolLayer=_protocolLayer;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(_Bool *)arg5;	// IMP=0x0000000000048807
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(_Bool *)arg6;	// IMP=0x00000000000486f0
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(_Bool *)arg5;	// IMP=0x00000000000485fd
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(_Bool *)arg4;	// IMP=0x0000000000048415
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(_Bool *)arg4;	// IMP=0x0000000000047cfb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000047c66
- (void)dealloc;	// IMP=0x0000000000047bda
- (id)initWithSession:(id)arg1 protocolLayer:(struct MultipeerProtocolLayer *)arg2;	// IMP=0x0000000000047830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
