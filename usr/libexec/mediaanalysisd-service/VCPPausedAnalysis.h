//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PHAsset;

@interface VCPPausedAnalysis : NSObject
{
    PHAsset *_asset;	// 8 = 0x8
    NSDictionary *_analysis;	// 16 = 0x10
}

+ (id)pausedAnalysis:(id)arg1 forAsset:(id)arg2;	// IMP=0x004000000013ea69
+ (id)persistedPausedAnalysisFromPhotoLibrary:(id)arg1;	// IMP=0x001000000013e94d
+ (id)filepathForPhotoLibrary:(id)arg1;	// IMP=0x001000000013e543
- (void).cxx_destruct;	// IMP=0x002000000013ef7e
@property(readonly, nonatomic) NSDictionary *analysis; // @synthesize analysis=_analysis;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (int)persist;	// IMP=0x001000000013eafd
- (id)initWithAnalysis:(id)arg1 forAsset:(id)arg2;	// IMP=0x001000000013e9b2
- (id);	// IMP=0x001000000013e5b1

@end

