//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverOptions : NSObject
{
    _Bool _layoutRTL;	// 8 = 0x8
    _Bool _roundsToScreenScale;	// 9 = 0x9
    double _interSectionSpacing;	// 16 = 0x10
    Class _layoutAttributesClass;	// 24 = 0x18
    Class _invalidationContextClass;	// 32 = 0x20
    CDUnknownBlockType _invalidationHandler;	// 40 = 0x28
    NSArray *_globalSupplementaryItems;	// 48 = 0x30
    CDUnknownBlockType _decorationRegistrationHandler;	// 56 = 0x38
    CDUnknownBlockType _sectionSolveErrorHandler;	// 64 = 0x40
    CDUnknownBlockType _traitCollectionSourceProvider;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000005a3ed1

@end

