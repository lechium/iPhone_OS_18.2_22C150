//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface VCPUnifiedFullAnalysisTask
{
    NSDictionary *_options;	// 8 = 0x8
}

+ (id)taskWithPhotoLibrary:(id)arg1 options:(id)arg2;	// IMP=0x004000000010ec59
- (void).cxx_destruct;	// IMP=0x002000000010f71c
- (int)mainInternal;	// IMP=0x001000000010f39e
- (unsigned long long)assetCountForMediaAnalysisTaskWithMediaType:(long long)arg1 mediaSubtypes:(unsigned long long)arg2;	// IMP=0x001000000010f122
- (int)performProcessingForProviderType:(long long)arg1 progressReporter:(id)arg2;	// IMP=0x001000000010eced
- (id)initWithPhotoLibrary:(id)arg1 options:(id)arg2;	// IMP=0x001000000010ebcd

@end
