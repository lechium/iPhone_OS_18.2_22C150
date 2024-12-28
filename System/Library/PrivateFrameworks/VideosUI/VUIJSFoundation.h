//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VUIAppContext;

__attribute__((visibility("hidden")))
@interface VUIJSFoundation : NSObject
{
    VUIAppContext *_appContext;	// 8 = 0x8
    NSMutableDictionary *_jsTimers;	// 16 = 0x10
    NSMutableDictionary *_dateFormatterCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e9b62
@property(retain, nonatomic) NSMutableDictionary *dateFormatterCache; // @synthesize dateFormatterCache=_dateFormatterCache;
@property(retain, nonatomic) NSMutableDictionary *jsTimers; // @synthesize jsTimers=_jsTimers;
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
- (void)_jsTimerFired:(id)arg1;	// IMP=0x00000000000e9801
- (void)_clearTimer:(id)arg1;	// IMP=0x00000000000e963f
- (id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(_Bool)arg3;	// IMP=0x00000000000e92f6
- (void)stopTimers;	// IMP=0x00000000000e8f77
- (void)clearTimeout:(id)arg1;	// IMP=0x00000000000e8f65
- (id)setTimeout:(id)arg1 time:(long long)arg2;	// IMP=0x00000000000e8f50
- (void)clearInterval:(id)arg1;	// IMP=0x00000000000e8f3e
- (id)setInterval:(id)arg1 time:(long long)arg2;	// IMP=0x00000000000e8f26
- (id)initWithAppContext:(id)arg1;	// IMP=0x00000000000e8e89

@end
