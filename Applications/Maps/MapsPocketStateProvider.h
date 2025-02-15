//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMPocketStateManager, NSString, NSTimer;
@protocol MapsPocketStateProviderDelegate;

@interface MapsPocketStateProvider : NSObject
{
    id <MapsPocketStateProviderDelegate> _delegate;	// 8 = 0x8
    CMPocketStateManager *_manager;	// 16 = 0x10
    NSTimer *_updateTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000a30e4f
- (void)_fireStateUpdate:(long long)arg1;	// IMP=0x0010000000a30df9
- (void)_enqueueNewState:(long long)arg1;	// IMP=0x0010000000a30cc2
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;	// IMP=0x0010000000a30af1
- (void)dealloc;	// IMP=0x0010000000a30a85
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000a309db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

