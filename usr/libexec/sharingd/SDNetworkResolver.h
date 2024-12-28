//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SDBonjourResolver;
@protocol SDNetworkResolverDelegate;

@interface SDNetworkResolver : NSObject
{
    struct __SFNode *_node;	// 8 = 0x8
    SDBonjourResolver *_resolver;	// 16 = 0x10
    void *_session;	// 24 = 0x18
    NSNumber *_flags;	// 32 = 0x20
    NSString *_protocol;	// 40 = 0x28
    id <SDNetworkResolverDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000e9b46
@property __weak id <SDNetworkResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *flags; // @synthesize flags=_flags;
- (void)stop;	// IMP=0x00100000000e9a8a
- (int)start;	// IMP=0x00100000000e9767
- (void)mount;	// IMP=0x00100000000e9761
- (void)bonjourResolverDidChange:(id)arg1;	// IMP=0x00100000000e9488
- (void)mountDiskImageAsync;	// IMP=0x00100000000e9482
- (void)notifyClientAboutResolve:(int)arg1;	// IMP=0x00100000000e935f
- (void)dealloc;	// IMP=0x00100000000e9325
- (id)initWithNode:(struct __SFNode *)arg1;	// IMP=0x00100000000e929f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
