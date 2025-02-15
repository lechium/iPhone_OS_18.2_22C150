//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, VCPPhotosAssetChangeManager, VCPProgressReporter;

@interface VCPBatchAnalysisTask
{
    NSMutableArray *_subtasks;	// 8 = 0x8
    _Bool _allowStreaming;	// 16 = 0x10
    double _cost;	// 24 = 0x18
    VCPPhotosAssetChangeManager *_photosChangeManager;	// 32 = 0x20
    VCPProgressReporter *_progressReporter;	// 40 = 0x28
}

+ (id)taskWithPhotoLibrary:(id)arg1;	// IMP=0x00400000000cc3ce
- (void).cxx_destruct;	// IMP=0x00200000000cd666
@property(retain, nonatomic) VCPProgressReporter *progressReporter; // @synthesize progressReporter=_progressReporter;
@property(retain, nonatomic) VCPPhotosAssetChangeManager *photosChangeManager; // @synthesize photosChangeManager=_photosChangeManager;
@property(nonatomic) _Bool allowStreaming; // @synthesize allowStreaming=_allowStreaming;
@property(readonly, nonatomic) double cost; // @synthesize cost=_cost;
- (int)mainInternal;	// IMP=0x00100000000ccb25
- (_Bool)containsAsset:(id)arg1;	// IMP=0x00100000000cc8b1
- (void)addAnalysis:(unsigned long long)arg1 withExistingAnalysis:(id)arg2 forAsset:(id)arg3;	// IMP=0x00100000000cc813
- (void)addAnalysis:(unsigned long long)arg1 withExistingAnalysis:(id)arg2 forAsset:(id)arg3 allowStreaming:(_Bool)arg4;	// IMP=0x00100000000cc433
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00100000000cc2fe

@end

