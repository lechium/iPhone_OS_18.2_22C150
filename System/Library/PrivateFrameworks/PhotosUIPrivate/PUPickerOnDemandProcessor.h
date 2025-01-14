//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUPickerConfiguration, VCPMediaAnalysisService;

__attribute__((visibility("hidden")))
@interface PUPickerOnDemandProcessor : NSObject
{
    int _stickerScoringRequestID;	// 8 = 0x8
    PUPickerConfiguration *_configuration;	// 16 = 0x10
    VCPMediaAnalysisService *_service;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001725e3
@property(nonatomic) int stickerScoringRequestID; // @synthesize stickerScoringRequestID=_stickerScoringRequestID;
@property(readonly, nonatomic) VCPMediaAnalysisService *service; // @synthesize service=_service;
@property(readonly, nonatomic) PUPickerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_performOnDemandStaticStickerScoringProcessingForRecentAssets:(CDUnknownBlockType)arg1;	// IMP=0x00000000001723b2
- (void)performOnDemandProcessingWithCanDisplayUserInterfaceHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001721ac
- (void)dealloc;	// IMP=0x0000000000172132
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000017209d

@end

