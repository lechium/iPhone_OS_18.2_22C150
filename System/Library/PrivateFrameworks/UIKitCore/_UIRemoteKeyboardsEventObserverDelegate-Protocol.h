//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIResponder;

@protocol _UIRemoteKeyboardsEventObserverDelegate <NSObject>
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2 responder:(UIResponder *)arg3;
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2;
- (long long)lastEventSource;
@end
