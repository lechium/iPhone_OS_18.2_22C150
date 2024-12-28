//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFSetWallpaperActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    long long _locations;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000059433
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long locations; // @synthesize locations=_locations;
- (void)modalRemoteViewController:(id)arg1 didDismissWithResponse:(id)arg2;	// IMP=0x000000000005932c
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1;	// IMP=0x0000000000059252
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1;	// IMP=0x00000000000591c9
- (_Bool)isiPad;	// IMP=0x0000000000059179
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000059096
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058ff3
- (void)showPreviewWithInput:(id)arg1 key:(id)arg2 wallpaperLocation:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000058dd3
- (void)showPreviewForConfiguration:(id)arg1 selectedPoster:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058c06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end
