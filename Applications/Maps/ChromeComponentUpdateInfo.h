//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ChromeComponentUpdateInfo : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_callStackSymbols;	// 16 = 0x10
}

+ (_Bool)supportsCallstackSymbols;	// IMP=0x0040000000d10289
- (void).cxx_destruct;	// IMP=0x0020000000d103a3
@property(readonly, nonatomic) NSArray *callStackSymbols; // @synthesize callStackSymbols=_callStackSymbols;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)init;	// IMP=0x0010000000d1037b
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d102c1

@end

