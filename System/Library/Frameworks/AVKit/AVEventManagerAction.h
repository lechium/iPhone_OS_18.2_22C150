//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVEventManagerAction : NSObject
{
    NSString *_event;	// 8 = 0x8
}

+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 event:(id)arg3;	// IMP=0x0060000000079f7b
+ (id)actionWithBlock:(CDUnknownBlockType)arg1 event:(id)arg2;	// IMP=0x0060000000079f09
- (void).cxx_destruct;	// IMP=0x0000000000079ef9
@property(readonly, nonatomic) NSString *event; // @synthesize event=_event;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000079e7a
- (void)sendAction:(id)arg1;	// IMP=0x0000000000079e4e
- (_Bool)hasMatchingTarget:(id)arg1 withSelector:(SEL)arg2 forEvent:(id)arg3;	// IMP=0x0000000000079e46
- (_Bool)hasMatchingEvent:(id)arg1;	// IMP=0x0000000000079e27
- (id)initWithEvent:(id)arg1;	// IMP=0x0000000000079dbc

@end

