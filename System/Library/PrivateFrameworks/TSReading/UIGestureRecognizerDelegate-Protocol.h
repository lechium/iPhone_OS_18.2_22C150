//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class UIEvent, UIGestureRecognizer, UIPress, UITouch;

@protocol UIGestureRecognizerDelegate <NSObject>

@optional
- (_Bool)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceiveEvent:(UIEvent *)arg2;
- (_Bool)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceivePress:(UIPress *)arg2;
- (_Bool)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (_Bool)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;
@end
