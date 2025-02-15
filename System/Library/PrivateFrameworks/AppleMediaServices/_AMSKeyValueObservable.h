//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSObservable.h"

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface _AMSKeyValueObservable : AMSObservable
{
    NSObject *_context;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    NSObject *_object;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004721fa
@property(nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) NSObject *context; // @synthesize context=_context;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000004720b1
- (_Bool)sendCompletion;	// IMP=0x0000000000471fe3
- (_Bool)cancel;	// IMP=0x0000000000471f15
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000471e00

@end

