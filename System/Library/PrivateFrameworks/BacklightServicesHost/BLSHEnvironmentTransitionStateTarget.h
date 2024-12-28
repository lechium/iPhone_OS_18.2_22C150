//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSBacklightChangeEvent, BLSBacklightSceneVisualState, BLSHPendingBacklightRamp, NSDate;

__attribute__((visibility("hidden")))
@interface BLSHEnvironmentTransitionStateTarget : NSObject
{
    _Bool _didUpdateInitialState;	// 8 = 0x8
    _Bool _didCompleteAnimation;	// 9 = 0x9
    unsigned long long _sequenceID;	// 16 = 0x10
    BLSBacklightChangeEvent *_triggerEvent;	// 24 = 0x18
    BLSHPendingBacklightRamp *_pendingBacklightRamp;	// 32 = 0x20
    BLSBacklightSceneVisualState *_visualState;	// 40 = 0x28
    NSDate *_presentationDate;	// 48 = 0x30
    long long _backlightState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000013910
@property _Bool didCompleteAnimation; // @synthesize didCompleteAnimation=_didCompleteAnimation;
@property _Bool didUpdateInitialState; // @synthesize didUpdateInitialState=_didUpdateInitialState;
@property long long backlightState; // @synthesize backlightState=_backlightState;
@property(readonly, nonatomic) NSDate *presentationDate; // @synthesize presentationDate=_presentationDate;
@property(readonly, nonatomic) BLSBacklightSceneVisualState *visualState; // @synthesize visualState=_visualState;
@property(readonly, nonatomic) BLSHPendingBacklightRamp *pendingBacklightRamp; // @synthesize pendingBacklightRamp=_pendingBacklightRamp;
@property(readonly, nonatomic) BLSBacklightChangeEvent *triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(readonly, nonatomic) unsigned long long sequenceID; // @synthesize sequenceID=_sequenceID;
- (_Bool)isEqualToVisualState:(id)arg1 presentationDate:(id)arg2;	// IMP=0x000000000001384b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013633
- (unsigned long long)hash;	// IMP=0x0000000000013593
- (id)debugDescription;	// IMP=0x0000000000013400
- (id)description;	// IMP=0x00000000000131bb
- (id)initWithSequenceID:(unsigned long long)arg1 backlightState:(long long)arg2 visualState:(id)arg3 presentationDate:(id)arg4 triggerEvent:(id)arg5 pendingBacklightRamp:(id)arg6;	// IMP=0x00000000000130c4
- (id)initWithTarget:(id)arg1 visualState:(id)arg2 presentationDate:(id)arg3;	// IMP=0x0000000000012fc8
- (id)initWithSequenceID:(unsigned long long)arg1 backlightState:(long long)arg2 triggerEvent:(id)arg3 backlightRampBlock:(CDUnknownBlockType)arg4 forIdentifier:(id)arg5 previousTarget:(id)arg6;	// IMP=0x0000000000012c7f

@end
