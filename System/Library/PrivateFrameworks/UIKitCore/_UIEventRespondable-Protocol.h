//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSet, UIEvent;

@protocol _UIEventRespondable <NSObject>
- (void)_componentsCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_componentsEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_componentsChanged:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_componentsBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

