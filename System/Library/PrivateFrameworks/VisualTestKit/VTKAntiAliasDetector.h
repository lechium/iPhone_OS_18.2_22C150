//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VTKBitmapContext;
@protocol VTKColorDifferenceStrategy;

__attribute__((visibility("hidden")))
@interface VTKAntiAliasDetector : NSObject
{
    VTKBitmapContext *_leftContext;	// 8 = 0x8
    VTKBitmapContext *_rightContext;	// 16 = 0x10
    id <VTKColorDifferenceStrategy> _strategy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000352e
@property(retain, nonatomic) id <VTKColorDifferenceStrategy> strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) VTKBitmapContext *rightContext; // @synthesize rightContext=_rightContext;
@property(retain, nonatomic) VTKBitmapContext *leftContext; // @synthesize leftContext=_leftContext;
- (_Bool)isAntiAliasedAtPointHelper:(struct VTKPoint)arg1 leftContext:(id)arg2 rightContext:(id)arg3;	// IMP=0x000000000000307b
- (_Bool)isAntiAliasedAtPoint:(struct VTKPoint)arg1;	// IMP=0x0000000000003061
- (id)initWithLeftContext:(id)arg1 rightContext:(id)arg2 strategy:(id)arg3;	// IMP=0x0000000000002fa9

@end

