//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUtilities/NSObject-Protocol.h>

@protocol AXAccessQueueTimer <NSObject>
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)cancel;
- (void)afterDelay:(double)arg1 processBlock:(void (^)(void))arg2;
@end

