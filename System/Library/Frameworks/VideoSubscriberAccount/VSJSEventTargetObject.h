//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VSJSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VSJSEventTargetObject : VSJSObject
{
    NSMutableDictionary *_listeners;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000930e
@property(retain, nonatomic) NSMutableDictionary *listeners; // @synthesize listeners=_listeners;
- (unsigned long long)_indexForListener:(id)arg1 withEventType:(id)arg2;	// IMP=0x0000000000009114
- (void)dispatchEvent:(id)arg1 withInfo:(id)arg2;	// IMP=0x0000000000008ebd
- (void)removeEventListener:(id)arg1:(id)arg2;	// IMP=0x0000000000008d23
- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000000008b50
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000008af3

@end
