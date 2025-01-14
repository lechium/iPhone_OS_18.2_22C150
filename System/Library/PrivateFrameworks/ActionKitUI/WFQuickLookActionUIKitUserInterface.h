//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFActionUserInterface.h>

@class NSError, NSString, QLPreviewController, WFContentCollection;

__attribute__((visibility("hidden")))
@interface WFQuickLookActionUIKitUserInterface : WFActionUserInterface
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    WFContentCollection *_dataSource;	// 16 = 0x10
    QLPreviewController *_previewController;	// 24 = 0x18
    NSError *_exitError;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000032dde
@property(retain, nonatomic) NSError *exitError; // @synthesize exitError=_exitError;
@property(retain, nonatomic) QLPreviewController *previewController; // @synthesize previewController=_previewController;
@property(retain, nonatomic) WFContentCollection *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (_Bool)previewController:(id)arg1 canShareItem:(id)arg2;	// IMP=0x0000000000032b6d
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x00000000000329f9
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000032967
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032885
- (void)showWithItems:(id)arg1 fullScreen:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003269f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end

