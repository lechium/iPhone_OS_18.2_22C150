//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationActivityBuffer : NSObject
{
    struct vector<std::pair<double, CLMotionActivity::Type>, std::allocator<std::pair<double, CLMotionActivity::Type>>> fActivityWindow;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00200000007cbc33
- (void).cxx_destruct;	// IMP=0x00100000007cbc17
-     // Error parsing type: v24@0:8r^(NotificationData={CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}B{DeviceTouchState=Bd}{?=ii{?=dd}ddddddddddidi{?=dd}diIiiidB})16, name: feedMotionStateData:
- (_Bool)isRunningStateInWindow;	// IMP=0x00100000007cb982
- (void)ageOutMotionStateArray;	// IMP=0x00100000007cb88c

@end

