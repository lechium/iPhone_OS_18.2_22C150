//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSet, UIPressesEvent;

@protocol _UIPressesEventRespondable <NSObject>
- (void)pressesCancelled:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (void)pressesEnded:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (void)pressesChanged:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (void)pressesBegan:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
@end
