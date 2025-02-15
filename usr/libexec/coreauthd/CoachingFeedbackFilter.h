//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MechanismBase, NSMutableArray, NSNumber, NSSet;
@protocol LARemoteUI;

@interface CoachingFeedbackFilter : NSObject
{
    NSNumber *_lastFeedback;	// 8 = 0x8
    NSNumber *_lastSentFeedback;	// 16 = 0x10
    _Bool _waiting;	// 24 = 0x18
    NSMutableArray *_pendingBlocks;	// 32 = 0x20
    _Bool _finished;	// 40 = 0x28
    NSSet *_feedbackSet;	// 48 = 0x30
    double _feedbackDuration;	// 56 = 0x38
    double _iconDuration;	// 64 = 0x40
    MechanismBase<LARemoteUI> *_delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000002883
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) __weak MechanismBase<LARemoteUI> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double iconDuration; // @synthesize iconDuration=_iconDuration;
@property(readonly, nonatomic) double feedbackDuration; // @synthesize feedbackDuration=_feedbackDuration;
@property(readonly, nonatomic) NSSet *feedbackSet; // @synthesize feedbackSet=_feedbackSet;
- (void)_dispatchPendingBlocks;	// IMP=0x0010000000002673
- (void)dispatchNowOrWhenFeedbackDurationAchieved:(_Bool)arg1 finish:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002445
- (void)_doneWaiting;	// IMP=0x0010000000002386
- (void)_sendFeedback:(long long)arg1;	// IMP=0x00100000000020c4
- (double)_timeoutForFeedback:(long long)arg1;	// IMP=0x001000000000209e
- (void)scheduleFeedback:(long long)arg1;	// IMP=0x0010000000001e63
- (id)initWithDelegate:(id)arg1 feedbackSet:(id)arg2 feedbackDuration:(double)arg3 iconDuration:(double)arg4;	// IMP=0x0010000000001d97

@end

