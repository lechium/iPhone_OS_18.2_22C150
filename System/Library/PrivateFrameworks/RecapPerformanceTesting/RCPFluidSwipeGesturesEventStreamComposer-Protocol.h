//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RecapPerformanceTesting/RCPBaseEventStreamComposer-Protocol.h>

@protocol RCPFluidSwipeGesturesEventStreamComposer <RCPBaseEventStreamComposer>
- (void)composeNavigationGestureInMotion:(unsigned short)arg1 frequency:(unsigned long long)arg2 actionBlock:(void (^)(id <RCPProgressEventStreamComposer>))arg3;
- (void)composeDockGestureOfFlavor:(unsigned short)arg1 motion:(unsigned short)arg2 frequency:(unsigned long long)arg3 actionBlock:(void (^)(id <RCPProgressEventStreamComposer>))arg4;
- (void)composeDockGestureInMotion:(unsigned short)arg1 frequency:(unsigned long long)arg2 actionBlock:(void (^)(id <RCPProgressEventStreamComposer>))arg3;
@end

