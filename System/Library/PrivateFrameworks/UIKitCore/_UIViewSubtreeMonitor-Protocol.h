//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;

@protocol _UIViewSubtreeMonitor <NSObject>
- (void)_monitoredView:(UIView *)arg1 didMoveFromSuperview:(UIView *)arg2 toSuperview:(UIView *)arg3;
- (void)_monitoredView:(UIView *)arg1 willMoveFromSuperview:(UIView *)arg2 toSuperview:(UIView *)arg3;
- (_Bool)_monitorsView:(UIView *)arg1;
@end

