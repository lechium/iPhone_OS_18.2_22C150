//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSAttendingInitiating;

@interface CSLocalAttendingHintProvider : NSObject
{
    id <CSAttendingInitiating> _initiator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000153e9
@property(retain, nonatomic) id <CSAttendingInitiating> initiator; // @synthesize initiator=_initiator;
- (void)postAttendingJarvisHintWithInfo:(id)arg1;	// IMP=0x00100000000153b8
- (void)postAttendingMagusNotSupportedHintWithInfo:(id)arg1;	// IMP=0x00100000000153a2
- (void)postAttendingTriggerForSiriPromptHintWithInfo:(id)arg1;	// IMP=0x001000000001538c
- (void)postAttendingStopHintWithInfo:(id)arg1;	// IMP=0x0010000000015376
- (void)postAttendingStartHintWithInfo:(id)arg1;	// IMP=0x0010000000015360
- (void)postAttendingWillStartHintWithInfo:(id)arg1;	// IMP=0x001000000001534a
- (id)initWithAttendingIniting:(id)arg1;	// IMP=0x00100000000152df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

