//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IFColor, NSString;

__attribute__((visibility("hidden")))
@interface ISCubicInterpolationLinearGradientResource : NSObject
{
    IFColor *_startingColor;	// 8 = 0x8
    IFColor *_endingColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002e148
@property(copy) IFColor *endingColor; // @synthesize endingColor=_endingColor;
@property(copy) IFColor *startingColor; // @synthesize startingColor=_startingColor;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000002ddcd
- (id)initWithStartingColor:(id)arg1 endingColor:(id)arg2;	// IMP=0x000000000002dd34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
