//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNFaceLandmarkDetectorEspresso
{
    VCPCNNModelEspresso *_modelEspresso;	// 8 = 0x8
    float *_inputData;	// 16 = 0x10
}

+ (id)sharedModel:(id)arg1;	// IMP=0x006000000012cb9a
- (void).cxx_destruct;	// IMP=0x000000000012cfb0
- (void)dealloc;	// IMP=0x000000000012cf60
- (int)computeLandmarks:(float *)arg1;	// IMP=0x000000000012ccd2
- (float *)getInputBuffer;	// IMP=0x000000000012cb89
- (id)init;	// IMP=0x000000000012c9e1

@end
