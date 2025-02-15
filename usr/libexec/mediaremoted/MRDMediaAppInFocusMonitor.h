//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDDisplayMonitor, NSSet;
@protocol MRDMediaAppInFocusMonitorDelegate, OS_dispatch_queue;

@interface MRDMediaAppInFocusMonitor : NSObject
{
    _Bool _lockScreenVisible;	// 8 = 0x8
    NSSet *_bundlesInFocus;	// 16 = 0x10
    NSSet *_mediaBundlesInFocus;	// 24 = 0x18
    id <MRDMediaAppInFocusMonitorDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 48 = 0x30
    MRDDisplayMonitor *_displayMonitor;	// 56 = 0x38
}

+ (_Bool)isRemoteControllableApp:(id)arg1;	// IMP=0x0040000000092ede
- (void).cxx_destruct;	// IMP=0x0020000000093054
@property(retain, nonatomic) MRDDisplayMonitor *displayMonitor; // @synthesize displayMonitor=_displayMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <MRDMediaAppInFocusMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyDelegate;	// IMP=0x0010000000092d7f
@property(nonatomic) _Bool lockScreenVisible; // @synthesize lockScreenVisible=_lockScreenVisible;
@property(retain, nonatomic) NSSet *mediaBundlesInFocus; // @synthesize mediaBundlesInFocus=_mediaBundlesInFocus;
@property(retain, nonatomic) NSSet *bundlesInFocus; // @synthesize bundlesInFocus=_bundlesInFocus;
- (void)_handleLayoutDidChangeNotification:(id)arg1;	// IMP=0x0010000000092229
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000009208a

@end

