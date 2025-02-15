//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLayoutRect, NSString;

@interface NSVisualFormatLayoutRule : NSObject
{
    NSString *_visualFormatString;	// 8 = 0x8
    unsigned long long _formatOptions;	// 16 = 0x10
    NSDictionary *_metricMapping;	// 24 = 0x18
    NSDictionary *_rectMapping;	// 32 = 0x20
    NSLayoutRect *_containerRect;	// 40 = 0x28
}

+ (id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x00100000000052b3
+ (id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;	// IMP=0x001000000000525c
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;	// IMP=0x0000000000005396
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000517a
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000050ea
- (void)dealloc;	// IMP=0x0000000000005092

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

