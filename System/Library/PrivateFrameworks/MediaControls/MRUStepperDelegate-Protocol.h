//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MRUStepper;

@protocol MRUStepperDelegate <NSObject>
- (void)stepperDidIncrement:(MRUStepper *)arg1;
- (void)stepperDidDecrement:(MRUStepper *)arg1;

@optional
- (void)stepperIncrementHoldEnded:(MRUStepper *)arg1;
- (void)stepperIncrementHoldBegan:(MRUStepper *)arg1;
- (void)stepperDecrementHoldEnded:(MRUStepper *)arg1;
- (void)stepperDecrementHoldBegan:(MRUStepper *)arg1;
@end
