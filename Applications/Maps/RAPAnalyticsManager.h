//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPAnalyticsManager : NSObject
{
}

+ (id)_valueFromReport:(id)arg1;	// IMP=0x0040000000f13509
+ (int)_targetFromFeedbackType:(int)arg1;	// IMP=0x0010000000f134ec
+ (int)_targetFromReport:(id)arg1;	// IMP=0x0010000000f132f7
+ (id)_requestParametersFromReport:(id)arg1;	// IMP=0x0010000000f13296
+ (void)_captureRAPUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 report:(id)arg4 requestParameters:(id)arg5 duration:(id)arg6;	// IMP=0x0010000000f1305b
+ (void)_captureRAPUserAction:(int)arg1 target:(int)arg2 value:(id)arg3 report:(id)arg4;	// IMP=0x0010000000f12fbb
+ (void)captureRAPAcknowledgementDoneActionFromReport:(id)arg1;	// IMP=0x0010000000f12f92
+ (void)captureRAPSendActionFromReport:(id)arg1;	// IMP=0x0010000000f12d36
+ (void)captureRAPCancelSearchActionFromReport:(id)arg1;	// IMP=0x0010000000f12c6b
+ (void)captureRAPCancelActionFromReport:(id)arg1;	// IMP=0x0010000000f12ba0
+ (void)captureRAPRevealActionFromReport:(id)arg1;	// IMP=0x0010000000f10008

@end
