//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFMessageDispatcher, NSMutableDictionary, NSString;
@protocol HMDWACBrowserDelegate, HMDWACScanner, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDWACBrowser : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <HMDWACScanner> _wacScanner;	// 16 = 0x10
    NSMutableDictionary *_unassociatedAccessories;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    _Bool _scanIsActive;	// 40 = 0x28
    id <HMDWACBrowserDelegate> _delegate;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000077abc2
- (void).cxx_destruct;	// IMP=0x000000000077a177
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDWACBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool scanIsActive; // @synthesize scanIsActive=_scanIsActive;
- (void)scannerDidStop:(id)arg1;	// IMP=0x0000000000779f0e
- (void)scanner:(id)arg1 didError:(id)arg2;	// IMP=0x0000000000779dfe
- (void)scanner:(id)arg1 didUpdateDevice:(id)arg2;	// IMP=0x0000000000779b2c
- (void)scanner:(id)arg1 didRemoveDevice:(id)arg2;	// IMP=0x0000000000779aef
- (void)scanner:(id)arg1 didAddDevice:(id)arg2;	// IMP=0x0000000000779ae2
- (void)clearBackoff;	// IMP=0x00000000007799c7
- (void)requestBackoff;	// IMP=0x00000000007798ac
- (void)stopBrowsingForAccessories;	// IMP=0x0000000000779861
- (void)startBrowsingForAirPlayWACAccessoriesWithBrowser:(id)arg1;	// IMP=0x00000000007797d4
- (void)startBrowsingForAccessories;	// IMP=0x0000000000779789
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000007796d2
- (id)initWithWACScanner:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000007795a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

