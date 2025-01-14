//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SUUIStorePageSplit;

__attribute__((visibility("hidden")))
@interface SUUIStorePageSplitsDescription : NSObject
{
    SUUIStorePageSplit *_bottomSplit;	// 8 = 0x8
    SUUIStorePageSplit *_leftSplit;	// 16 = 0x10
    SUUIStorePageSplit *_rightSplit;	// 24 = 0x18
    SUUIStorePageSplit *_topSplit;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001ea995
@property(copy, nonatomic) SUUIStorePageSplit *topSplit; // @synthesize topSplit=_topSplit;
@property(copy, nonatomic) SUUIStorePageSplit *rightSplit; // @synthesize rightSplit=_rightSplit;
@property(copy, nonatomic) SUUIStorePageSplit *leftSplit; // @synthesize leftSplit=_leftSplit;
@property(copy, nonatomic) SUUIStorePageSplit *bottomSplit; // @synthesize bottomSplit=_bottomSplit;
- (id)description;	// IMP=0x00000000001ea89d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ea80f
- (void)sizeSplitsToFitWidth:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ea570
@property(readonly, nonatomic) long long numberOfSplits;
@property(readonly, nonatomic) SUUIStorePageSplit *firstSplit;
- (void)enumerateSplitsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ea2cb

@end

