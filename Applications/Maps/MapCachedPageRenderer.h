//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCache, NSString;

@interface MapCachedPageRenderer
{
    NSCache *_printAreaToPrintInfoCache;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000065b106
@property(readonly, nonatomic) NSCache *printAreaToPrintInfoCache; // @synthesize printAreaToPrintInfoCache=_printAreaToPrintInfoCache;
- (id)computeCurrentPrintInfo;	// IMP=0x001000000065b0ed
// Error: Property attributes should begin with the type ('T') attribute, property name: currentPrintInfo
// Property attributes: (null)

@property(readonly, nonatomic) NSString *currentCacheKey;
- (id)init;	// IMP=0x001000000065ad42

@end
