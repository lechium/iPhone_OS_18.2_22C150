//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC15UIUnderstanding11UIDetection : NSObject
{
    MISSING_TYPE *label;	// 8 = 0x8
    MISSING_TYPE *confidence;	// 16 = 0x10
    MISSING_TYPE *text;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000e500
- (id)init;	// IMP=0x000000000000e4a0
- (id)initWithLabel:(long long)arg1 confidence:(double)arg2 text:(id)arg3;	// IMP=0x000000000000df00
@property(nonatomic, copy) NSString *text;
@property(nonatomic, readonly) double confidence; // @synthesize confidence;
@property(nonatomic, readonly) NSString *labelString;
@property(nonatomic, readonly) long long label; // @synthesize label;

@end
