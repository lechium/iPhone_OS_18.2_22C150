//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAutologgingDeallocSentinel : NSObject
{
    _Bool _called;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000188b28e
@property(nonatomic) _Bool called; // @synthesize called=_called;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)dealloc;	// IMP=0x000000000188b1e8

@end

