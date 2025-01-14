//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol PDWatchExpressModeStateControllerDelegate;

@interface PDWatchExpressModeStateController : NSObject
{
    _Bool _inLostMode;	// 8 = 0x8
    NSSet *_expressPassConfigurations;	// 16 = 0x10
    id <PDWatchExpressModeStateControllerDelegate> _delegate;	// 24 = 0x18
    unsigned long long _expressStatus;	// 32 = 0x20
    unsigned long long _lastSuggestedExpressStatus;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000424264
@property(nonatomic) unsigned long long lastSuggestedExpressStatus; // @synthesize lastSuggestedExpressStatus=_lastSuggestedExpressStatus;
@property(nonatomic) unsigned long long expressStatus; // @synthesize expressStatus=_expressStatus;
@property(nonatomic) __weak id <PDWatchExpressModeStateControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isInLostMode) _Bool inLostMode; // @synthesize inLostMode=_inLostMode;
@property(retain, nonatomic) NSSet *expressPassConfigurations; // @synthesize expressPassConfigurations=_expressPassConfigurations;
- (void)receivedXPCEvent:(id)arg1 forEventStream:(id)arg2;	// IMP=0x0010000000423ea2
- (void)_updateExpressModeEnablement;	// IMP=0x0010000000423dee
- (void)_updateExpressAvailabilityListeners;	// IMP=0x0010000000423d83
- (void)_requestUpdateExpressStatus:(unsigned long long)arg1;	// IMP=0x0010000000423b5b
- (void)_logControllerState;	// IMP=0x0010000000423a63
- (void)_unregisterForExpressAvailabilityChanges;	// IMP=0x00100000004239f0
- (void)_registerForExpressAvailabilityChanges;	// IMP=0x0010000000423947
- (void)setExpressModeAllowed:(_Bool)arg1;	// IMP=0x0010000000423873
- (id)initWithExpressPassConfigurations:(id)arg1 inLostMode:(_Bool)arg2;	// IMP=0x001000000042376c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

