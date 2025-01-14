//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUSectionedGridLayoutData : NSObject
{
    long long _numberOfPagesToCache;	// 8 = 0x8
    struct CGRect _currentContentBounds;	// 16 = 0x10
    NSMutableArray *_headerLayoutAttributes;	// 48 = 0x30
    NSMutableDictionary *_headerLayoutAttributesByVisualSection;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000059253c
@property(readonly, nonatomic) NSMutableDictionary *headerLayoutAttributesByVisualSection; // @synthesize headerLayoutAttributesByVisualSection=_headerLayoutAttributesByVisualSection;
@property(readonly, nonatomic) NSMutableArray *headerLayoutAttributes; // @synthesize headerLayoutAttributes=_headerLayoutAttributes;
@property(nonatomic) struct CGRect currentContentBounds; // @synthesize currentContentBounds=_currentContentBounds;
@property(readonly, nonatomic) long long numberOfPagesToCache; // @synthesize numberOfPagesToCache=_numberOfPagesToCache;
- (void)invalidate;	// IMP=0x000000000059246b
- (id)init;	// IMP=0x00000000005923c9

@end

