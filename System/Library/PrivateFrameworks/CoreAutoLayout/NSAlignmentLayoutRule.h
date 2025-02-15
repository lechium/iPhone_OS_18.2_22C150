//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSAlignmentLayoutRule : NSObject
{
    NSArray *_alignedAnchors;	// 8 = 0x8
}

+ (id)alignmentWithAnchors:(id)arg1;	// IMP=0x0010000000003d87
@property(readonly, copy) NSArray *alignedAnchors; // @synthesize alignedAnchors=_alignedAnchors;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;	// IMP=0x0000000000003df6
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003d15
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003cf4
- (void)dealloc;	// IMP=0x0000000000003cb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

