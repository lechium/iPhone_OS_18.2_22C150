//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface WFObjectNameProvider : NSObject
{
    NSDictionary *_contents;	// 8 = 0x8
}

+ (id)sharedProvider;	// IMP=0x00600000000f0098
- (void).cxx_destruct;	// IMP=0x00000000000ef1ff
@property(readonly, copy, nonatomic) NSDictionary *contents; // @synthesize contents=_contents;
- (id)nameForObject:(id)arg1;	// IMP=0x00000000000ef0f0
- (id)init;	// IMP=0x00000000000eef89

@end

