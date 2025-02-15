//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookUICore/QLItem.h>

@interface QLItem (PreviewController)
+ (unsigned long long)openInTypeForItem:(id)arg1 appIsContentManaged:(_Bool)arg2;	// IMP=0x006000000004c010
+ (_Bool)shouldUseRemoteCollection:(id)arg1;	// IMP=0x006000000004be54
- (_Bool)isEdited;	// IMP=0x001000000000a653
- (struct CGSize)preferredContentSizeForOrbPlatterWithURL:(id)arg1;	// IMP=0x001000000004c1c4
- (long long)defaultWhitePointAdaptivityStyle;	// IMP=0x001000000004c13e
- (_Bool)canBePrintedWithCustomPrinter;	// IMP=0x001000000004bff2
- (_Bool)shouldUseRemoteViewController;	// IMP=0x001000000004bc9b
- (struct CGSize)previewSizeForItemViewControllerSize:(struct CGSize)arg1;	// IMP=0x001000000004b776
- (struct CGSize)imageRawSizeOfContents:(id)arg1 withPreviewItemType:(unsigned long long)arg2 imageIsAnimated:(_Bool *)arg3;	// IMP=0x001000000004b3f0
- (id)previewItemViewControllerClassNameForType:(unsigned long long)arg1;	// IMP=0x001000000004b179
- (id)previewItemViewControllerClassName;	// IMP=0x001000000004b125
- (id)previewItemPrintingViewControllerClassName;	// IMP=0x001000000004b03c
- (Class)transformerClass;	// IMP=0x001000000004ae78
- (struct CGSize)predictedPreferredContentSizeForOrbPlatter;	// IMP=0x001000000004c387
@end

