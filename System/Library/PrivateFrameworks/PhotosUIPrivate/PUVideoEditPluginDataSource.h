//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHAsset;

__attribute__((visibility("hidden")))
@interface PUVideoEditPluginDataSource : NSObject
{
    _Bool _allowsRevertInSession;	// 8 = 0x8
    PHAsset *_videoAsset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000062021a
@property(nonatomic) _Bool allowsRevertInSession; // @synthesize allowsRevertInSession=_allowsRevertInSession;
@property(retain, nonatomic) PHAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (void)_fetchCanRevertAsset:(id)arg1 asynchronously:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000061ff26
- (void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000061fe10
- (_Bool)editPluginSessionCanRevertToOriginal:(id)arg1;	// IMP=0x000000000061fd06
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000061fb8b
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000061faea
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000061f8de
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000061f6ee
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000061f524
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000061f3ee
- (id)initWithVideoAsset:(id)arg1;	// IMP=0x000000000061f371
- (id)init;	// IMP=0x000000000061f35d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
