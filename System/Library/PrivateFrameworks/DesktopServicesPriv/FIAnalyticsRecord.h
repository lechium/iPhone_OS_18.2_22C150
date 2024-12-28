//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FIAnalyticsRecord : NSObject
{
    NSString *_eventName;	// 8 = 0x8
    NSMutableDictionary *_eventDict;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c235
@property(readonly, nonatomic) NSMutableDictionary *eventDict; // @synthesize eventDict=_eventDict;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000000c18b
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000c175
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000000c163
- (id)objectForKey:(id)arg1;	// IMP=0x000000000000c13d
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000000c11b
- (_Bool)validate;	// IMP=0x000000000000c10d
- (id)initWithEventName:(id)arg1;	// IMP=0x000000000000c064

@end
