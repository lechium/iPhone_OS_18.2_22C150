//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXCallObserver, NSString;
@protocol MRDPhoneCallObserverDelegate;

@interface MRDPhoneCallObserver : NSObject
{
    CXCallObserver *_callObserver;	// 8 = 0x8
    unsigned long long _numberOfActiveCalls;	// 16 = 0x10
    id <MRDPhoneCallObserverDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000013574d
@property(nonatomic) __weak id <MRDPhoneCallObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMediaRemoteCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000134de4
- (_Bool)callControllerWillHandleCommandForBargeCalls:(id)arg1;	// IMP=0x0010000000134ddc
- (void)numberOfActivePhoneCalls:(CDUnknownBlockType)arg1;	// IMP=0x0010000000134c11
- (void)_notifyDelegate:(id)arg1;	// IMP=0x0010000000134b83
- (void)callObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x0010000000134b12
- (id)init;	// IMP=0x0010000000134aa1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

