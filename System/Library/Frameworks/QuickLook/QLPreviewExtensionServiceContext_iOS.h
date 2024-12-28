//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString, QLPreviewProvider;
@protocol QLPreviewingController;

__attribute__((visibility("hidden")))
@interface QLPreviewExtensionServiceContext_iOS : NSExtensionContext
{
    _Bool _isObservingPreviewController;	// 8 = 0x8
    id _contents;	// 16 = 0x10
    QLPreviewProvider<QLPreviewingController> *_previewProvider;	// 24 = 0x18
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0010000000086444
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0010000000085ae4
- (void).cxx_destruct;	// IMP=0x0000000000088307
@property(retain, nonatomic) QLPreviewProvider<QLPreviewingController> *previewProvider; // @synthesize previewProvider=_previewProvider;
- (void)dealloc;	// IMP=0x0000000000088294
- (void)_stopObservingPreviewControllerAttributeChanges;	// IMP=0x00000000000881e7
- (void)_startObservingPreviewControllerAttributeChanges;	// IMP=0x0000000000088134
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000087ff6
- (void)invalidateServiceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000087f23
- (void)generatePreviewForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008784f
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000087011
- (void)setHostViewControllerProxy:(id)arg1;	// IMP=0x0000000000086eb5
- (void)getARQLInlineProxy3WithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000086e07
- (void)getARQLInlineProxy2WithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000086d59
- (void)getARQLInlineProxyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000086cab
- (void)getPrinterProxyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000086bdf
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000086ab7
- (void)previewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000869d3
- (void)previewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000868ef
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x000000000008680b
- (void)previewWillAppear:(_Bool)arg1;	// IMP=0x0000000000086727
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;	// IMP=0x00000000000866be
- (void)previewControllerDidUpdateTitle:(id)arg1;	// IMP=0x0000000000086655
- (void)previewControllerWantsFullScreen:(_Bool)arg1;	// IMP=0x000000000008660b
- (id)previewViewController;	// IMP=0x00000000000865f9
- (id)protocolHost;	// IMP=0x00000000000864b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
