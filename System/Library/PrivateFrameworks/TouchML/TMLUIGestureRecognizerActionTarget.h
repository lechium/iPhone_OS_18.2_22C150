//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMLUIGestureRecognizerActionTarget : NSObject
{
    NSString *_signalName;	// 8 = 0x8
    long long _state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001150e
- (void)handleGesture:(id)arg1;	// IMP=0x00000000000114bf
- (id)initWithSignal:(id)arg1 state:(long long)arg2;	// IMP=0x0000000000011441

@end

