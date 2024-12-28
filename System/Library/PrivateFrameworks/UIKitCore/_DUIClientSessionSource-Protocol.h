//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_DUIClientSessionCommon-Protocol.h>

@class BKSAnimationFenceHandle, NSArray;

@protocol _DUIClientSessionSource <_DUIClientSessionCommon>
- (oneway void)dataTransferSessionFinished;
- (oneway void)dragFailed;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)handOffCancelledItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;

@optional
- (oneway void)checkCanHandOffCancelledItems:(NSArray *)arg1 withReply:(void (^)(_Bool, unsigned int, unsigned long long))arg2;
- (oneway void)canHandOffCancelledItems:(NSArray *)arg1 withReply:(void (^)(_Bool, _DUITargetLayerDescriptor *))arg2;
@end
