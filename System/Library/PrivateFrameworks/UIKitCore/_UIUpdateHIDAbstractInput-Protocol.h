//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UIUpdateHIDAbstractInput
- (struct __IOHIDEvent *)stopEventForModelTime:(unsigned long long)arg1 alignment:(int)arg2;
- (void)removeEvent:(struct __IOHIDEvent *)arg1;
- (void)addEvent:(struct __IOHIDEvent *)arg1;
@end
