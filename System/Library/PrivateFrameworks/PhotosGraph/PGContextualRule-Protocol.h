//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class CLSCurationContext, PGContextualOptions, PGHighlightItemList;
@protocol PGHighlightItemModelReader;

@protocol PGContextualRule <NSObject>
- (void)enumerateContextualKeyAssetsForYearHighlight:(PGHighlightItemList *)arg1 sharingFilter:(unsigned short)arg2 withOptions:(PGContextualOptions *)arg3 modelReader:(id <PGHighlightItemModelReader>)arg4 curationContext:(CLSCurationContext *)arg5 usingBlock:(void (^)(PHAsset *, double, id <PGHighlightItem>, id <PGHighlightItem>, _Bool *))arg6;
- (_Bool)canProvideContextualKeyAssetsWithOptions:(PGContextualOptions *)arg1;
@end
